// replace big interger with minus value (e.g. 4294967295 = -1)
// remove ending 0 in decimal
// adjust '{' position
// fill ';' in the end of line
// adjust definition pos of LGB and sub class Smoke of SmokeShell

// Many attributes' order is different in 2.01 but no actual value differences
// 2.01 add MineMineE/MineMineE/Bomb in CfgVehicles
// 2.01 modified LaserTarget's few attributes

// Add LaserTarget classes. Probably useless

class CfgVehicles {
	access = 1;
	vehicleClass[] = {"Men","Car","Armored","Air","Support","Camera","Objects","Ammo","Sounds","Mines"};
	class All {
		access = 3;
		scope = 0;
		reversed = 1;
		autocenter = 1;
		animated = 1;
		mapSize = 10;
		vehicleClass = "";
		icon = "unknown_object";
		side = 4;
		displayName = "$STR_DN_UNKNOWN";
		nameSound = "target";
		weaponSlots = 0;
		camouflage = 2;
		audible = 1;
		accuracy = 0;
		spotableNightLightsOff = 0.05;
		spotableNightLightsOn = 4;
		insideSoundCoef = 0.5;
		outGunnerMayFire = 0;
		viewGunnerInExternal = 0;
		unloadInCombat = 0;
		visibleNightLightsOff = 0.1;
		visibleNightLightsOn = 0.2;
		sensitivity = 1;
		sensitivityEar = 0.0075;
		model = "bmp";
		picture = "";
		simulation = "";
		destrType = "DestructDefault";
		armor = 100;
		armorLights = 0.4;
		armorStructural = 1;
		cost = 500000;
		fuelCapacity = 0;
		extCameraPosition[] = {0,2,-20};
		steerAheadSimul = 0.3;
		steerAheadPlan = 0.4;
		minFireTime = 20;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		precision = 5;
		brakeDistance = 5;
		formationX = 10;
		formationZ = 20;
		formationTime = 10;
		irTarget = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		preferRoads = 0;
		unitInfoType = "UnitInfoTank";
		hideUnitInfo = 0;
		nightVision = 0;
		commanderCanSee = 31;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		maxSpeed = 80;
		secondaryExplosion = -1;
		hasDriver = 1;
		hasGunner = 0;
		hasCommander = 0;
		driverIsCommander = 0;
		hideWeaponsDriver = 1;
		hideWeaponsGunner = 1;
		hideWeaponsCommander = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		class ViewPilotBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewCommanderBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewGunnerBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewCargoBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -360;
			maxAngleY = 360;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewPilot: ViewPilotBase {};
		class ViewGunner: ViewGunnerBase {};
		class ViewCommander: ViewCommanderBase {};
		class ViewCargo: ViewCargoBase {};
		class ViewOptics: ViewOpticsBase {};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {};
		class TransportMagazines {};
		attendant = 0;
		soundEngine[] = {"",1,1};
		soundEnviron[] = {"",1,1};
		class SoundEnvironExt {};
		soundCrash[] = {"Vehicles\crash",0.316228,1};
		soundLandCrash[] = {"Explosions\intoground",0.316228,1};
		soundWaterCrash[] = {"Explosions\intowater",0.316228,1};
		soundGetIn[] = {"Vehicles\get_in",0.000316,1};
		soundGetOut[] = {"Vehicles\get_out",0.000316,1};
		soundServo[] = {"Vehicles\gun_elevate",0.01,0.5};
		soundDammage[] = {"",1,1};
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0.7,0.5,0.3};
		typicalCargo[] = {};
		class Reflectors {};
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
		driverAction = "ManActCargo";
		gunnerAction = "ManActCargo";
		commanderAction = "ManActCargo";
		driverInAction = "ManActCargo";
		gunnerInAction = "ManActCargo";
		commanderInAction = "ManActCargo";
		cargoAction[] = {"ManActCargo"};
		cargoIsCoDriver[] = {0};
		driverOpticsModel = "";
		gunnerOpticsModel = "";
		commanderOpticsModel = "";
		driverOpticsColor[] = {0,0,0,1};
		gunnerOpticsColor[] = {0,0,0,1};
		commanderOpticsColor[] = {0,0,0,1};
		hideProxyInCombat = 0;
		forceHideGunner = 0;
		forceHideDriver = 0;
		forceHideCommander = 0;
		gunnerUsesPilotView = 0;
		commanderUsesPilotView = 0;
		castDriverShadow = 0;
		castGunnerShadow = 0;
		castCommanderShadow = 0;
		castCargoShadow = 0;
		ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		ejectDeadCommander = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
	};
	class Logic: All {
		displayName = "$STR_DN_LOGIC";
		nameSound = "target";
		scope = 2;
		vehicleClass = "Objects";
		simulation = "invisible";
		side = 7;
		icon = "vlajka";
		model = "empty";
		picture = "iaston";
	};
	class AllVehicles: All {
		icon = "unknown_move";
	};
	class Land: AllVehicles {
		displayName = "$STR_DN_VEHICLE";
		nameSound = "target";
		accuracy = 0.0005;
		armor = 30;
		cost = 100000;
		fuelCapacity = 0;
		weapons[] = {"MachineGun12_7"};
		magazines[] = {"MachineGun12_7"};
		type = 1;
		threat[] = {0.8,0.8,0.3};
	};
	class LandVehicle: Land {
		displayName = "$STR_DN_VEHICLE";
		accuracy = 0.02;
		cost = 500000;
		class Reflectors {
			class Left {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
			class Right {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
	};
	class Car: LandVehicle {
		mapSize = 5;
		icon = "car";
		displayName = "$STR_DN_CAR";
		nameSound = "car";
		accuracy = 0.2;
		cost = 40000;
		fuelCapacity = 100;
		unloadInCombat = 1;
		canFloat = 0;
		armor = 20;
		armorStructural = 4;
		driverCanSee = "8+2";
		gunnerCanSee = "2+8";
		class HitEngine {
			armor = 1.2;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorGlass = 0.5;
		vehicleClass = "Car";
		wheelCircumference = 2.513;
		turnCoef = 2;
		terrainCoef = 3;
		maxSpeed = 100;
		preferRoads = 1;
		unitInfoType = "UnitInfoCar";
		hideUnitInfo = 1;
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 10;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		soundEngine[] = {"Vehicles\mediumcar",0.031623,2};
		soundEnviron[] = {"Objects\noise",0.000562,0.25};
		soundCrash[] = {"Vehicles\crash",0.1,1};
		soundGear[] = {"Vehicles\truck_gear",0.000178,1};
		extCameraPosition[] = {0,1,-10};
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 1;
			initAngleX = 15;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		simulation = "car";
		weapons[] = {"CarHorn"};
		magazines[] = {};
		type = 0;
		threat[] = {0.5,0.5,0.5};
		typicalCargo[] = {"Soldier"};
		audible = 3;
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";
		damperSize = 0.1;
		damperForce = 30;
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -340;
			min = 0;
			max = 1;
		};
		scudLaunch = "";
		scudStart = "";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class Motorcycle: LandVehicle {
		simulation = "motorcycle";
		displayName = "$STR_DN_MOTORCYCLE";
		accuracy = 0.2;
		mapSize = 5;
		icon = "car";
		nameSound = "car";
		isBicycle = 0;
		unloadInCombat = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		armor = 10;
		armorStructural = 4;
		cost = 500;
		fuelCapacity = 50;
		transportSoldier = 0;
		typicalCargo[] = {};
		driverCanSee = "8+2";
		gunnerCanSee = "2+8";
		class HitEngine {
			armor = 1.2;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa"};
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		armorWheels = 0.05;
		armorGlass = 0.5;
		vehicleClass = "Car";
		wheelCircumference = 2.513;
		turnCoef = 1;
		terrainCoef = 3;
		maxSpeed = 120;
		preferRoads = 1;
		unitInfoType = "UnitInfoCar";
		hideUnitInfo = 1;
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 25;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		soundEngine[] = {"Vehicles\mediumcar",0.031623,2};
		soundEnviron[] = {"Objects\noise",0.000562,0.25};
		soundCrash[] = {"Vehicles\crash",0.1,1};
		soundGear[] = {"Vehicles\truck_gear",0.000178,1};
		extCameraPosition[] = {0,1,-10};
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 1;
			initAngleX = 15;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class Reflectors {
			class Right {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		weapons[] = {"CarHorn"};
		magazines[] = {};
		type = 0;
		threat[] = {0.5,0.5,0.5};
		audible = 3;
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -340;
			min = 0;
			max = 1;
		};
		transportMaxMagazines = 5;
		transportMaxWeapons = 0;
	};
	class Tank: LandVehicle {
		vehicleClass = "Armored";
		icon = "tank";
		outGunnerMayFire = 0;
		displayName = "$STR_DN_TANK";
		nameSound = "tank";
		accuracy = 0.12;
		getInRadius = 3.5;
		fuelCapacity = 700;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		armor = 400;
		armorStructural = 2;
		class HitEngine {
			armor = 0.8;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		class HitHull {
			armor = 1;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 0.8;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.6;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		class HitLTrack {
			armor = 0.6;
			material = 53;
			name = "pasL";
			passThrough = 1;
		};
		class HitRTrack {
			armor = 0.6;
			material = 54;
			name = "pasP";
			passThrough = 1;
		};
		armorHull = 1;
		armorTurret = 0.8;
		armorGun = 0.6;
		armorEngine = 0.8;
		armorLights = 0.4;
		armorTracks = 0.6;
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilotBase {
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.07;
			maxFov = 0.35;
		};
		cost = 1000000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.316228,0.7};
		soundEngine[] = {"Vehicles\OldIdle1",0.316228,1};
		soundCrash[] = {"Vehicles\crash_small2",0.316228,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.003162,1};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		hasGunner = 1;
		hasCommander = 1;
		nightVision = 1;
		forceHideGunner = 1;
		driverAction = "ManActCargo";
		gunnerAction = "ManActCargo";
		commanderAction = "ManActCargo";
		driverInAction = "ManActCargo";
		gunnerInAction = "ManActCargo";
		commanderInAction = "ManActCargo";
		simulation = "tank";
		formationX = 20;
		formationZ = 30;
		precision = 5;
		brakeDistance = 15;
		maxSpeed = 80;
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",0.031623,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.000316,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		canFloat = 0;
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 8;
		audible = 6;
		hideProxyInCombat = 1;
		driverOpticsModel = "optika_tank_driver";
		gunnerOpticsModel = "optika_tank_gunner";
		commanderOpticsModel = "optika_tank_driver";
		driverOpticsColor[] = {0,0,0,1};
		gunnerOpticsColor[] = {0.91,0.23,0.23,1};
		commanderOpticsColor[] = {0.91,0.23,0.23,1};
		class Wheels {
			rotR[] = {"kolL1","kolL2","kolL3","kolL4","kolL5","kolL6","kolL7","kolL8"};
			rotL[] = {"kolP1","kolP2","kolP3","kolP4","kolP5","kolP6","kolP7","kolP8"};
			upDownL[] = {"koloP1","podkoloP1","koloP2","podkoloP2","koloP3","podkoloP3","koloP4","podkoloP4","koloP5","podkoloP5","koloP6","podkoloP6","koloP7","podkoloP7","koloP8","podkoloP8"};
			upDownR[] = {"koloL1","podkoloL1","koloL2","podkoloL2","koloL3","podkoloL3","koloL4","podkoloL4","koloL5","podkoloL5","koloL6","podkoloL6","koloL7","podkoloL7","koloL8","podkoloL8"};
		};
		class GunFire: WeaponFireGun {};
		class GunClouds: WeaponCloudsGun {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -100;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = -100;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 340;
			min = 0;
			max = 1;
		};
		class IndicatorRadar {
			selection = "ukaz_radar";
			axis = "osa_radar";
			angle = -360;
			min = 0;
			max = 1;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360;
			min = 0;
			max = 6.283185;
		};
		class CargoLight {
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class APC: Tank {
		icon = "bmp";
		vehicleClass = "Armored";
		displayName = "$STR_DN_APC";
		nameSound = "apc";
		accuracy = 0.12;
		fuelCapacity = 700;
		armor = 200;
		cost = 1000000;
		hasGunner = 1;
		hasCommander = 1;
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.316228,0.7};
		soundEngine[] = {"Vehicles\OldIdle1",0.316228,1};
		soundCrash[] = {"Vehicles\crash_small2",0.316228,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.01,1};
		simulation = "tank";
		maxSpeed = 60;
		class Turret: TurretBase {
			minElev = -4.5;
			maxElev = 20;
		};
		canFloat = 0;
		weapons[] = {"AT3Launcher","MachineGun12_7"};
		magazines[] = {"AT3Launcher","MachineGun12_7"};
		type = 1;
		threat[] = {0.8,1,0.3};
	};
	class Man: Land {
		mapSize = 0.5;
		vehicleClass = "Men";
		icon = "soldier";
		autocenter = 0;
		isMan = 1;
		displayName = "$STR_DN_MAN";
		nameSound = "man";
		extCameraPosition[] = {0,0.3,-3.5};
		accuracy = 0.25;
		audible = 0.05;
		camouflage = 1;
		sensitivity = 1;
		sensitivityEar = 0.13;
		formationX = 5;
		formationZ = 5;
		precision = 1;
		brakeDistance = 1;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.2;
		maxSpeed = 24;
		irTarget = 0;
		canHideBodies = 0;
		canDeactivateMines = 0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 1;
		armor = 3;
		armorStructural = 2;
		armorHead = 0.7;
		armorBody = 0.8;
		armorHands = 0.5;
		armorLegs = 0.5;
		cost = 100000;
		simulation = "soldier";
		wounds[] = {"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\merged\00007mc_vojakw2.paa","\merged\00009mc_vojakw2.paa","\merged\00008mc_vojake2.paa","\merged\00010mc_vojake2.paa","00004mc_vojakw2.paa","00009mc_vojakw2.paa","00005mc_vojakw2.paa","00008mc_vojakw2.paa","00003mc_vojakw2.paa","00007mc_vojakw2.paa","00004mc_vojake2.paa","00007mc_vojake2.paa","00005mc_vojake2.paa","00008mc_vojake2.paa","00004mc_tankistaw2.paa","00007mc_tankistaw2.paa","00002mc_tankistaw2.paa","00006mc_tankistaw2.paa","00000mc_tankistae2.paa","00008mc_tankistae2.paa","00003mc_tankistae2.paa","00007mc_tankistae2.paa","00002mc_saboteur.paa","00007mc_saboteur.paa","00000mc_saboteur.paa","00006mc_saboteur.paa","00003mc_SPECNAS2.paa","00011mc_SPECNAS2.paa","00005mc_SPECNAS2.paa","00010mc_SPECNAS2.paa","00000mc_vojakg2.paa","00009mc_vojakg2.paa","00003mc_vojakg2.paa","00008mc_vojakg2.paa","00003mc_vojakg3.paa","00009mc_vojakg3.paa","00004mc_vojakg3.paa","00008mc_vojakg3.paa","00005mc_vojakg3.paa","00007mc_vojakg3.paa","00002mc_pilote2.paa","00007mc_pilote2.paa","00004mc_pilote2.paa","00006mc_pilote2.paa","00003mc_Pilotw2.paa","00007mc_Pilotw2.paa","00002mc_Pilotw2.paa","00006mc_Pilotw2.paa","00002mc_SNIPERe2.paa","00009mc_SNIPERe2.paa","00004mc_SNIPERe2.paa","00008mc_SNIPERe2.paa","w_helma_front","w_helma_front_D","w_helma_side2","w_helma_side2_D","w_helma_vnitrek","w_helma_vnitrek_D","w_ramena","w_ramena_D","w_hrud_p","w_hrud_p_D","w_zadaruce_z","w_zadaruce_z_D","w_vojak_ruka_bok_l","w_vojak_ruka_bok_l_D","w_vojak_ruka_bok_p","w_vojak_ruka_bok_p_D","w_vojak_nohy_bok_l","w_vojak_nohy_bok_l_D","w_vojak_nohy_bok_p","w_vojak_nohy_bok_p_D","w_nohy_p","w_nohy_p_D","w_nohy_z","w_nohy_z_D","e_helma_front","e_helma_front_D","e_hrud_p","e_hrud_p_D","e_zada_z","e_zada_z_d","e_ruka_bok_l","e_ruka_bok_l_D","e_ruka_bok_p","e_ruka_bok_p_D","e_nohy_bok_l","e_nohy_bok_l_D","e_nohy_bok_p","e_nohy_bok_p_D","e_nohy_p","e_nohy_p_D","e_nohy_z","e_nohy_z_D","e_pilot_helma_z","e_pilot_helma_z_d","e_pilot_nohy_p","e_pilot_nohy_p_d","e_pilot_nohy_z","e_pilot_nohy_z_d","e_pilot_ramena","e_pilot_ramena_d","e_pilot_nohybok_l","e_pilot_nohybok_l_d","e_pilot_nohybok_p","e_pilot_nohybok_p_d","e_pilot_rucebok_l","e_pilot_rucebok_l_d","e_pilot_rucebok_p","e_pilot_rucebok_p_d","e_pilot_zada_z","e_pilot_zada_z_d","e_tankhelma_side512","e_tankhelma_side512_d","zaloha_hrud","zaloha_hrud_d","e_tank_zada_z","e_tank_zada_z_d","e_tank_nohy_p","e_tank_nohy_p_D","e_tank_nohy_z","e_tank_nohy_z_D","e_tank_ruka_p","e_tank_ruka_p_d","e_tank_ruka_l","e_tank_ruka_l_d","e_tank_nohybok_l","e_tank_nohybok_l_d","e_tank_nohybok_r","e_tank_nohybok_r_d","e_tankhelma_back512","e_tankhelma_back512_d","g_zada_z","g_zada_z_D","g_hrud_p","g_hrud_p_d","g_nohy_p","g_nohy_p_D","g_nohy_z","g_nohy_z_D","g_noha_bok_l","g_noha_bok_l_d","g_noha_bok_p","g_noha_bok_p_d","g_ruka_bok_p","g_ruka_bok_p_d","g_ruka_bok_l","g_ruka_bok_l_d","g_ramena","g_ramena_D","g_cepice_side","g_cepice_side_d","g_cepice_up","g_cepice_up_d","g2_hrud_p","g2_hrud_p_d","g2_zada_z","g2_zada_z_d","g2_nohy_z","g2_nohy_z_d","g2_nohy_p","g2_nohy_p_d","g2_nohy_bok_p","g2_nohy_bok_p_d","g2_nohy_bok_l","g2_nohy_bok_l_d","g2_ramena","g2_ramena_D","g2_ruka_bok_p","g2_ruka_bok_p_d","g2_ruka_bok_l","g2_ruka_bok_l_d","w_saboteur_hrud_p","w_saboteur_hrud_p_D","w_saboteur_zada_z","w_saboteur_zada_z_D","w_saboteur_nohy_z","w_saboteur_nohy_z_D","w_saboteur_nohy_p","w_saboteur_nohy_p_D","w_saboteur_ruka_p","w_saboteur_ruka_p_d","w_saboteur_ruka_l","w_saboteur_ruka_l_d","w_saboteur_ramena_z","w_saboteur_ramena_z_D","w_saboteur_kukla_s","w_saboteur_kukla_s_d","w_saboteur_kukla_f","w_saboteur_kukla_f_d","w_sniper_rukabok_l","w_sniper_rukabok_l_d","w_sniper_rukabok_p","w_sniper_rukabok_p_d","w_sniper_zada_z","w_sniper_zada_z_d","w_sniper_hrud_p","w_sniper_hrud_p_d","w_sniper_nohy_z","w_sniper_nohy_z_d","w_sniper_nohy_p","w_sniper_nohy_p_d","w_sniper_ramena","w_sniper_ramena_d","w_sniper_sitka.paa","w_sniper_sitka_d.paa","w_tank_hrud_p","w_tank_hrud_p_D","w_tank_zada_z","w_tank_zada_z_D","w_tank_nohy_p","w_tank_nohy_p_D","w_tank_nohy_z","w_tank_nohy_z_D","w_tank_nohybok_l","w_tank_nohybok_l_d","w_tank_nohybok_p","w_tank_nohybok_p_d","w_tank_rucebok_p","w_tank_rucebok_p_d","w_tank_rucebok_l","w_tank_rucebok_l_d","w_tank_helma_side","w_tank_helma_side_d","w_tank_helma_front_p","w_tank_helma_front_p_d","w_tank_ramena","w_tank_ramena_d","w_pilot_hrud_p","w_pilot_hrud_p_D","w_pilot_zada_z","w_pilot_zada_z_D","w_pilot_nohy_p","w_pilot_nohy_p_D","w_pilot_nohy_z","w_pilot_nohy_z_D","w_pilot_rucebok_l","w_pilot_rucebok_l_d","w_pilot_rucebok_p","w_pilot_rucebok_p_D","w_pilot_nohybok_l","w_pilot_nohybok_l_d","w_pilot_nohybok_p","w_pilot_nohybok_p_d","w_pilot_ramena","w_pilot_ramena_d","w_pilot_helma","w_pilot_helma_d","e_spec_hrud_p","e_spec_hrud_p_d","e_spec_ruka_bok_p","e_spec_ruka_bok_p_d","e_spec_ruka_bok_l","e_spec_ruka_bok_l_d","e_spec_ramena","e_spec_ramena_d","e_spec_zada_z","e_spec_zada_p_z","e_spec_hrud_p","e_spec_hrud_p_z","e_spec_satek_back","e_spec_satek_back_d","e_spec_satek_side","e_spec_satek_side_d","jirka_hrud_p","jirka_hrud_p_D","jirka_zada_z","jirka_zada_p_D","jirka_nohy_p","jirka_nohy_p_D","jirka_nohy_z","jirka_nohy_z_D","jirka_rukabok_p","jirka_rukabok_p_d","jirka_nohybok_l","jirka_nohybok_l_d","ang_bluza3","ang_bluza3_d","ang_face_f10","ang_face_f10_d","ang_sako_b","ang_sako_b_d","ang_sako_f","ang_sako_f_d","karel_hrud_p","karel_hrud_p_d","karel_rukabok","karel_rukabok_d","karel_zada","karel_zada_d","petr_hrud_p","petr_hrud_p_d","petr_zada_z","petr_zada_z_d","petr_nohy_zad","petr_nohy_zad_d","petr_nohy_pr","petr_nohy_pr_d"};
		minGunElev = -60;
		maxGunElev = 60;
		minGunTurn = -5;
		maxGunTurn = 5;
		minGunTurnAI = -30;
		maxGunTurnAI = 30;
		fov = 0.85;
		minFov = 0.42;
		maxFov = 0.85;
		class ViewPilot: ViewPilotBase {
			initAngleX = 8;
			minAngleX = -40;
			maxAngleX = 45;
			initAngleY = 0;
			minAngleY = -125;
			maxAngleY = 125;
		};
		microMimics = "Micro";
		minHeadTurnAI = -70;
		maxHeadTurnAI = 70;
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		weapons[] = {"RiffleGrenadeLauncher"};
		magazines[] = {"Riffle","Riffle","Riffle","Riffle","GrenadeLauncher"};
		model = "vojakw";
		picture = "";
		hitSound1[] = {"voices\Hit11",0.056234,1};
		hitSound2[] = {"voices\Hit12",0.056234,1};
		hitSound3[] = {"voices\Hit13",0.056234,1};
		hitSound4[] = {"voices\Hit14",0.056234,1};
		hitSound5[] = {"voices\Hit15",0.056234,1};
		hitSound6[] = {"voices\Hit16",0.056234,1};
		hitSound7[] = {"voices\Hit17",0.056234,1};
		hitSound8[] = {"voices\Hit18",0.056234,1};
		hitSound9[] = {"voices\Hit19",0.056234,1};
		hitSound10[] = {"voices\Hit20",0.056234,1};
		hitSound11[] = {"voices\Hit21",0.056234,1};
		hitSound12[] = {"voices\Hit22",0.056234,1};
		hitSound13[] = {"voices\Hit23",0.056234,1};
		hitSound14[] = {"voices\Hit24",0.056234,1};
		hitSound15[] = {"voices\Hit25",0.056234,1};
		hitSound16[] = {"voices\Hit26",0.056234,1};
		hitSound17[] = {"voices\Hit27",0.056234,1};
		hitSound18[] = {"voices\Hit28",0.056234,1};
		hitSound19[] = {"voices\Hit29",0.056234,1};
		hitSound20[] = {"voices\Hit30",0.056234,1};
		hitSounds[] = {"hitSound1",0.05,"hitSound2",0.05,"hitSound3",0.05,"hitSound4",0.05,"hitSound5",0.05,"hitSound6",0.05,"hitSound7",0.05,"hitSound8",0.05,"hitSound9",0.05,"hitSound10",0.05,"hitSound11",0.05,"hitSound12",0.05,"hitSound13",0.05,"hitSound14",0.05,"hitSound15",0.05,"hitSound16",0.05,"hitSound17",0.05,"hitSound18",0.05,"hitSound19",0.05,"hitSound20",0.05};
		moves = "NoDefaultMoves";
		soundEnviron[] = {"People\dirt_L",0.000316,1};
		class SoundEnvironExt {
			normalExt[] = {{"People\dirt_L",0.000003,1},{"People\dirt_R",0.000003,1},{"People\grass_L",0.000002,1},{"People\grass_R",0.000002,1},{"People\grass_L",0.000002,1},{"People\grass_R",0.000002,1}};
			normal[] = {{"People\dirt_L",0.000003,1},{"People\dirt_R",0.000003,1}};
			road[] = {{"People\concrete_L",0.000018,1},{"People\concrete_R",0.000018,1},{"People\concrete_L",0.000018,1},{"People\concrete_R",0.000018,1},{"People\gravel_L",0.000018,1},{"People\gravel_R",0.000018,1},{"People\concrete_L",0.000018,1},{"People\concrete_R",0.000018,1}};
			rock[] = {{"People\concrete_L",0.000018,1},{"People\concrete_R",0.000018,1},{"People\gravel_L",0.000018,1},{"People\gravel_R",0.000018,1},{"People\sand_L",0.000003,1},{"People\sand_R",0.000003,1},{"People\gravel_L",0.000018,1},{"People\gravel_R",0.000018,1},{"People\concrete_L",0.000018,1},{"People\concrete_R",0.000018,1}};
			water[] = {{"People\water_L",0.000032,1},{"People\water_R",0.000032,1}};
			gravel[] = {{"People\gravel_L",0.000018,1},{"People\gravel_R",0.000018,1}};
			sand[] = {{"People\sand_L",0.000003,1},{"People\sand_R",0.000003,1},{"People\sand_L",0.000003,1},{"People\sand_R",0.000003,1},{"People\gravel_L",0.000018,1},{"People\gravel_R",0.000018,1}};
			drygrass[] = {{"People\drygrass_L",0.000003,1},{"People\drygrass_R",0.000003,1},{"People\grass_L",0.000002,1},{"People\grass_R",0.000002,1},{"People\forest_L",0.000003,1},{"People\forest_R",0.000003,1}};
			grass[] = {{"People\grass_L",0.000002,1},{"People\grass_R",0.000002,1},{"People\drygrass_L",0.000003,1},{"People\drygrass_R",0.000003,1}};
			forest[] = {{"People\forest_L",0.000003,1},{"People\forest_R",0.000003,1},{"People\grass_L",0.000002,1},{"People\grass_R",0.000002,1},{"People\dirt_L",0.000003,1},{"People\dirt_R",0.000003,1},{"People\mud_L",0.000003,1},{"People\mud_R",0.000003,1}};
			mud[] = {{"People\mud_L",0.000003,1},{"People\mud_R",0.000003,1},{"People\mud_L",0.000003,1},{"People\mud_R",0.000003,1},{"People\water_L",0.000032,1},{"People\water_R",0.000032,1}};
			wood[] = {{"People\wood_L",0.000003,1},{"People\wood_R",0.000003,1}};
			metal[] = {{"People\metal_L",0.000003,1},{"People\metal_R",0.000003,1}};
			snow[] = {{"People\snow_L",0.000032,1},{"People\snow_R",0.000032,1}};
			hallway[] = {{"People\hall_L",0.000032,1},{"People\hall_R",0.000032,1}};
			fallbody[] = {{"People\fall_to_ground",0.001,1}};
			laydown[] = {{"People\down",0.00001,1}};
			standup[] = {{"People\up",0.000003,1}};
			crawl[] = {{"People\crawl",0.000002,1}};
		};
		soundEngine[] = {"People\breath",0.000018,1};
		additionalSound[] = {"Objects\noise",0,1};
		type = 0;
		threat[] = {1,0.8,0.2};
		class Reflectors {};
		class MGunClouds: WeaponCloudsMGun {};
		class GunClouds: WeaponCloudsGun {
			cloudletGrowUp = 0.2;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.4;
			cloudletDuration = 0.2;
			cloudletAlpha = 1;
			cloudletAccY = 2;
			cloudletMinYSpeed = -10;
			cloudletMaxYSpeed = 10;
			interval = 0.02;
			size = 0.3;
			sourceSize = 0.015;
		};
	};
	class Civilian: Man {
		vehicleClass = "Men";
		scope = 2;
		displayName = "$STR_DN_MAN";
		nameSound = "man";
		model = "MC civil";
		moves = "CfgMovesMC";
		accuracy = 0.4;
		type = 0;
		threat[] = {0,0,0};
		camouflage = 1.2;
		cost = 100000;
		side = 3;
		weapons[] = {"Throw","Put"};
		magazines[] = {};
	};
	class Civilian2: Civilian {
		displayName = "$STR_DN_MAN2";
		model = "MC civil2";
	};
	class Civilian3: Civilian {
		displayName = "$STR_DN_MAN3";
		model = "MC civil3";
	};
	class Soldier: Man {
		vehicleClass = "";
		displayName = "$STR_DN_SOLDIER";
		nameSound = "soldier";
		weaponSlots = "1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		accuracy = 0.6;
		type = 0;
		threat[] = {1,0.05,0.05};
	};
	class SoldierLAW: Soldier {
		vehicleClass = "";
		displayName = "$STR_DN_LAW_SOLDIER";
		accuracy = 1.4;
		weapons[] = {"Riffle","LAWLauncher"};
		magazines[] = {"Riffle","Riffle","Riffle","Riffle","LAWLauncher","LAWLauncher"};
		threat[] = {1,0.9,0.1};
	};
	class Air: AllVehicles {
		icon = "helicopter";
		displayName = "$STR_DN_HELICOPTER";
		nameSound = "target";
		accuracy = 0.005;
		formationX = 50;
		formationZ = 100;
		precision = 100;
		brakeDistance = 200;
		formationTime = 10;
		armor = 20;
		cost = 10000000;
		fuelCapacity = 1000;
		maxSpeed = 400;
		insideSoundCoef = 0.05;
		weapons[] = {"MachineGun12_7"};
		magazines[] = {"MachineGun12_7"};
		type = 2;
		irScanRangeMin = 2000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 2;
		nightVision = 1;
		audible = 10;
		unitInfoType = "UnitInfoAirplane";
		threat[] = {0.3,1,0.7};
		driverAction = "ManActCargo";
		gunnerAction = "ManActCargo";
		commanderAction = "ManActCargo";
		gunnerCanSee = 31;
		driverCanSee = 31;
		typicalCargo[] = {"Soldier"};
		class GunFire: WeaponFireGun {};
		class GunClouds: WeaponCloudsGun {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
		transportMaxMagazines = 20;
		transportMaxWeapons = 3;
	};
	class Helicopter: Air {
		vehicleClass = "Air";
		displayName = "$STR_DN_HELICOPTER";
		nameSound = "chopper";
		accuracy = 0.08;
		soundEngine[] = {"Vehicles\helicopter",3.162278,1};
		soundEnviron[] = {"Objects\noise",0.1,1};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		simulation = "helicopter";
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 1;
			initAngleX = 0;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		mainRotorSpeed = 1;
		backRotorSpeed = 1.5;
		maxMainRotorDive = 0;
		maxBackRotorDive = 0;
		minMainRotorDive = 0;
		minBackRotorDive = 0;
		neutralBackRotorDive = 0;
		neutralMainRotorDive = 0;
		armorStructural = 2;
		armorHull = 0.5;
		armorEngine = 0.6;
		armorAvionics = 1.4;
		armorVRotor = 0.5;
		armorHRotor = 0.7;
		armorMissiles = 1.6;
		armorGlass = 0.5;
		maxSpeed = 300;
		enableSweep = 1;
		unitInfoType = "UnitInfoHelicopter";
		minFireTime = 20;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.7;
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -20;
			maxElev = 20;
			minTurn = -45;
			maxTurn = 45;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 17;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.5;
			minFov = 0.3;
			maxFov = 1.2;
		};
		hasGunner = 1;
		driverIsCommander = 1;
		gunnerOpticsModel = "optika_heli_gunner";
		weapons[] = {"MachineGun12_7","HellfireLauncher"};
		magazines[] = {"MachineGun12_7","HellfireLauncher"};
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","uh60_kab_sklo2.paa","uh60_kab_sklo2B.paa","uh30_cargo_pilotdoors.paa","uh30_cargo_pilotdoorsB.paa","uh60_cargo_dvereokno.paa","uh60_cargo_dvereoknoB.paa","uh60_gunner_okna.paa","uh60_gunner_oknaB.paa","ah-1_kabina_predokno.paa","ah-1_kabina_predoknoB.paa","ah-1_kabina_zadokno.paa","ah-1_kabina_zadoknoB.paa","ah-1_kabina_topokno.paa","ah-1_kabina_topoknoB.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","uh60_kab_sklo2.paa","uh60_kab_sklo2C.paa","uh30_cargo_pilotdoors.paa","uh30_cargo_pilotdoorsC.paa","uh60_cargo_dvereokno.paa","uh60_cargo_dvereoknoC.paa","uh60_gunner_okna.paa","uh60_gunner_oknaC.paa","ah-1_kabina_predokno.paa","ah-1_kabina_predoknoC.paa","ah-1_kabina_zadokno.paa","ah-1_kabina_zadoknoC.paa","ah-1_kabina_topokno.paa","ah-1_kabina_topoknoC.paa"};
		class Reflectors {
			class Reflector {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = -360;
			min = -3.141593;
			max = 3.141593;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 1;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = -360;
			min = -3.141593;
			max = 3.141593;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = 1;
		};
	};
	class Plane: Air {
		vehicleClass = "Air";
		icon = "a10";
		displayName = "$STR_DN_PLANE";
		nameSound = "plane";
		accuracy = 0.1;
		maxSpeed = 450;
		landingSpeed = 0;
		flapsFrictionCoef = 0.5;
		formationX = 200;
		formationZ = 300;
		precision = 200;
		brakeDistance = 500;
		steerAheadSimul = 1;
		steerAheadPlan = 2;
		wheelSteeringSensitivity = 1;
		unitInfoType = "UnitInfoAirplane";
		gearRetracting = 1;
		ejectSpeed[] = {0,40,0};
		minFireTime = 60;
		cost = 2000000;
		soundEngine[] = {"Vehicles\01F5",1,0.5};
		soundEnviron[] = {"Objects\noise",0.316228,1};
		soundServo[] = {"Vehicles\gun_elevate",0.1,0.4};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		simulation = "airplane";
		minGunElev = 0;
		maxGunElev = 0;
		minGunTurn = 0;
		maxGunTurn = 0;
		weapons[] = {"MachineGun12_7","MaverickLauncher"};
		magazines[] = {"MachineGun12_7","MaverickLauncher"};
		type = 2;
		threat[] = {0.1,1,0.5};
		aileronSensitivity = 1;
		elevatorSensitivity = 1;
		noseDownCoef = 1;
		landingAoa = "10*3.1415/180";
		class ViewPilot: ViewPilotBase {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 0.85;
			initAngleX = 8;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.5;
			minFov = 0.5;
			maxFov = 0.5;
		};
		extCameraPosition[] = {0,5,-30};
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = 0;
			min = 0;
			max = 0;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 300;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -360;
			min = -45;
			max = 45;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -360;
			min = -45;
			max = 45;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 1;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = 360;
			min = -3.141593;
			max = 3.141593;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = 360;
			min = -3.141593;
			max = 3.141593;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 1;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = 1;
		};
	};
	class Ship: AllVehicles {
		unitInfoType = "UnitInfoShip";
		icon = "ship";
		cost = 10000000;
		armor = 1000;
		displayName = "$STR_DN_SHIP";
		nameSound = "ship";
		accuracy = 0.005;
		maxSpeed = 30;
		simulation = "ship";
		audible = 6;
		formationX = 50;
		formationZ = 100;
		precision = 25;
		brakeDistance = 50;
		formationTime = 20;
		steerAheadSimul = 2;
		steerAheadPlan = 2.4;
		predictTurnSimul = 2;
		predictTurnPlan = 2.4;
		type = 1;
		threat[] = {0.2,0.2,0.1};
		getInRadius = 10;
		driverAction = "ManActShipDriver";
		gunnerAction = "ManActShipDriver";
		commanderAction = "ManActShipDriver";
		cargoAction[] = {"ManActShipCargo"};
		getInAction = "ManActGetOutCar";
		getOutAction = "ManActGetOutCar";
		class TurretBase {
			gunAxis = "osa hlavne";
			turretAxis = "osa veze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"Vehicles\gun_elevate",0.001,1};
			minElev = -5;
			maxElev = 40;
			minTurn = -135;
			maxTurn = 135;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ViewPilot: ViewPilotBase {
			initFov = 1;
			minFov = 0.42;
			maxFov = 1.2;
			initAngleX = 6;
			minAngleX = -8;
			maxAngleX = 10;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.35;
		};
		class GunFire: WeaponFireGun {};
		class GunClouds: WeaponCloudsGun {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
	};
	class SmallShip: Ship {
		cost = 50000;
		armor = 300;
		displayName = "$STR_DN_SMALL_SHIP";
		accuracy = 0.2;
		soundEngine[] = {"Vehicles\GuardShip",0.001778,1};
		fuelCapacity = 700;
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		maxSpeed = 60;
		steerAheadSimul = 2;
		steerAheadPlan = 2;
		predictTurnSimul = 3;
		predictTurnPlan = 3;
		precision = 50;
		brakeDistance = 50;
		hasGunner = 1;
		hasCommander = 0;
		driverIsCommander = 1;
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
	};
	class BigShip: Ship {
		cost = 10000000;
		displayName = "$STR_DN_BIG_SHIP";
		accuracy = 0.2;
		armor = 1000;
		soundEngine[] = {"Vehicles\BigShip",0.001778,1};
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Gun120","Gun120","Gun120","Gun120","MachineGun12_7","MachineGun12_7"};
		transportMaxMagazines = 500;
		transportMaxWeapons = 200;
	};
	class Jeep: Car {
		scope = 2;
		crew = "SoldierWB";
		picture = "ijeepMUTT";
		maxSpeed = 100;
		side = 1;
		displayName = "$STR_DN_JEEP";
		nameSound = "jeep";
		accuracy = 0.5;
		armor = 20;
		cost = 30000;
		fuelCapacity = 50;
		transportSoldier = 3;
		transportAmmo = 0;
		model = "jeep";
		armorWheels = 0.12;
		driverAction = "ManActJeepDriver";
		cargoAction[] = {"ManActJeepCoDriver","ManActJeepCoDriverBack"};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\jeepmove",0.177828,1};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		dammageHalf[] = {"jepp4x4_glass.paa","jepp4x4_glassB.paa","jepp_kab_sklo1.paa","jepp_kab_sklo1B.paa","jepp_kab_sklo2.paa","jepp_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jepp4x4_glass.paa","jepp4x4_glassC.paa","jepp_kab_sklo1.paa","jepp_kab_sklo1C.paa","jepp_kab_sklo2.paa","jepp_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
	};
	class JeepMG: Jeep {
		displayName = "$STR_DN_JEEP_MG";
		model = "Jeep_mg.p3d";
		picture = "ijeepmg.paa";
		gunnerAction = "ManActJeepGunner";
		hasGunner = 1;
		castGunnerShadow = 1;
		ejectDeadGunner = 1;
		castDriverShadow = 1;
		driverIsCommander = 1;
		scope = 2;
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		gunnerOpticsModel = "optika_empty";
		unitInfoType = "UnitInfoSoldier";
		transportSoldier = 1;
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5;
			maxElev = 40;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class MGunClouds: WeaponCloudsMGun {};
	};
	class SkodaHelper: Car {
		scope = 0;
		picture = "iskoda";
		maxSpeed = 125;
		side = 3;
		nameSound = "car";
		displayName = "$STR_DN_SKODA";
		accuracy = 0.5;
		armor = 20;
		cost = 2000;
		fuelCapacity = 50;
		transportSoldier = 3;
		transportAmmo = 0;
		terrainCoef = 10;
		soundEngine[] = {"Vehicles\car",0.017783,1.8};
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		driverAction = "ManActSkodaDriver";
		cargoAction[] = {"ManActSkodaCoDriver","ManActSkodaCoDriverBack"};
		cargoIsCoDriver[] = {1,0};
		typicalCargo[] = {};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = 254;
			min = 0;
			max = "180 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -255;
			min = 0;
			max = 1;
		};
	};
	class SkodaBase: SkodaHelper {
		accuracy = 1000;
	};
	class Rapid: SkodaBase {
		vehicleClass = "Car";
		scope = 2;
		picture = "iskoda";
		maxSpeed = 200;
		displayName = "$STR_DN_ASTON";
		nameSound = "car";
		accuracy = 0.5;
		armor = 10;
		cost = 90000;
		fuelCapacity = 50;
		transportSoldier = 1;
		model = "rapid";
		soundEngine[] = {"Vehicles\car",0.031623,1.5};
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		typicalCargo[] = {};
		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa","rapid_skloP.paa","rapid_skloPB.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa","rapid_skloP.paa","rapid_skloPC.paa"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -260;
			min = 0;
			max = "180 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
	};
	class RapidY: Rapid {
		vehicleClass = "Car";
		scope = 2;
		model = "rapid_y";
	};
	class Skoda: SkodaBase {
		scope = 2;
		model = "skodovka";
		displayName = "$STR_DN_SKODA_YELLOW";
	};
	class SkodaBlue: SkodaBase {
		scope = 2;
		model = "skodovka_blue";
		displayName = "$STR_DN_SKODA_BLUE";
	};
	class SkodaRed: SkodaBase {
		scope = 2;
		model = "skodovka_red";
		displayName = "$STR_DN_SKODA_RED";
	};
	class SkodaGreen: SkodaBase {
		scope = 2;
		model = "skodovka_green";
		displayName = "$STR_DN_SKODA_GREEN";
	};
	class Tractor: Car {
		scope = 2;
		picture = "itruck5t";
		icon = "truck";
		side = 3;
		displayName = "$STR_DN_TRACTOR";
		nameSound = "tractor";
		accuracy = 0.3;
		fuelCapacity = 50;
		transportSoldier = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		weapons[] = {};
		magazines[] = {};
		wheelCircumference = 8;
		turnCoef = 9;
		maxSpeed = 30;
		cost = 10000;
		armor = 30;
		model = "traktor";
		soundEngine[] = {"Vehicles\TractorRun",0.031623,0.5};
		typicalCargo[] = {};
		driverAction = "ManActTractorDriver";
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
	};
	class Truck: Car {
		nameSound = "truck";
		formationX = 20;
		formationZ = 30;
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
		armorWheels = 0.3;
		damperSize = 0.2;
		fov = 1;
		minFov = 0.6;
		maxFov = 1.4;
		transportMaxMagazines = 200;
		transportMaxWeapons = 50;
	};
	class Truck5t: Truck {
		scope = 2;
		crew = "SoldierWB";
		picture = "itruck5t";
		icon = "truck";
		model = "truck5t";
		hiddenSelections[] = {"ammo"};
		side = 1;
		displayName = "$STR_DN_5T_TRUCK";
		accuracy = 0.3;
		fuelCapacity = 200;
		transportSoldier = 12;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		driverAction = "ManActTruck5tDriver";
		cargoAction[] = {"ManActTruck5tCoDriver","ManActTruck5tCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,1,0};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		camouflage = 4;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		wheelCircumference = 4.513;
		turnCoef = 6;
		maxSpeed = 80;
		cost = 70000;
		armor = 20;
		initCargoAngleY = 185;
		soundEngine[] = {"Vehicles\dieseltruckloop2",0.1,1};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -210;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -220;
			min = 0;
			max = 1;
		};
	};
	class Truck5tOpen: Truck5t {
		scope = 2;
		model = "truck5t2";
		hiddenSelections[] = {};
		displayName = "$STR_DN_5T_TRUCK_OPEN";
		accuracy = 1000;
	};
	class Truck5tRich: Truck5t {
		scope = 1;
		displayName = "RichTruck";
		accuracy = 1000;
		cost = 1000000;
	};
	class Truck5tRepair: Truck5t {
		vehicleClass = "Support";
		picture = "itruck5trepair";
		icon = "Repair_move";
		scope = 2;
		displayName = "$STR_DN_REPAIT_TRUCK";
		accuracy = 0.9;
		transportSoldier = 2;
		transportRepair = 200000000;
		model = "truck5trepair";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0,0,0};
		typicalCargo[] = {};
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class Truck5tReammo: Truck5t {
		vehicleClass = "Support";
		icon = "Ammo_move";
		scope = 2;
		displayName = "$STR_DN_REAMMO_TRUCK";
		accuracy = 0.9;
		transportSoldier = 2;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 300000;
		model = "Truck5t";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0,0,0};
		typicalCargo[] = {};
	};
	class Truck5tRefuel: Truck5t {
		vehicleClass = "Support";
		picture = "iTruck5tfuel";
		icon = "Fuel_move";
		scope = 2;
		displayName = "$STR_DN_REFUEL_TRUCK";
		nameSound = "truck";
		accuracy = 0.8;
		transportFuel = 3000;
		transportSoldier = 2;
		transportAmmo = 0;
		model = "Truck5tfuel";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0,0,0};
		typicalCargo[] = {};
		transportMaxMagazines = 20;
		transportMaxWeapons = 5;
	};
	class SoldierWB: Soldier {
		model = "MC vojakW2";
		hiddenSelections[] = {"medic"};
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 2;
		side = 1;
		accuracy = 0.7;
		displayName = "$STR_DN_SOLDIER";
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierWG: SoldierWB {
		vehicleClass = "Men";
		scope = 2;
		cost = 60000;
		displayName = "$STR_DN_GRENADIER";
		accuracy = 1000;
		weapons[] = {"M16GrenadeLauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
	};
	class SoldierWMedic: SoldierWB {
		accuracy = 1000;
		picture = "\misc\medik.paa";
		vehicleClass = "Men";
		scope = 2;
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant = 1;
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16"};
		nameSound = "medic";
		hiddenSelections[] = {};
	};
	class SoldierWNOG: SoldierWB {
		scope = 1;
	};
	class SoldierW: SoldierWG {
		scope = 1;
	};
	class SoldierWCrew: SoldierWB {
		model = "MC tankistaW2";
		nameSound = "crew";
		accuracy = 1000;
		displayName = "$STR_DN_CREW";
		weapons[] = {"M4","NVGoggles","Throw","Put"};
		magazines[] = {"M4","M4","M4","M4","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierWPilot: SoldierWB {
		model = "MC pilotW2";
		nameSound = "pilot";
		displayName = "$STR_DN_PILOT";
		weapons[] = {"M4","NVGoggles","Throw","Put"};
		magazines[] = {"M4","M4","M4","M4","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierWMG: SoldierWB {
		nameSound = "machineGunner";
		displayName = "$STR_DN_MGUNNER";
		cost = 60000;
		accuracy = 1.5;
		weapons[] = {"M60","Throw","Put"};
		magazines[] = {"M60","M60","M60","M60","M60"};
		threat[] = {1,0.1,0.8};
	};
	class SoldierWLAW: SoldierWB {
		vehicleClass = "Men";
		scope = 2;
		nameSound = "missileSoldier";
		nightVision = 1;
		displayName = "$STR_DN_LAW_SOLDIER";
		cost = 150000;
		side = 1;
		accuracy = 1.5;
		weapons[] = {"M16","LAWLauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","LAWLauncher","LAWLauncher","LAWLauncher"};
		type = 0;
		threat[] = {1,0.9,0.1};
	};
	class SoldierWAT: SoldierWLAW {
		displayName = "$STR_DN_CG_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"M16","CarlGustavLauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","CarlGustavLauncher"};
		threat[] = {1,0.9,0.1};
	};
	class SoldierWAA: SoldierWLAW {
		displayName = "$STR_DN_AA_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"M16","AALauncher","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","AALauncher"};
		threat[] = {1,0.5,0.9};
	};
	class SoldierWMortar: SoldierWG {
		displayName = "$STR_DN_MORTAR";
		accuracy = 1.5;
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","Mortar","Mortar","Mortar"};
		threat[] = {1,1,0.1};
	};
	class SoldierWSniper: SoldierWB {
		picture = "\misc\sniper.paa";
		displayName = "$STR_DN_SNIPER";
		nameSound = "sniper";
		accuracy = 3.5;
		nightVision = 1;
		camouflage = 0.6;
		sensitivity = 2;
		cost = 250000;
		weaponSlots = "1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
		weapons[] = {"M21","Throw","Put"};
		magazines[] = {"M21","M21","M21","M21"};
		model = "mc sniperw2.p3d";
		threat[] = {1,0.1,0.1};
	};
	class SoldierWLAWSniper: SoldierWSniper {
		scope = 1;
		displayName = "$STR_DN_AT4_SNIPER";
		weapons[] = {"M21","LAWLauncher","Throw","Put"};
		weaponSlots = "1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		magazines[] = {"M21","M21","M21","M21","LAWLauncher","LAWLauncher"};
		threat[] = {1,0.9,0.1};
	};
	class SoldierWSaboteur: SoldierWB {
		scope = 1;
		picture = "\misc\meciky.paa";
		accuracy = 3.5;
		cost = 400000;
		nameSound = "blackOp";
		displayName = "$STR_DN_BLACKOP";
		weapons[] = {"HK","Throw","Put"};
		magazines[] = {"HK","HK","HK","HK","TimeBomb","TimeBomb","TimeBomb"};
		camouflage = 0.7;
		threat[] = {1,0.5,0.1};
		model = "mc saboteur.p3d";
		canHideBodies = 1;
		canDeactivateMines = 1;
		nightVision = 1;
	};
	class SoldierWSaboteurPipe: SoldierWSaboteur {
		scope = 2;
		displayName = "$STR_DN_BLACKOP";
		weapons[] = {"HK","NVGoggles","Throw","Put"};
		magazines[] = {"HK","HK","HK","HK","PipeBomb","PipeBomb","PipeBomb"};
	};
	class SoldierWSaboteurDay: SoldierWSaboteurPipe {
		scope = 2;
		model = "mc saboteurday.p3d";
		displayName = "$STR_DN_BLACKOPDAY";
		weapons[] = {"HK","Binocular","Throw","Put"};
		magazines[] = {"HK","HK","HK","HK","PipeBomb","PipeBomb","PipeBomb"};
	};
	class SoldierWMiner: SoldierWB {
		displayName = "$STR_DN_ENGINEER";
		canDeactivateMines = 1;
		picture = "\misc\sapper.paa";
		accuracy = 1000;
		weapons[] = {"M16","Binocular","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","Mine","Mine","Mine"};
		threat[] = {1,0.5,0.1};
	};
	class OfficerW: SoldierWB {
		picture = "\misc\frcky.paa";
		nameSound = "officer";
		scope = 2;
		model = "mc vojakwo2.p3d";
		displayName = "$STR_DN_OFFICER";
		accuracy = 2;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"M16","Binocular","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class OfficerWNight: SoldierWB {
		picture = "\misc\frcky.paa";
		nameSound = "officer";
		scope = 2;
		model = "mc vojakwo2.p3d";
		displayName = "$STR_DN_OFFICERNIGHT";
		accuracy = 2;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"M16GrenadeLauncher","Binocular","NVGoggles","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","Flare","Flare","Flare"};
	};
	class SoldierWCaptive: SoldierWB {
		cost = 50000;
		displayName = "$STR_DN_SOLDIERCAPTIVE";
		weapons[] = {};
		magazines[] = {};
	};
	class M1Abrams: Tank {
		scope = 2;
		crew = "SoldierWCrew";
		picture = "iabrams";
		side = 1;
		displayName = "$STR_DN_M1A1";
		nameSound = "Abrams";
		accuracy = 0.4;
		armor = 900;
		cost = 4000000;
		maxSpeed = 72;
		soundEngine[] = {"Vehicles\ModernIdle1",0.031623,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1};
		model = "M1_abrams";
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		gunnerAction = "ManActM1A1Gunner";
		gunnerInAction = "ManActM1A1Gunner";
		driverAction = "ManActM1A1DriverOut";
		driverInAction = "ManActM1A1Driver";
		commanderAction = "ManActM1A1CommanderOut";
		commanderInAction = "ManActM1A1Commander";
		type = 1;
		threat[] = {1,1,0.3};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "80 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -270;
			min = 0;
			max = 1;
		};
		class UserActions {
			class TestCaller {
				displayName = "WhoAmCaller";
				position = "pos driver";
				radius = 50;
				condition = "alive this";
				statement = "hint format [{caller: %1\nthis: %2}, [_this, typeof _this], [this, typeof this]]";
			};
		};
	};
	class M1AbramsAuto: M1Abrams {
		scope = 1;
		displayName = "$STR_DN_M1A1_AUTO";
		hasGunner = 0;
		hasCommander = 0;
	};
	class M60: Tank {
		scope = 2;
		crew = "SoldierWCrew";
		picture = "im60";
		side = 1;
		displayName = "$STR_DN_M60";
		nameSound = "M60";
		accuracy = 0.7;
		armor = 300;
		cost = 800000;
		maxSpeed = 54;
		gunnerAction = "ManActM60Gunner";
		gunnerInAction = "ManActM60Gunner";
		driverAction = "ManActM60DriverOut";
		driverInAction = "ManActM60Driver";
		commanderAction = "ManActM60CommanderOut";
		commanderInAction = "ManActM60Commander";
		model = "M60";
		weapons[] = {"Gun105","MachineGun7_6"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6"};
		type = 1;
		threat[] = {1,0.6,0.2};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "60 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -315;
			min = 0;
			max = 1;
		};
	};
	class M113: APC {
		scope = 2;
		crew = "SoldierWCrew";
		picture = "im113";
		side = 1;
		displayName = "$STR_DN_M113";
		nameSound = "m113";
		accuracy = 0.3;
		armor = 150;
		cost = 100000;
		maxSpeed = 60;
		hasCommander = 0;
		outGunnerMayFire = 1;
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		transportSoldier = 8;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		gunnerAction = "ManActM113Gunner";
		gunnerInAction = "ManActM113Gunner";
		driverAction = "ManActM113DriverOut";
		driverInAction = "ManActM113Driver";
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.1,0.7};
		soundEngine[] = {"Vehicles\m113b",0.1,1};
		soundCrash[] = {"Vehicles\crash_small2",0.1,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.01,1};
		model = "m113";
		canFloat = 1;
		class Turret: TurretBase {
			minElev = -12;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
		};
		gunnerOpticsModel = "optika_empty";
		initCargoAngleY = 90;
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		type = 1;
		threat[] = {0.9,0.2,0.1};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 175;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -290;
			min = 0;
			max = "64/3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -235;
			min = 0;
			max = 1;
		};
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
	};
	class M113Ambul: M113 {
		accuracy = 1000;
		vehicleClass = "Support";
		icon = "Ambulance_move";
		picture = "im113_ambu";
		nameSound = "ambulance";
		scope = 2;
		displayName = "$STR_DN_M113_AMB";
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*0";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*0";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*0";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*0";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*0";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*0";
			};
		};
		attendant = 1;
		model = "M113_ambulance";
		weapons[] = {};
		magazines[] = {};
		hasGunner = 0;
		transportSoldier = 3;
		type = 1;
		threat[] = {0,0,0};
		typicalCargo[] = {};
		cargoAction[] = {"ManActM113Medic","ManActM113Medic","ManActM113Injured"};
		cargoIsCoDriver[] = {0,0,0};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
	};
	class Cobra: Helicopter {
		picture = "icobra";
		crew = "SoldierWPilot";
		scope = 2;
		side = 1;
		displayName = "$STR_DN_AH1";
		nameSound = "cobra";
		accuracy = 0.3;
		driverAction = "ManActAH1Pilot";
		gunnerAction = "ManActAH1Gunner";
		maxSpeed = 270;
		armor = 50;
		cost = 10000000;
		model = "ah1_cobra";
		rotorBig = "vrtule_velka";
		rotorBigBlend = "vrtule_velka_bl_";
		rotorSmall = "vrtule_mala";
		rotorSmallBlend = "vrtule_mala_bl";
		weapons[] = {"MachineGun30W","HellfireLauncherCobra","ZuniLauncher38"};
		magazines[] = {"MachineGun30W","HellfireLauncherCobra","ZuniLauncher38"};
		type = 2;
		threat[] = {0.3,1,0.8};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		laserScanner = 1;
		class ReloadAnimations {
			class MachineGun30W {
				weapon = "MachineGun30W";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Ch47D: Helicopter {
		access = 0;
		mainRotorSpeed = 1;
		backRotorSpeed = -1;
		minMainRotorDive = -9;
		maxMainRotorDive = 15;
		neutralMainRotorDive = -5;
		minBackRotorDive = -15;
		maxBackRotorDive = 9;
		neutralBackRotorDive = -5;
		transportMaxMagazines = 200;
		transportMaxWeapons = 50;
	};
	class ParachuteBase: Helicopter {
		scope = 0;
		destrType = "DestructNo";
		simulation = "parachute";
		weaponSlots = "1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		autocenter = 0;
		vehicleClass = "Air";
		displayName = "$STR_DN_PARACHUTE";
		nameSound = "man";
		model = "para";
		picture = "ivojak";
		icon = "padak.paa";
		accuracy = 0.1;
		fuelCapacity = 0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 1;
		irTarget = 0;
		hasGunner = 0;
		soundEnviron[] = {"Objects\noise",0.01,0.25};
		soundGetOut[] = {"",0.000316,1};
		soundCrash[] = {"",0.000316,1};
		soundLandCrash[] = {"",0.000316,1};
		soundWaterCrash[] = {"Explosions\intowater",0.031623,1};
		driverCanSee = "2+8";
		driverAction = "ManActPara";
		armor = 10;
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 17;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.5;
			minFov = 0.3;
			maxFov = 1.2;
		};
		type = 0;
		threat[] = {0,0,0};
		cost = 100000;
		weapons[] = {};
		magazines[] = {};
	};
	class ParachuteEast: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 0;
		crew = "SoldierESaboteurPipe";
	};
	class ParachuteWest: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 1;
		crew = "SoldierWSaboteurPipe";
	};
	class ParachuteC: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 3;
		crew = "Civilian";
	};
	class ParachuteG: ParachuteBase {
		scope = 2;
		accuracy = 0.5;
		side = 2;
		crew = "SoldierGB";
	};
	class Parachute: ParachuteWest {
		scope = 1;
	};
	class UH60: Helicopter {
		scope = 2;
		crew = "SoldierWPilot";
		picture = "iuh60";
		maxSpeed = 270;
		side = 1;
		displayName = "$STR_DN_UH60";
		nameSound = "blackhawk";
		accuracy = 0.3;
		armor = 60;
		cost = 10000000;
		mainRotorSpeed = -1;
		model = "uh-60";
		rotorBig = "vrtule_uh_v";
		rotorBigBlend = "vrtule_uh_v_bl";
		rotorSmall = "vrtule_uh_m";
		rotorSmallBlend = "vrtule_uh_m_bl";
		soundEngine[] = {"Vehicles\uh1",3.162278,1.5};
		weapons[] = {"ZuniLauncher38"};
		magazines[] = {"ZuniLauncher38"};
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		type = 2;
		threat[] = {0.3,1,0.4};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
	};
	class UH60MG: UH60 {
		displayName = "$STR_DN_UH60_MG";
		nameSound = "blackhawk";
		accuracy = 1000;
		model = "uh-60mg";
		transportSoldier = 12;
		enableSweep = 0;
		gunnerAction = "ManActUH60Gunner";
		gunnerOpticsModel = "optika_empty";
		weapons[] = {"Browning"};
		magazines[] = {"Browning"};
		class Turret: TurretBase {
			minElev = -42;
			maxElev = 5;
			minTurn = 30;
			maxTurn = 150;
			soundServo[] = {"",0.01,1};
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 90;
			minAngleY = 30;
			maxAngleY = 150;
			initAngleX = 0;
			minAngleX = -42;
			maxAngleX = 5;
		};
	};
	class Su25: Plane {
		access = 0;
		armor = 50;
	};
	class A10: Plane {
		scope = 2;
		crew = "SoldierWPilot";
		picture = "ia10";
		side = 1;
		displayName = "$STR_DN_A10";
		nameSound = "thunderbolt";
		accuracy = 0.3;
		driverAction = "ManActA10Pilot";
		maxSpeed = 600;
		laserScanner = 1;
		armor = 50;
		cost = 20000000;
		model = "a10";
		weapons[] = {"MaverickLauncher","MachineGun30A10Burst"};
		magazines[] = {"MaverickLauncher","MachineGun30A10Burst"};
		fov = 0.5;
		type = 2;
		threat[] = {0.1,1,0.7};
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
	};
	class Cessna: A10 {
		scope = 2;
		crew = "Civilian";
		side = 3;
		displayName = "$STR_DN_PLANE";
		nameSound = "plane";
		accuracy = 0.3;
		maxSpeed = 300;
		gearRetracting = 0;
		ejectSpeed[] = {0,0,0};
		armor = 15;
		cost = 200000;
		model = "cessna182";
		picture = "icessna";
		weapons[] = {};
		magazines[] = {};
		fov = 0.5;
		landingAoa = "7*3.1415/180";
		driverAction = "ManActCessnaPilot";
		cargoAction[] = {"ManActCessnaCoPilot","ManActCessnaCargo"};
		soundEngine[] = {"Vehicles\plane",0.316228,1};
		soundEnviron[] = {"Objects\noise",0.001,1};
		soundServo[] = {"Vehicles\gun_elevate",0.01,0.4};
		transportSoldier = 3;
		extCameraPosition[] = {0,2,-30};
		type = 2;
		threat[] = {0.1,1,0.7};
		audible = 6;
		aileronSensitivity = 0.33;
		elevatorSensitivity = 0.1;
		noseDownCoef = 0.025;
		class Reflectors {
			class Left {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
			class Right {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -355;
			min = 0;
			max = 150;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -355;
			min = 0;
			max = 150;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -300;
			min = 0;
			max = 90;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = 360;
			min = -3.141593;
			max = 3.141593;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = 0;
		};
	};
	class BoatW: SmallShip {
		vehicleClass = "Armored";
		displayName = "$STR_DN_MARK_II";
		accuracy = 0.5;
		scope = 2;
		crew = "SoldierWB";
		model = "pbr";
		picture = "ipbr";
		side = 1;
		driverIsCommander = 1;
		driverAction = "ManActPBRDriver";
		gunnerAction = "ManActPBRGunner";
		cargoAction[] = {"ManActCargo"};
		gunnerOpticsModel = "optika_empty";
		maxSpeed = 60;
		transportSoldier = 6;
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		cost = 100000;
		armor = 100;
	};
	class BoatWAuto: BoatW {
		scope = 1;
		displayName = "$STR_DN_MARK_II_AUTO";
		hasGunner = 0;
		hasCommander = 0;
	};
	class M2StaticMG: M113 {
		hideProxyInCombat = 0;
		picture = "m2";
		crew = "SoldierWB";
		hasDriver = 0;
		hasGunner = 1;
		hasCommander = 0;
		castGunnerShadow = 1;
		ejectDeadGunner = 1;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irTarget = 0;
		maxSpeed = 1;
		fuelCapacity = 0;
		transportSolider = 0;
		gunnerAction = "ManActM2Gunner";
		gunnerInAction = "ManActM2Gunner";
		gunnerCanSee = "2+8";
		commanderCanSee = "2+8";
		extCameraPosition[] = {0,0.8,-5};
		class TransportMagazines {};
		cost = 10000;
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";
		class Turret: TurretBase {
			soundServo[] = {};
			minElev = -20;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
		};
		armor = 30;
		armorStructural = 10;
		type = 0;
		model = "m2_mg";
		icon = "kulomet.paa";
		displayName = "$STR_DN_M2_MG";
		nameSound = "mgun";
		transportSoldier = 0;
		transportAmmo = 0;
		accuracy = 0.3;
		typicalCargo[] = {};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
	};
	class UAZ: Car {
		picture = "iuaz";
		scope = 2;
		crew = "SoldierEB";
		side = 0;
		displayName = "$STR_DN_UAZ";
		nameSound = "UAZ";
		accuracy = 0.5;
		transportSoldier = 3;
		transportAmmo = 0;
		maxSpeed = 90;
		driverAction = "ManActUAZDriver";
		cargoAction[] = {"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		cost = 25000;
		armor = 20;
		model = "uaz";
		armorWheels = 0.12;
		soundEngine[] = {"Vehicles\uazloop",0.031623,1.25};
		class ViewPilot: ViewPilotBase {
			initAngleX = 10;
		};
		type = 0;
		threat[] = {0.5,0.5,0.1};
		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 50;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -170;
			min = 0;
			max = 1;
		};
	};
	class Ural: Truck {
		scope = 2;
		crew = "SoldierEB";
		picture = "iural";
		icon = "truck";
		side = 0;
		displayName = "$STR_DN_URAL";
		accuracy = 0.3;
		maxSpeed = 80;
		wheelCircumference = 4.513;
		turnCoef = 6;
		driverAction = "ManActUralDriver";
		cargoAction[] = {"ManActUralCoDriver","ManActUralCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,1,0};
		transportSoldier = 12;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		cost = 50000;
		armor = 20;
		model = "ural";
		hiddenSelections[] = {"ammo"};
		initCargoAngleY = 185;
		soundEngine[] = {"Vehicles\Largecar",0.1,1};
		type = 0;
		threat[] = {0,0,0};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -280;
			min = 0;
			max = 40;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -280;
			min = 0;
			max = 1;
		};
	};
	class UralRepair: Ural {
		picture = "iuralrepair";
		vehicleClass = "Support";
		icon = "Repair_move";
		scope = 2;
		displayName = "$STR_DN_URAL_REPAIR";
		accuracy = 0.9;
		model = "uralrepair";
		hiddenSelections[] = {};
		transportSoldier = 2;
		transportRepair = 200000000;
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0,0,0};
		typicalCargo[] = {};
	};
	class UralReammo: Ural {
		vehicleClass = "Support";
		icon = "Ammo_move";
		scope = 2;
		displayName = "$STR_DN_URAL_AMMO";
		accuracy = 0.9;
		transportSoldier = 2;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 300000;
		model = "ural";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0,0,0};
	};
	class UralRefuel: Ural {
		picture = "iuralfuel";
		vehicleClass = "Support";
		icon = "Fuel_move";
		scope = 2;
		displayName = "$STR_DN_URAL_FUEL";
		accuracy = 0.8;
		model = "uralfuel";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		transportFuel = 3000;
		transportSoldier = 2;
		transportAmmo = 0;
		type = 0;
		threat[] = {0,0,0};
	};
	class Scud: Ural {
		vehicleClass = "Car";
		picture = "iscud";
		nameSound = "scudLauncher";
		scope = 2;
		displayName = "$STR_DN_SCUD";
		accuracy = 0.9;
		armor = 40;
		maxSpeed = 55;
		driverAction = "ManActSCUDDriver";
		cargoAction[] = {"ManActSCUDCoDriver"};
		cargoIsCoDriver[] = {1};
		transportSoldier = 3;
		transportAmmo = 0;
		turnCoef = 8;
		model = "scud";
		hiddenSelections[] = {};
		weapons[] = {};
		magazines[] = {};
		type = 0;
		threat[] = {0,0,0};
		scudLaunch = "scudlunch.rtm";
		scudStart = "scudstart.rtm";
		scudSoundElevate[] = {"vehicles\gun_elevate",0.01,1};
		scudSound[] = {"weapons\rocketflying",316.227783,0.2};
		scudModel = "scud_strela_proxy";
		scudModelFire = "scud_strela_ohen";
	};
	class SoldierEB: Soldier {
		displayName = "$STR_DN_SOLDIER";
		vehicleClass = "Men";
		scope = 2;
		model = "MC vojakE2";
		hiddenSelections[] = {"medic"};
		moves = "CfgMovesMC";
		side = 0;
		cost = 40000;
		accuracy = 0.7;
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierWFakeE: SoldierEB {
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 1;
		side = 1;
		accuracy = 2;
		displayName = "$STR_DN_SOLDIERFAKE";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierEG: SoldierEB {
		cost = 50000;
		accuracy = 1000;
		displayName = "$STR_DN_GRENADIER";
		weapons[] = {"AK74GrenadeLauncher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
	};
	class SoldierEMedic: SoldierEB {
		accuracy = 1000;
		picture = "\misc\medik.paa";
		vehicleClass = "Men";
		scope = 2;
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant = 1;
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74"};
		nameSound = "medic";
		hiddenSelections[] = {};
	};
	class SoldierENOG: SoldierEB {
		scope = 1;
	};
	class SoldierE: SoldierEG {
		scope = 1;
	};
	class SoldierECrew: SoldierEB {
		model = "MC tankistaE2.p3d";
		nameSound = "crew";
		accuracy = 1000;
		displayName = "$STR_DN_CREW";
		weapons[] = {"AK74SU","NVGoggles","Throw","Put"};
	};
	class SoldierEPilot: SoldierEB {
		accuracy = 1000;
		model = "mc pilote2.p3d";
		displayName = "$STR_DN_PILOT";
		nameSound = "pilot";
		weapons[] = {"AK74SU","NVGoggles","Throw","Put"};
	};
	class SoldierEMG: SoldierEB {
		vehicleClass = "Men";
		scope = 2;
		displayName = "$STR_DN_MGUNNER";
		cost = 60000;
		side = 0;
		accuracy = 1.5;
		nameSound = "machineGunner";
		weapons[] = {"PK","Throw","Put"};
		magazines[] = {"PK","PK","PK","PK","PK"};
		threat[] = {1,0.1,0.8};
	};
	class SoldierELAW: SoldierEB {
		displayName = "$STR_DN_RPG_SOLDIER";
		nameSound = "missileSoldier";
		cost = 80000;
		accuracy = 1.5;
		weapons[] = {"AK74","RPGLauncher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","RPGLauncher","RPGLauncher","RPGLauncher"};
		nightVision = 1;
		threat[] = {1,0.9,0.1};
	};
	class SoldierEAT: SoldierELAW {
		displayName = "$STR_DN_AT4_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"AK74","AT4Launcher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","AT4Launcher"};
		threat[] = {1,0.9,0.1};
	};
	class SoldierEAA: SoldierELAW {
		displayName = "$STR_DN_AA_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"AK74","9K32Launcher","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","9K32Launcher"};
		threat[] = {1,0.5,0.9};
	};
	class SoldierEMiner: SoldierEB {
		displayName = "$STR_DN_ENGINEER";
		accuracy = 1000;
		weapons[] = {"AK74","Throw","Put"};
		canDeactivateMines = 1;
		picture = "\misc\sapper.paa";
		magazines[] = {"AK74","AK74","AK74","AK74","MineE","MineE","MineE"};
		threat[] = {1,0.5,0.1};
	};
	class OfficerE: SoldierEB {
		nameSound = "officer";
		displayName = "$STR_DN_OFFICER";
		scope = 2;
		model = "mc vojakeo2.p3d";
		picture = "\misc\frcky.paa";
		side = 0;
		accuracy = 2;
		cost = 600000;
		nightVision = 1;
		weapons[] = {"AK74","Binocular","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class OfficerENight: SoldierEB {
		nameSound = "officer";
		displayName = "$STR_DN_OFFICERNIGHT";
		scope = 2;
		model = "mc vojakeo2.p3d";
		picture = "\misc\medik.paa";
		side = 0;
		accuracy = 2;
		cost = 600000;
		nightVision = 1;
		weapons[] = {"AK74GrenadeLauncher","Binocular","NVGoggles","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","Flare","Flare","Flare"};
	};
	class GeneralE: SoldierEB {
		nameSound = "officer";
		displayName = "$STR_DN_GENERAL";
		scope = 1;
		model = "mc vojake2_guba.p3d";
		side = 0;
		accuracy = 2;
		cost = 100000;
		nightVision = 1;
		weapons[] = {};
		magazines[] = {};
	};
	class Angelina: SoldierEB {
		displayName = "$STR_DN_ANGELINA";
		scope = 1;
		model = "angelina.p3d";
		side = 0;
		accuracy = 2;
		cost = 100000;
		weapons[] = {};
		magazines[] = {};
	};
	class SoldierESniper: SoldierEB {
		nameSound = "sniper";
		displayName = "$STR_DN_SNIPER";
		accuracy = 3.5;
		nightVision = 1;
		cost = 250000;
		weaponSlots = "1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
		weapons[] = {"SVDDragunov","Throw","Put"};
		magazines[] = {"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov"};
		model = "mc snipere2.p3d";
		picture = "\misc\sniper.paa";
		sensitivity = 2;
		camouflage = 0.6;
		threat[] = {1,0.1,0.1};
	};
	class SoldierESaboteur: SoldierEB {
		scope = 1;
		picture = "\misc\meciky.paa";
		accuracy = 3.5;
		cost = 400000;
		displayName = "$STR_DN_SPECNAS";
		weapons[] = {"AK74SU","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","TimeBomb","TimeBomb","TimeBomb"};
		camouflage = 0.7;
		threat[] = {1,0.5,0.1};
		model = "mc specnas2.p3d";
		nameSound = "specNas";
		canHideBodies = 1;
		canDeactivateMines = 1;
	};
	class SoldierESaboteurPipe: SoldierESaboteur {
		scope = 2;
		displayName = "$STR_DN_SPECNAS";
		weapons[] = {"AK74SU","NVGoggles","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","PipeBomb","PipeBomb","PipeBomb"};
	};
	class SoldierEFakeW: SoldierWB {
		model = "MC vojakW2";
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 1;
		side = 0;
		accuracy = 2;
		displayName = "$STR_DN_ESOLDIERFAKE";
		weapons[] = {"M16","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class LaserTarget: All {
		reversed = 0;
		hasDriver = 0;
		icon = "Unknown_object";
		displayName = "$STR_DN_LASER_TARGET";
		nameSound = "target";
		accuracy = 0.005;
		model = "laserTgt.p3d";
		picture = "ivojak";
		weapons[] = {"M16"};
		magazines[] = {"M16"};
		type = 1;
		threat[] = {0.5,0.5,0.1};
		maxSpeed = 0;
		simulation = "laserTarget";
		laserTarget = 1;
		irTarget = 0;
		destrType = "DestructNo";
		side = 3;
		cost = 100000000;
		armor = 500;
	};

    // Laser classes. Seems useless
	class LaserTargetBase: LaserTarget {};
	class LaserTargetCBase: LaserTargetBase {
		scope = 1;
		side = 3;
	};
	class LaserTargetWBase: LaserTargetBase {
		scope = 1;
		side = 0;
	};
	class LaserTargetEBase: LaserTargetBase {
		scope = 1;
		side = 1;
	};
	class LaserTargetW: LaserTargetWBase {
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetE: LaserTargetEBase {
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class BMP: APC {
		scope = 2;
		crew = "SoldierECrew";
		picture = "ibmp";
		side = 0;
		displayName = "$STR_DN_BMP";
		nameSound = "BMP";
		accuracy = 0.3;
		maxSpeed = 70;
		hiddenSelections[] = {"pruh"};
		transportSoldier = 8;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		armor = 200;
		cost = 150000;
		forceHideGunner = 0;
		model = "bmp";
		canFloat = 1;
		minGunElev = -5;
		maxGunElev = 15;
		weapons[] = {"Gun73","MachineGun7_6","AT3Launcher"};
		magazines[] = {"Heat73","Shell73","MachineGun7_6","AT3Launcher"};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW"};
		type = 1;
		threat[] = {0.9,0.7,0.3};
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.177828,1};
		soundEngine[] = {"Vehicles\T55Sound",0.177828,1};
		driverAction = "ManActBMPDriverOut";
		gunnerAction = "ManActBMPGunnerOut";
		commanderAction = "ManActBMPCommanderOut";
		driverInAction = "ManActBMPDriver";
		gunnerInAction = "ManActBMPGunner";
		commanderInAction = "ManActBMPCommander";
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -90;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 90;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -320;
			min = 0;
			max = "40 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -230;
			min = 0;
			max = 1;
		};
	};
	class BMPAmbul: BMP {
		accuracy = 1000;
		vehicleClass = "Support";
		icon = "Ambulance_move";
		nameSound = "ambulance";
		picture = "ibmp_abu";
		scope = 2;
		displayName = "$STR_DN_BMP_AMB";
		attendant = 1;
		hasGunner = 0;
		transportSoldier = 2;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*0";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*0";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*0";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*0";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*0";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*0";
			};
		};
		model = "bmp_Ambu";
		weapons[] = {};
		magazines[] = {};
		minGunTurn = -6;
		type = 0;
		threat[] = {0,0,0};
		typicalCargo[] = {};
		cargoAction[] = {"ManActM113Medic","ManActM113Injured"};
		cargoIsCoDriver[] = {0,0};
	};
	class RussianTank: Tank {
		accuracy = 0.35;
		side = 0;
		crew = "SoldierECrew";
		commanderOpticsModel = "optika_tanke_auxiliary";
		forceHideGunner = 0;
	};
	class T72: RussianTank {
		scope = 2;
		picture = "it72";
		side = 0;
		displayName = "$STR_DN_T72";
		nameSound = "t72";
		accuracy = 0.5;
		hiddenSelections[] = {"pruh"};
		armor = 400;
		cost = 1000000;
		maxSpeed = 60;
		driverAction = "ManActT72DriverOut";
		gunnerAction = "ManActT72GunnerOut";
		commanderAction = "ManActT72CommanderOut";
		driverInAction = "ManActT72Driver";
		gunnerInAction = "ManActT72Gunner";
		commanderInAction = "ManActT72Commander";
		model = "t72";
		weapons[] = {"Gun120","MachineGun7_6"};
		magazines[] = {"Heat120","Shell120","MachineGun7_6"};
		type = 1;
		threat[] = {0.9,0.8,0.2};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class T80: RussianTank {
		scope = 2;
		picture = "it80";
		side = 0;
		displayName = "$STR_DN_T80";
		nameSound = "t80";
		accuracy = 0.5;
		driverAction = "ManActT80DriverOut";
		gunnerAction = "ManActT80GunnerOut";
		commanderAction = "ManActT80CommanderOut";
		hiddenSelections[] = {"pruh"};
		driverInAction = "ManActT80Driver";
		gunnerInAction = "ManActT80Gunner";
		commanderInAction = "ManActT80Commander";
		armor = 700;
		cost = 1500000;
		maxSpeed = 70;
		soundEngine[] = {"Vehicles\ModernIdle1",0.031623,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.031623,1};
		model = "t80";
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		type = 1;
		threat[] = {0.9,0.9,0.3};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class T80Auto: T80 {
		scope = 1;
		hasGunner = 0;
		hasCommander = 0;
		displayName = "$STR_DN_T80_AUTO";
		accuracy = 1000;
	};
	class ZSU: Tank {
		scope = 2;
		crew = "SoldierECrew";
		picture = "izsu";
		icon = "antiAC.paa";
		side = 0;
		displayName = "$STR_DN_ZSU";
		nameSound = "shilka";
		accuracy = 0.3;
		commanderCanSee = 31;
		gunnerCanSee = "1+16 +4+8";
		driverAction = "ManActZSUDriver";
		gunnerAction = "ManActZSUGunnerOut";
		commanderAction = "ManActZSUCommanderOut";
		driverInAction = "ManActZSUDriver";
		gunnerInAction = "ManActZSUGunner";
		commanderInAction = "ManActZSUCommander";
		forceHideGunner = 0;
		forceHideDriver = 1;
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 100;
		};
		armor = 250;
		cost = 1000000;
		model = "zsu";
		simulation = "tank";
		maxSpeed = 44;
		irScanRangeMin = 4000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 5;
		irScanGround = 0;
		soundCrash[] = {"Vehicles\crash1",0.1,1};
		weapons[] = {"ZsuCannon"};
		magazines[] = {"ZsuCannon"};
		class Turret: TurretBase {
			minElev = -7;
			maxElev = 70;
		};
		class IndicatorSpeed {
			selection = "ukaz_mph";
			axis = "osa_mph";
			angle = 250;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 315;
			min = 0;
			max = 1;
		};
		type = 1;
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = "optika_zsu_gunner";
		commanderOpticsModel = "optika_tanke_auxiliary";
	};
	class M2StaticMGE: M2StaticMG {
		side = 0;
		displayName = "$STR_DN_M2_MGE";
		crew = "SoldierEB";
	};
	class Mi24: Helicopter {
		scope = 2;
		crew = "SoldierEPilot";
		picture = "imi24";
		maxSpeed = 294;
		side = 0;
		displayName = "$STR_DN_MI24";
		nameSound = "hind";
		accuracy = 0.5;
		cost = 4000000;
		armor = 100;
		model = "mi24_HIND";
		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.162278,1};
		weapons[] = {"MachineGun30E","HellfireLauncherHind","Rocket57x64"};
		magazines[] = {"MachineGun30E","HellfireLauncherHind","Rocket57x64"};
		transportSoldier = 8;
		transportAmmo = 0;
		type = 2;
		threat[] = {0.6,1,0.8};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		driverAction = "ManActMi24Pilot";
		gunnerAction = "ManActMi24Gunner";
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class ReloadAnimations {
			class MachineGun30E {
				weapon = "MachineGun30E";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 0.5;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Mi17: Helicopter {
		scope = 2;
		crew = "SoldierEPilot";
		picture = "imi17";
		maxSpeed = 240;
		side = 0;
		displayName = "$STR_DN_MI17";
		nameSound = "mi17";
		accuracy = 0.5;
		cost = 3000000;
		armor = 50;
		model = "mi17_HIP";
		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\Slow4blade_Loop1",3.162278,1};
		weapons[] = {"Rocket57x192"};
		magazines[] = {"Rocket57x192"};
		driverAction = "ManActMi17Pilot";
		gunnerAction = "ManActMi17Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		type = 2;
		threat[] = {0.6,1,0.4};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorAltRadar2: IndicatorAltRadar {
			selection = "alt2";
			axis = "osa_alt2";
		};
		class IndicatorAltBaro2: IndicatorAltBaro {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
		};
		class IndicatorSpeed2: IndicatorSpeed {
			selection = "mph2";
			axis = "osa_mph2";
		};
		class IndicatorVertSpeed2: IndicatorVertSpeed {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
		};
		class IndicatorRPM2: IndicatorRPM {
			selection = "rpm2";
			axis = "osa_rpm2";
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
	};
	class CarrierW: BigShip {
		vehicleClass = "Armored";
		scope = 2;
		crew = "SoldierWB";
		side = 1;
		displayName = "$STR_DN_LST";
		model = "newport";
		picture = "im113";
		accuracy = 0.5;
		maxSpeed = 50;
		transportSoldier = 50;
		class TransportMagazines {};
		transportAmmo = 10000000;
		transportVehiclesCount = 15;
		cost = 200000000;
		armor = 10000;
		weapons[] = {};
		magazines[] = {};
	};
	class BoatE: SmallShip {
		vehicleClass = "Armored";
		displayName = "$STR_DN_BOAT";
		accuracy = 0.5;
		scope = 2;
		crew = "SoldierEB";
		model = "hrl";
		picture = "ihrl";
		side = 0;
		maxSpeed = 60;
		driverAction = "ManActHRLDriver";
		gunnerAction = "ManActHRLGunner";
		cargoAction[] = {"ManActCargo"};
		gunnerOpticsModel = "optika_empty";
		transportSoldier = 10;
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		cost = 100000;
		armor = 100;
		class Turret: TurretBase {
			soundServo[] = {"",0.01,1};
			minElev = -5;
			maxElev = 20;
			minTurn = 90;
			maxTurn = 270;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.17;
			maxFov = 0.35;
			initAngleY = 180;
			minAngleY = 90;
			maxAngleY = 270;
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 180;
			minAngleY = 180;
			maxAngleY = 180;
			initAngleX = 0;
			minAngleX = -15;
			maxAngleX = 25;
		};
	};
	class TruckV3SG: Truck {
		scope = 2;
		crew = "SoldierGB";
		picture = "iv3s";
		icon = "truck";
		side = 2;
		displayName = "$STR_DN_PV3S";
		accuracy = 0.3;
		maxSpeed = 75;
		transportSoldier = 11;
		class TransportMagazines {
			class _xx_AK47 {
				magazine = "AK47";
				count = "30*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		turnCoef = 6;
		cost = 20000;
		armor = 30;
		model = "v3s";
		hiddenSelections[] = {"ammo"};
		initCargoAngleY = 185;
		soundEngine[] = {"vehicles\dieseltruckloop1",0.056234,1};
		weapons[] = {};
		magazines[] = {};
		driverAction = "ManActV3SDriver";
		cargoAction[] = {"ManActV3SCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		threat[] = {1,1,0.3};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -275;
			min = 0;
			max = "80 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -275;
			min = 0;
			max = 1;
		};
	};
	class GJeep: Car {
		scope = 2;
		crew = "SoldierGB";
		picture = "ijeep";
		maxSpeed = 100;
		side = 2;
		displayName = "$STR_DN_JEEP";
		nameSound = "jeep";
		accuracy = 0.5;
		armor = 20;
		cost = 30000;
		fuelCapacity = 50;
		transportSoldier = 3;
		transportAmmo = 0;
		model = "gjeep";
		armorWheels = 0.12;
		driverAction = "ManActJeepDriver";
		cargoAction[] = {"ManActJeepCoDriver","ManActJeepCoDriverBack"};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\jeeploop",0.1,1};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240;
			min = 0;
			max = 1;
		};
	};
	class TruckV3SCivil: TruckV3SG {
		side = 3;
		crew = "Civilian";
		displayName = "$STR_DN_PV3S_CIVIL";
		model = "v3scivil";
	};
	class PaperCar: Car {
		scope = 1;
		picture = "itruck5t";
		icon = "truck";
		displayName = "$STR_DN_PAPER_CAR";
		model = "papAuto";
		class Reflectors {};
	};
	class TruckV3SGRefuel: TruckV3SG {
		picture = "iv3sfuel";
		vehicleClass = "Support";
		icon = "Fuel_move";
		displayName = "$STR_DN_PV3S_FUEL";
		model = "v3sfuel";
		transportSoldier = 1;
		hiddenSelections[] = {};
		typicalCargo[] = {};
	};
	class TruckV3SGRepair: TruckV3SG {
		picture = "iv3srepair";
		vehicleClass = "Support";
		icon = "Repair_move";
		displayName = "$STR_DN_PV3S_REPAIR";
		model = "v3srepair";
		transportSoldier = 1;
		hiddenSelections[] = {};
		typicalCargo[] = {};
	};
	class TruckV3SGReammo: TruckV3SG {
		vehicleClass = "Support";
		icon = "Ammo_move";
		displayName = "$STR_DN_PV3S_AMMO";
		transportSoldier = 1;
		hiddenSelections[] = {};
		typicalCargo[] = {};
	};
	class UAZG: Car {
		scope = 2;
		crew = "SoldierGB";
		side = 2;
		displayName = "$STR_DN_UAZG";
		nameSound = "UAZ";
		accuracy = 0.5;
		transportSoldier = 3;
		transportAmmo = 0;
		cost = 25000;
		armor = 20;
		model = "guaz";
		picture = "iuaz";
		weapons[] = {};
		magazines[] = {};
		typicalCargo[] = {"Soldier","SoldierLAW"};
		threat[] = {0.7,0.7,0.2};
		soundEngine[] = {"Vehicles\uazloop",0.031623,1.25};
		driverAction = "ManActUAZDriver";
		cargoAction[] = {"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		class ViewPilot: ViewPilotBase {
			initAngleX = 10;
		};
	};
	class SGUAZG: UAZG {
		vehicleClass = "Support";
		displayName = "$STR_DN_UAZG";
		model = "sguaz";
		transportSoldier = 2;
		attendant = 1;
		cargoAction[] = {"ManActM113Injured","ManActCargo"};
		cargoIsCoDriver[] = {0,0};
	};
	class SoldierGB: Soldier {
		vehicleClass = "Men";
		scope = 2;
		model = "MC vojakG2";
		hiddenSelections[] = {"medic"};
		moves = "CfgMovesMC";
		displayName = "$STR_DN_SOLDIER";
		side = 2;
		cost = 10000;
		accuracy = 0.7;
		weapons[] = {"AK47CZ","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
	};
	class SoldierGMedic: SoldierGB {
		accuracy = 1000;
		picture = "\misc\medik.paa";
		cost = 60000;
		displayName = "$STR_DN_MEDIC";
		weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant = 1;
		weapons[] = {"AK47CZ","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47"};
		nameSound = "medic";
		hiddenSelections[] = {};
	};
	class SoldierGCrew: SoldierGB {
		nameSound = "crew";
		accuracy = 1000;
		model = "MC crewg.p3d";
		weapons[] = {"AK47CZ","NVGoggles","Throw","Put"};
		displayName = "$STR_DN_CREW";
	};
	class SoldierGPilot: SoldierGB {
		nameSound = "pilot";
		accuracy = 1000;
		model = "MC vojakG3";
		weapons[] = {"AK47CZ","NVGoggles","Throw","Put"};
		displayName = "$STR_DN_PILOT";
	};
	class SoldierGG: SoldierGB {
		displayName = "$STR_DN_GRENADIER";
		cost = 15000;
		accuracy = 1000;
		weapons[] = {"AK47GrenadeLauncher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
	};
	class SoldierGNOG: SoldierGB {
		scope = 1;
	};
	class SoldierG: SoldierGG {
		scope = 1;
	};
	class SoldierGMG: SoldierGB {
		nameSound = "machineGunner";
		displayName = "$STR_DN_MGUNNER";
		cost = 15000;
		model = "MC vojakG3";
		accuracy = 1.5;
		weapons[] = {"PK","Throw","Put"};
		magazines[] = {"PK","PK","PK","PK","PK"};
		threat[] = {1,0.1,0.8};
	};
	class SoldierGLAW: SoldierGB {
		nameSound = "missileSoldier";
		displayName = "$STR_DN_LAW_SOLDIER";
		model = "MC vojakG2";
		cost = 30000;
		accuracy = 1.5;
		weapons[] = {"AK47CZ","RPGLauncher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","RPGLauncher","RPGLauncher","RPGLauncher"};
		nightVision = 1;
		threat[] = {1,0.9,0.1};
	};
	class SoldierGAT: SoldierGLAW {
		nameSound = "missileSoldier";
		displayName = "$STR_DN_AT4_SOLDIER";
		model = "MC vojakG2";
		cost = 30000;
		accuracy = 1.5;
		weapons[] = {"AK47CZ","AT4Launcher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","AT4Launcher"};
		nightVision = 1;
		threat[] = {1,0.9,0.1};
	};
	class SoldierGAA: SoldierGLAW {
		displayName = "$STR_DN_AA_SOLDIER";
		nameSound = "missileSoldier";
		accuracy = 1.5;
		weapons[] = {"AK47CZ","9K32Launcher","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","9K32Launcher"};
		threat[] = {1,0.5,0.9};
	};
	class OfficerG: SoldierGB {
		nameSound = "officer";
		scope = 2;
		model = "mc vojakgo2.p3d";
		picture = "\misc\frcky.paa";
		displayName = "$STR_DN_OFFICER";
		accuracy = 2;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"AK47","Binocular","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class OfficerGNight: SoldierGB {
		nameSound = "officer";
		scope = 2;
		model = "mc vojakgo2.p3d";
		picture = "\misc\frcky.paa";
		displayName = "$STR_DN_OFFICERNIGHT";
		accuracy = 2;
		cost = 500000;
		nightVision = 1;
		weapons[] = {"AK47GrenadeLauncher","Binocular","NVGoggles","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","Flare","Flare","Flare"};
	};
	class SoldierGFakeE: SoldierEB {
		model = "MC vojakE2";
		moves = "CfgMovesMC";
		vehicleClass = "Men";
		scope = 1;
		side = 2;
		accuracy = 2;
		displayName = "$STR_DN_SOLDIERFAKE";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierGFakeC: Civilian {
		scope = 1;
		side = 2;
		accuracy = 2;
		displayName = "$STR_DN_CIVILFAKE";
		weaponSlots = "1	 + 	16	 + 2 * 	4096	 + 6 * 		256	 + 	2	 + 4*	32";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class SoldierGFakeC2: Civilian2 {
		scope = 1;
		side = 2;
		accuracy = 2;
		displayName = "$STR_DN_CIVILFAKE";
		weaponSlots = "1	 + 	16	 + 2 * 	4096	 + 6 * 		256	 + 	2	 + 4*	32";
		weapons[] = {"AK74","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74","HandGrenade","HandGrenade"};
		cost = 40000;
	};
	class T55G: Tank {
		picture = "it55";
		crew = "SoldierGCrew";
		scope = 2;
		side = 2;
		displayName = "$STR_DN_T55";
		nameSound = "t55";
		accuracy = 0.7;
		maxSpeed = 50;
		armor = 300;
		cost = 150000;
		driverAction = "ManActT55DriverOut";
		gunnerAction = "ManActT55GunnerOut";
		commanderAction = "ManActT55CommanderOut";
		driverInAction = "ManActT55Driver";
		gunnerInAction = "ManActT55Gunner";
		commanderInAction = "ManActT55Commander";
		model = "t55";
		weapons[] = {"Gun105","MachineGun7_6"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6"};
		type = 1;
		threat[] = {1,1,0.2};
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.031623,0.7};
		soundEngine[] = {"Vehicles\T55Sound",0.031623,1};
		commanderOpticsModel = "optika_tanke_auxiliary";
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class Static: All {
		reversed = 0;
		hasDriver = 0;
		icon = "Unknown_object";
		displayName = "$STR_DN_UNKNOWN";
		nameSound = "target";
		accuracy = 0.005;
		simulation = "house";
		cost = 0;
		picture = "ivojak";
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0,0,0};
		maxSpeed = 0;
		coefInside = 2;
		coefInsideHeur = 4.3;
	};
	class Fortress: Static {
		displayName = "$STR_DN_BUNKER";
		nameSound = "Bunker";
		armor = 1000;
		cost = 1000000;
		accuracy = 0.2;
	};
	class Building: Static {
		displayName = "$STR_DN_BUILDING";
		nameSound = "building";
		armor = 150;
		accuracy = 0.1;
	};
	class NonStrategic: Building {
		side = 3;
		ladders[] = {};
	};
	class Strategic: Building {
		side = 3;
		armor = 250;
		ladders[] = {};
	};
	class Thing: All {
		reversed = 0;
		animated = 0;
		icon = "Unknown_object";
		vehicleClass = "Objects";
		displayName = "$STR_DN_UNKNOWN";
		nameSound = "target";
		accuracy = 0.005;
		simulation = "thing";
		side = 3;
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 10000000000;
		disappearAtContact = 0;
		hasDriver = 0;
		picture = "ivojak";
		weapons[] = {};
		magazines[] = {};
		type = 1;
		threat[] = {0,0,0};
		maxSpeed = 0;
	};
	class ThingEffect: Thing {
		scope = 1;
		simulation = "thingeffect";
		irTarget = 0;
		submerged = -0.5;
		submergeSpeed = 0.25;
		timeToLive = 20;
	};
	class FxExploGround1: ThingEffect {
		model = "sutr2";
		displayName = "$STR_DN_FX_EXPLO_GROUND_1";
	};
	class FxExploGround2: ThingEffect {
		model = "sutr3";
		displayName = "$STR_DN_FX_EXPLO_GROUND_2";
	};
	class FxExploArmor1: ThingEffect {
		model = "kusplechu";
		displayName = "Internal: FxExploArmor1";
	};
	class FxExploArmor2: ThingEffect {
		model = "kusplechu2";
		displayName = "Internal: FxExploArmor2";
	};
	class FxExploArmor3: ThingEffect {
		model = "ohorelavec";
		displayName = "Internal: FxExploArmor3";
	};
	class FxExploArmor4: ThingEffect {
		model = "strepina";
		displayName = "Internal: FxExploArmor4";
	};
	class FxCartridge: ThingEffect {
		model = "nabojnice";
		displayName = "$STR_DN_FX_CARTRIDGE";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
	};
	class ReammoBox: Strategic {
		animated = 0;
		scope = 1;
		vehicleClass = "Ammo";
		icon = "Ammo_move";
		model = "hromada_beden";
		displayName = "$STR_DN_AMMO_CRATES";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructEngine";
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = 100;
			};
			class _xx_AK47 {
				magazine = "AK47";
				count = 100;
			};
			class _xx_AK74 {
				magazine = "AK74";
				count = 100;
			};
			class _xx_M60 {
				magazine = "M60";
				count = 50;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 30;
			};
			class _xx_M21 {
				magazine = "M21";
				count = 50;
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = 4;
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = 4;
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 20;
			};
		};
		transportMaxWeapons = 500;
		transportMaxMagazines = 2000;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 2.6;
	};
	class ReammoBoxWest: ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_WEST";
		class TransportMagazines {
			class _xx_M16 {
				magazine = "M16";
				count = "30*1";
			};
			class _xx_M60 {
				magazine = "M60";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_M21 {
				magazine = "M21";
				count = "10*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
	};
	class ReammoBoxEast: ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_EAST";
		class TransportMagazines {
			class _xx_AK74 {
				magazine = "AK74";
				count = "30*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_SVDDragunov {
				magazine = "SVDDragunov";
				count = "10*1";
			};
			class _xx_RPGLauncher {
				magazine = "RPGLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
	};
	class ReammoBoxGuer: ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_RES";
		class TransportMagazines {
			class _xx_AK47 {
				magazine = "AK47";
				count = "30*1";
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_PK {
				magazine = "PK";
				count = "5*1";
			};
			class _xx_LAWLauncher {
				magazine = "LAWLauncher";
				count = "3*1";
			};
			class _xx_GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = "3*1";
			};
		};
	};
	class WeaponHolder: ReammoBox {
		scope = 1;
		model = "\misc\dummyweapon.p3d";
		accuracy = 0.2;
		class TransportMagazines {};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1000000000;
		transportMaxWeapons = 1000000000;
		displayName = "";
	};
	class SecondaryWeaponHolder: WeaponHolder {
		model = "\misc\dummyweapon2.p3d";
	};
	class HeavyReammoBox: Strategic {
		animated = 0;
		scope = 1;
		vehicleClass = "Ammo";
		icon = "Ammo_move";
		model = "bedna_ammo";
		displayName = "$STR_DN_AMMO_CRATES_WEST2";
		accuracy = 1000;
		typicalCargo[] = {};
		destrType = "DestructEngine";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 2.6;
		transportMaxWeapons = 500;
		transportMaxMagazines = 2000;
	};
	class HeavyReammoBoxWest: HeavyReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_WEST2";
		class TransportMagazines {
			class M16 {
				magazine = "M16";
				count = 20;
			};
			class HandGrenade {
				magazine = "HandGrenade";
				count = 10;
			};
			class GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 10;
			};
			class LAWLauncher {
				magazine = "LAWLauncher";
				count = 8;
			};
			class AALauncher {
				magazine = "AALauncher";
				count = 3;
			};
			class Mortar {
				magazine = "Mortar";
				count = 6;
			};
			class PipeBomb {
				magazine = "PipeBomb";
				count = 6;
			};
			class Mine {
				magazine = "Mine";
				count = 6;
			};
			class CarlGustavLauncher {
				magazine = "CarlGustavLauncher";
				count = 3;
			};
		};
	};
	class HeavyReammoBoxEast: HeavyReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_EAST2";
		class TransportMagazines {
			class AK74 {
				magazine = "AK74";
				count = 20;
			};
			class HandGrenade {
				magazine = "HandGrenade";
				count = 10;
			};
			class GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 10;
			};
			class RPGLauncher {
				magazine = "RPGLauncher";
				count = 8;
			};
			class 9K32Launcher {
				magazine = "9K32Launcher";
				count = 3;
			};
			class PipeBomb {
				magazine = "PipeBomb";
				count = 6;
			};
			class Mine {
				magazine = "Mine";
				count = 6;
			};
			class AT4Launcher {
				magazine = "AT4Launcher";
				count = 3;
			};
		};
	};
	class HeavyReammoBoxRes: HeavyReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_DN_AMMO_CRATES_RES2";
		class TransportMagazines {
			class AK47 {
				magazine = "AK47";
				count = 20;
			};
			class HandGrenade {
				magazine = "HandGrenade";
				count = 10;
			};
			class GrenadeLauncher {
				magazine = "GrenadeLauncher";
				count = 10;
			};
			class RPGLauncher {
				magazine = "RPGLauncher";
				count = 8;
			};
			class 9K32Launcher {
				magazine = "9K32Launcher";
				count = 3;
			};
			class PipeBomb {
				magazine = "PipeBomb";
				count = 6;
			};
			class Mine {
				magazine = "Mine";
				count = 6;
			};
			class AT4Launcher {
				magazine = "AT4Launcher";
				count = 3;
			};
		};
	};
	class MachineGunBox: Strategic {
		animated = 0;
		scope = 1;
		vehicleClass = "Ammo";
		icon = "Ammo_move";
		model = "hromada_beden";
		displayName = "$STR_DN_MACHINE_GUN";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructEngine";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		class TransportWeapons {
			class MachineGun {
				weapon = "M60";
				count = 1;
			};
		};
		class TransportMagazines {
			class MachineGun {
				magazine = "M60";
				count = 3;
			};
		};
		transportMaxWeapons = 1;
		transportMaxMagazines = 3;
		cost = 0;
		armor = 20;
		mapSize = 2.6;
	};
	class FlagCarrier: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "vlajka";
		displayName = "$STR_DN_FLAG";
		simulation = "flagcarrier";
		model = "vlajkstozar.p3d";
		mapSize = 5;
	};
	class Danger: FlagCarrier {
		model = "Danger!.p3d";
		displayName = "$STR_DN_DANGER";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Fire: NonStrategic {
		scope = 2;
		simulation = "fire";
		sound = "Fire";
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "ohniste";
		displayName = "$STR_DN_FIRE";
		accuracy = 0.2;
		typicalCargo[] = {};
		mapSize = 1.2;
		cost = 0;
		armor = 20;
		class Smoke {
			interval = 0.01;
			cloudletDuration = 0.9;
			cloudletAnimPeriod = 1;
			cloudletSize = 0.1;
			cloudletAlpha = 0.8;
			cloudletGrowUp = 0.4;
			cloudletFadeIn = 0;
			cloudletFadeOut = 5;
			cloudletAccY = -0.1;
			cloudletMinYSpeed = 0.3;
			cloudletMaxYSpeed = 1.5;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1,1,1,0};
			initT = 1000;
			deltaT = -500;
			class Table {
				class T1 {
					maxT = 0;
					color[] = {0.8,0.8,0.8,1};
				};
				class T2 {
					maxT = 900;
					color[] = {0.3,0.3,0.3,1};
				};
				class T3 {
					maxT = 1000;
					color[] = {1,0.5,0,0.5};
				};
			};
			density = 0.5;
			size = 0.1;
			initYSpeed = 1.7;
			timeToLive = 1.00000002004087734E20;
			in = 0;
			out = 0;
		};
		class Light {
			color[] = {1,0.5,0,1};
			ambient[] = {0.3,0.15,0,1};
			brightness = 0.08;
			shape = "koulesvetlo";
			size = 0.3;
			position = "ohniste";
		};
	};
	class Target: Strategic {
		scope = 2;
		destrType = "DestructTree";
		side = 3;
		icon = "Unknown_object";
		model = "terc";
		accuracy = 0.2;
		cost = 0;
		armor = 10;
	};
	class TargetE: Target {
		scope = 2;
		vehicleClass = "Objects";
		displayName = "$STR_DN_TARGET_EAST";
		accuracy = 1000;
		mapSize = 0.8;
	};
	class Camp: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "stan";
		displayName = "$STR_DN_TENT";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructTent";
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 20;
		mapSize = 6.4;
	};
	class Cube: Camp {
		scope = 1;
		model = "krychlicka";
		displayName = "$STR_DN_DEBUG_CUBE";
	};
	class Fortress1: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "fortress1";
		displayName = "$STR_DN_FORTRESS_1";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructBuilding";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 11;
		cost = 0;
		armor = 800;
	};
	class Fortress2: Fortress1 {
		model = "fortress2";
		displayName = "$STR_DN_FORTRESS_2";
	};
	class CampEmpty: Camp {
		scope = 2;
		model = "stan_inside";
		displayName = "$STR_DN_TENT_OPEN";
		accuracy = 1000;
	};
	class CampEast: Camp {
		scope = 2;
		model = "stan_east";
		displayName = "$STR_DN_TENT_EAST";
		accuracy = 1000;
	};
	class CampEastC: Camp {
		scope = 2;
		model = "stan_eastC";
		displayName = "$STR_DN_TENT_EAST_C";
		accuracy = 1000;
	};
	class Grave: Camp {
		scope = 2;
		model = "hrobecek.p3d";
		displayName = "$STR_DN_GRAVE";
		accuracy = 1000;
	};
	class GraveCross1: Camp {
		scope = 2;
		model = "hrobecek_krizek1.p3d";
		displayName = "$STR_DN_GRAVE_CROSS_1";
		accuracy = 1000;
	};
	class GraveCross2: Camp {
		scope = 2;
		model = "hrobecek_krizek2.p3d";
		displayName = "$STR_DN_GRAVE_CROSS_2";
		accuracy = 1000;
	};
	class GraveCrossHelmet: Camp {
		scope = 2;
		model = "hrobecek_krizekhelma.p3d";
		displayName = "$STR_DN_GRAVE_CROSS_HELMET";
		accuracy = 1000;
	};
	class ACamp: Camp {
		scope = 2;
		model = "astan";
		displayName = "$STR_DN_TENT_A";
		accuracy = 1000;
		mapSize = 2.6;
	};
	class MASH: Camp {
		scope = 2;
		model = "mash";
		displayName = "$STR_DN_MASH";
		accuracy = 0.3;
		attendant = 1;
		mapSize = 6.4;
	};
	class Fence: NonStrategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "pytle_BSL";
		displayName = "$STR_DN_FENCE";
		accuracy = 0.2;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 3.3;
	};
	class FenceWood: Fence {
		model = "pytle";
		displayName = "$STR_DN_FENCE_WOOD";
		mapSize = 2.4;
		accuracy = 1000;
	};
	class Wire: Fence {
		scope = 2;
		model = "Barbedwire.p3d";
		displayName = "$STR_DN_WIRE";
		accuracy = 0.3;
		mapSize = 5.5;
	};
	class WireFence: Fence {
		scope = 2;
		model = "plot_provizorni.p3d";
		displayName = "$STR_DN_FENCE_WIRE";
		accuracy = 0.3;
		mapSize = 5.5;
	};
	class BarrelHelper: Thing {
		scope = 0;
		simulation = "thing";
		mapSize = 0.7;
		displayName = "$STR_DN_BARREL";
		accuracy = 0.2;
		transportFuel = 100;
		destrType = "DestructEngine";
	};
	class BarrelBase: BarrelHelper {
		accuracy = 1000;
		armor = 100;
		cost = 0;
	};
	class Barrels: BarrelBase {
		scope = 2;
		model = "Barels.p3d";
		displayName = "$STR_DN_BARRELS";
		transportFuel = 400;
	};
	class Barrel1: BarrelBase {
		scope = 2;
		model = "Barel1.p3d";
		displayName = "$STR_DN_BARREL_RED";
	};
	class Barrel2: BarrelBase {
		scope = 2;
		model = "Barel2.p3d";
		displayName = "$STR_DN_BARREL_BROWN";
	};
	class Barrel3: BarrelBase {
		scope = 2;
		model = "Barel4.p3d";
		displayName = "$STR_DN_BARREL_WHITE";
	};
	class Barrel4: BarrelBase {
		scope = 2;
		model = "Barel3.p3d";
		displayName = "$STR_DN_BARREL_WHITE";
	};
	class Table: Thing {
		scope = 2;
		simulation = "thing";
		model = "stulsuplik_proxy.p3d";
		displayName = "$STR_DN_TABLE";
		transportFuel = 0;
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
		cost = 0;
	};
	class Tablemap: Table {
		scope = 2;
		simulation = "thing";
		model = "stulsuplikmapa.p3d";
		displayName = "$STR_DN_TABLEMAP";
		transportFuel = 0;
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Chair: Table {
		model = "Zidle.p3d";
		displayName = "$STR_DN_CHAIR";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Phone: Table {
		model = "hangar_telefon.p3d";
		displayName = "$STR_DN_PHONEHANG";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class PhoneBase: Table {
		scope = 1;
		model = "hangar_telefon_bez.p3d";
		displayName = "$STR_DN_PHONEBASE";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Camera1: Table {
		model = "betacam.p3d";
		displayName = "$STR_DN_CAMERA";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Computer: Table {
		model = "PC.p3d";
		displayName = "$STR_DN_COMPUTER";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class ChairHangar: Table {
		model = "Hangar_zidle.p3d";
		displayName = "$STR_DN_CHAIR_HANGAR";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class ChairX: Table {
		model = "zidle_x.p3d";
		displayName = "$STR_DN_CHAIR_X";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class VideoTable: Table {
		model = "televizesvideem.p3d";
		displayName = "$STR_DN_VIDEO";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class TablePub: Table {
		model = "stul_hospodax.p3d";
		displayName = "$STR_DN_TABLE_PUB";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class Radio: Table {
		model = "radio.p3d";
		displayName = "$STR_DN_RADIO";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class ChairSmall: Table {
		model = "Zidlicka.p3d";
		displayName = "$STR_DN_CHAIR_SMALL";
		mapSize = 0.7;
		accuracy = 0.2;
		destrType = "DestructBuilding";
	};
	class TestObject4: BarrelBase {
		scope = 1;
		model = "koule_10000.p3d";
		displayName = "$STR_DN_SPHERE_10000";
		coefInside = 1;
		coefInsideHeur = 1;
	};
	class Crawling: Camp {
		scope = 2;
		irTarget = 0;
		mapSize = 0.7;
		model = "podlejzacka.p3d";
		displayName = "$STR_DN_CRAWLING";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructBuilding";
		coefInside = 0.5;
		coefInsideHeur = 0.8;
	};
	class ExcerciseTrack: Crawling {
		displayName = "$STR_DN_TRAINING_2";
		model = "prolejzacka.p3d";
	};
	class ExcerciseTrack2: Crawling {
		displayName = "$STR_DN_TRAINING_3";
		model = "prebehlavka.p3d";
	};
	class ExcerciseTrack3: Crawling {
		displayName = "$STR_DN_TRAINING_4";
		model = "obihacka.p3d";
	};
	class PaletaHelper: BarrelHelper {
		mapSize = 0.7;
		displayName = "$STR_DN_PALLET";
		accuracy = 0.2;
		transportFuel = 0;
		irTarget = 0;
	};
	class PaletaBase: PaletaHelper {
		accuracy = 1000;
		cost = 0;
	};
	class Paleta1: PaletaBase {
		scope = 2;
		model = "PaletaA.p3d";
		displayName = "$STR_DN_PALLET_A";
	};
	class Paleta2: PaletaBase {
		scope = 2;
		model = "PaletyC.p3d";
		displayName = "$STR_DN_PALLETS_C";
	};
	class JeepWreck1: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "JeepT.p3d";
		displayName = "$STR_DN_JEEP_WRECK_1";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class JeepWreck2: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "JeepT_horeznacky.p3d";
		displayName = "$STR_DN_JEEP_WRECK_2";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class JeepWreck3: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "JeepT_Tanker.p3d";
		displayName = "$STR_DN_JEEP_WRECK_3";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class M113Wreck: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "M113T.p3d";
		displayName = "$STR_DN_M113_WRECK";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class UralWreck: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "UralT.p3d";
		displayName = "$STR_DN_URAL_WRECK";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class Body: Camp {
		scope = 2;
		mapSize = 0.7;
		model = "Mrtvola_Army1.p3d";
		displayName = "$STR_DN_BODY";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = "DestructEngine";
	};
	class Shed: Strategic {
		scope = 2;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "pristresek";
		displayName = "$STR_DN_SHED";
		accuracy = 0.2;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 9.8;
		cost = 0;
		armor = 200;
	};
	class Office: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "office";
		displayName = "$STR_DN_OFFICE";
		simulation = "house";
		mapSize = 7.2;
	};
	class Barracks: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "budova4_in";
		displayName = "$STR_DN_BARRACKS";
		simulation = "house";
		mapSize = 15.4;
	};
	class Hangar: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "hangar_in";
		displayName = "$STR_DN_HANGAR";
		simulation = "house";
		mapSize = 27;
	};
	class Hangar_Hall: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "HANGAR";
		displayName = "$STR_DN_HANGAR_HALL";
		simulation = "house";
		mapSize = 25;
	};
	class Hangar_Office: Shed {
		scope = 1;
		side = 3;
		vehicleClass = "Objects";
		icon = "Unknown_object";
		model = "HANGAR_kancl";
		displayName = "$STR_DN_HANGAR_OFFICE";
		simulation = "house";
		mapSize = 6;
	};
	class ShedSmall: Shed {
		model = "pristresek_mensi";
		displayName = "$STR_DN_SHED_SMALL";
		mapSize = 4.3;
		accuracy = 1000;
	};
	class Fountain: NonStrategic {
		animated = 0;
		scope = 2;
		model = "kasna";
		displayName = "$STR_DN_FOUNTAIN";
		simulation = "fountain";
		sound = "Fountain";
		animPeriod = 1.33;
		cost = 0;
	};
	class House: NonStrategic {
		animated = 0;
		scope = 1;
		model = "";
		displayName = "$STR_DN_HOUSE";
		nameSound = "house";
		accuracy = 0.2;
		cost = 0;
		ladders[] = {};
	};
	class Houseryb_domek: House {
		scope = 1;
		model = "ryb_domek";
	};
	class Housemajak: House {
		scope = 1;
		model = "majak";
	};
	class Houseplechbud: House {
		scope = 1;
		model = "plechbud";
	};
	class Housedeutshe_mini: House {
		scope = 1;
		model = "deutshe_mini";
	};
	class Housebouda2_vnitrek: House {
		scope = 1;
		model = "bouda2_vnitrek";
	};
	class Housedeutshe: House {
		scope = 1;
		model = "deutshe";
	};
	class Housedum_mesto: House {
		scope = 1;
		model = "dum_mesto";
	};
	class Housedum_mesto2: House {
		scope = 1;
		model = "dum_mesto2";
	};
	class Housedum_rasovna: House {
		scope = 1;
		model = "dum_rasovna";
	};
	class Housebouda2: House {
		scope = 1;
		model = "bouda2";
	};
	class Housebouda3: House {
		scope = 1;
		model = "bouda3";
	};
	class Housedumruina_mini: House {
		scope = 1;
		model = "dumruina_mini";
	};
	class Housedum_mesto3: House {
		scope = 1;
		model = "dum_mesto3";
	};
	class Housestodola_open: House {
		scope = 1;
		model = "stodola_open";
	};
	class Housestatek_kulna: House {
		scope = 1;
		model = "statek_kulna";
	};
	class Housedum_mesto2l: House {
		scope = 1;
		model = "dum_mesto2l";
	};
	class Housecihlovej_dum_mini: House {
		scope = 1;
		model = "cihlovej_dum_mini";
	};
	class Housebudova5: House {
		scope = 1;
		model = "budova5";
	};
	class Housedumruina: House {
		scope = 1;
		model = "dumruina";
	};
	class Housedum01: House {
		scope = 1;
		model = "dum01";
	};
	class Housecihlovej_dum: House {
		scope = 1;
		model = "cihlovej_dum";
	};
	class Housecihlovej_dum_in: House {
		scope = 1;
		model = "cihlovej_dum_in";
	};
	class Housebudova1: House {
		scope = 1;
		model = "budova1";
	};
	class Housebudova3: House {
		scope = 1;
		model = "budova3";
	};
	class Housebudova4: House {
		scope = 1;
		model = "budova4";
	};
	class Housebudova2: House {
		scope = 1;
		model = "budova2";
	};
	class Housegaraz: House {
		scope = 1;
		model = "garaz";
	};
	class Housegaraz_bez_tanku: House {
		scope = 1;
		model = "garaz_bez_tanku";
	};
	class Housegaraz_s_tankem: House {
		scope = 1;
		model = "garaz_s_tankem";
	};
	class Houserepair_center: House {
		scope = 1;
		model = "repair_center";
	};
	class Housedum02: House {
		scope = 1;
		model = "dum02";
	};
	class Houseafdum_mesto2: House {
		scope = 1;
		model = "afdum_mesto2";
	};
	class Househospoda_mesto: House {
		scope = 1;
		model = "hospoda_mesto";
	};
	class Housestanice: House {
		scope = 1;
		model = "stanice";
	};
	class Housedum_m2: House {
		scope = 1;
		model = "dum_m2";
	};
	class Housebouda1: House {
		scope = 1;
		model = "bouda1";
	};
	class Housestodola: House {
		scope = 1;
		model = "stodola";
	};
	class Housestatek_hl_bud: House {
		scope = 1;
		model = "statek_hl_bud";
	};
	class Househospital: House {
		scope = 1;
		model = "hospital";
	};
	class Housemesto_dum: House {
		scope = 1;
		model = "mesto_dum";
	};
	class Housedum_rasovna_in: House {
		scope = 1;
		model = "dum_rasovna_in";
	};
	class Househelfenburk: House {
		scope = 1;
		model = "helfenburk";
	};
	class Housedum_olezlina: House {
		scope = 1;
		model = "dum_olezlina";
	};
	class Houseafdum_mesto3: House {
		scope = 1;
		model = "afdum_mesto3";
	};
	class Houseafhospoda_mesto: House {
		scope = 1;
		model = "afhospoda_mesto";
	};
	class Housedulni_bs: House {
		scope = 1;
		model = "dulni_bs";
	};
	class Housekostel_trosky: House {
		scope = 1;
		model = "kostel_trosky";
	};
	class Houseafdum_mesto2l: House {
		scope = 1;
		model = "afdum_mesto2l";
	};
	class Housedum_mesto_in: House {
		scope = 1;
		model = "dum_mesto_in";
	};
	class Houseafbarabizna: House {
		scope = 1;
		model = "afbarabizna";
	};
	class Househruzdum: House {
		scope = 1;
		model = "hruzdum";
		ladders[] = {{"start","end"}};
	};
	class Houseammostore2: House {
		scope = 1;
		model = "ammostore2";
		ladders[] = {{"start","end"},{"start1","end1"}};
	};
	class ViewTower: House {
		scope = 1;
		model = "hlaska";
		ladders[] = {{"start","end"}};
	};
	class ViewTower2: House {
		scope = 1;
		model = "vez";
		ladders[] = {{"start","end"}};
	};
	class Forest: NonStrategic {
		scope = 1;
		model = "";
		displayName = "$STR_DN_FOREST";
		nameSound = "forest";
		simulation = "forest";
		accuracy = 0.2;
		cost = 5000;
		coefInside = 1;
		coefInsideHeur = 0.25;
	};
	class ForestSkewed: Forest {
		animated = 0;
	};
	class Forest001: Forest {
		model = "les ctverec pruchozi";
	};
	class Forest001T1: ForestSkewed {
		model = "les ctverec pruchozi_T1";
	};
	class Forest001T2: ForestSkewed {
		model = "les ctverec pruchozi_T2";
	};
	class Forest002: Forest {
		model = "les trojuhelnik pruchozi";
	};
	class Forest003: Forest {
		model = "les_su_ctver_pruhozi";
	};
	class Forest003T1: ForestSkewed {
		model = "les_su_ctver_pruhozi_T1";
	};
	class Forest003T2: ForestSkewed {
		model = "les_su_ctver_pruhozi_T2";
	};
	class Forest004: Forest {
		model = "les_su_trojuhelnik";
	};
	class HeliH: NonStrategic {
		scope = 2;
		model = "Heli_H";
		displayName = "$STR_DN_HELI_H";
		vehicleClass = "Objects";
		icon = "Unknown_object";
		nameSound = "helipad";
		accuracy = 0.2;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 9.8;
		cost = 0;
		armor = 200;
	};
	class HeliHEmpty: HeliH {
		model = "empty";
		displayName = "$STR_DN_HELI_H_EMPTY";
		nameSound = "";
	};
	class FpLogo: Fence {
		scope = 1;
		model = "logofpfull.p3d";
		displayName = "$STR_DN_OF_LOGO";
		nameSound = "";
	};
	class TargetTraining: NonStrategic {
		nameSound = "target";
		model = "terc";
		side = 3;
		armor = 15;
		cost = 0;
		scope = 2;
		displayName = "$STR_DN_TARGET";
		accuracy = 0.25;
	};
	class TargetGrenade: TargetTraining {
		vehicleClass = "Objects";
		nameSound = "target";
		model = "drevtank";
		side = 3;
		armor = 60;
		cost = 0;
		scope = 2;
		displayName = "$STR_DN_ARMORED_TARGET";
		accuracy = 1000;
	};
	class Church: NonStrategic {
		scope = 1;
		displayName = "$STR_DN_CHURCH";
		accuracy = 0.25;
		simulation = "church";
	};
	class Church001: Church {
		scope = 2;
		model = "kostel";
		ladders[] = {{"start","end"}};
	};
	class Church002: Church {
		scope = 2;
		model = "kostel2";
	};
	class Church003: Church {
		scope = 2;
		model = "kostel3";
	};
	class Chapel: NonStrategic {
		scope = 2;
		displayName = "$STR_DN_CHAPEL";
		accuracy = 0.25;
	};
	class Chapel001: Chapel {
		model = "kostelik";
	};
    // 2.01 classes
	class Bomb: Strategic {
		access = 2;
		scope = 2;
		displayName = "$STR_DN_OUT_BOMB";
		model = "shell";
		transportFuel = 50000;
		destrType = "DestructEngine";
	};
	class FuelStation: Strategic {
		icon = "Fuel_object";
		scope = 2;
		cost = 0;
		armor = 50;
		model = "fuelstation";
		displayName = "$STR_DN_FUEL_STATION";
		nameSound = "fuelstation";
		accuracy = 0.5;
		transportFuel = 50000;
		destrType = "DestructEngine";
	};
	class FuelStationNew: FuelStation {
		armor = 100;
		model = "fuelstation_new";
		displayName = "$STR_DN_FUEL_STATION_2";
		accuracy = 1000;
	};
	class FuelStationNew2: FuelStation {
		armor = 100;
		model = "fuelstation_army";
		displayName = "$STR_DN_FUEL_STATION_3";
		accuracy = 1000;
	};
	class Sound {
		scope = 0;
		side = -1;
		vehicleClass = "Sounds";
		icon = "vlajka";
		// mapSize = 10;
        // 2.01 attribute
		mapSize = 1;
	};
	class Owl: Sound {
		scope = 2;
		sound = "OwlSfx";
		displayName = "$STR_DN_OWL";
	};
	class Stream: Sound {
		scope = 2;
		sound = "StreamSfx";
		displayName = "$STR_DN_STREAM";
	};
	class Frog: Sound {
		scope = 2;
		sound = "FrogSfx";
		displayName = "$STR_DN_FROG";
	};
	class Frogs: Sound {
		scope = 2;
		sound = "FrogsSfx";
		displayName = "$STR_DN_FROGS";
	};
	class Alarm: Sound {
		scope = 2;
		sound = "AlarmSfx";
		displayName = "$STR_DN_ALARM";
	};
	class BirdSinging: Sound {
		scope = 2;
		sound = "BirdSingingSfx";
		displayName = "$STR_DN_BIRDSING";
	};
	class Crickets1: Sound {
		scope = 2;
		sound = "Cricket1Sfx";
		displayName = "$STR_DN_CRICKET1";
	};
	class Crickets2: Sound {
		scope = 2;
		sound = "Cricket2Sfx";
		displayName = "$STR_DN_CRICKET2";
	};
	class Crickets3: Sound {
		scope = 2;
		sound = "Cricket3Sfx";
		displayName = "$STR_DN_CRICKET3";
	};
	class Crickets4: Sound {
		scope = 2;
		sound = "CricketSfx";
		displayName = "$STR_DN_CRICKET4";
	};
	class Chicken: Sound {
		scope = 2;
		sound = "ChickenSfx";
		displayName = "$STR_DN_CHICKEN";
	};
	class Cock: Sound {
		scope = 2;
		sound = "CockSfx";
		displayName = "$STR_DN_COCK";
	};
	class Cow: Sound {
		scope = 2;
		sound = "CowSfx";
		displayName = "$STR_DN_COW";
	};
	class Crow: Sound {
		scope = 2;
		sound = "CrowSfx";
		displayName = "$STR_DN_CROW";
	};
	class Wolf: Sound {
		scope = 2;
		sound = "WolfSfx";
		displayName = "$STR_DN_WOLF";
	};
	class Dog: Sound {
		scope = 2;
		sound = "DogSfx";
		displayName = "$STR_DN_DOG";
	};
	class BadDog: Sound {
		scope = 2;
		sound = "BadDogSfx";
		displayName = "$STR_DN_BAD_DOG";
	};
	class SorrowDog: Sound {
		scope = 2;
		sound = "SorrowDogSfx";
		displayName = "$STR_DN_SORROW_DOG";
	};
	class LittleDog: Sound {
		scope = 2;
		sound = "LittleDogSfx";
		displayName = "$STR_DN_LITTLE_DOG";
	};
	class Music: Sound {
		scope = 2;
		sound = "FunMusicSfx";
		displayName = "$STR_DN_MUSIC";
	};
	class MineGeneric {
		scope = 0;
		side = -1;
		vehicleClass = "Mines";
		// icon = "unknown_object";
		// mapSize = 10;

        // 2.01 attributes
		icon = "\res\i\mine.paa";
		mapSize = 1;
	};
	class MineMine: MineGeneric {
		scope = 2;
		displayName = "$STR_DN_MINE";
		ammo = "Mine";
	};
    // 2.01 classes
	class MineMineE: MineGeneric {
		scope = 2;
		displayName = "$STR_DN_MINE_E";
		ammo = "MineE";
	};
	class MineMineAPE: MineGeneric {
		scope = 2;
		displayName = "$STR_DN_MINE_APE";
		ammo = "MineAPE";
		mapSize = 0.5;
	};
};
