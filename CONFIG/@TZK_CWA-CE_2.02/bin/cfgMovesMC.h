// replace 10000000000.000000 with 1e+010
// replace big interger with minus value (e.g. 4294967295 = -1)
// remove ending 0 in decimal
// adjust '{' position
// fill ';' in the end of line
// adjust definition pos of those "transitionsInterpolated" attributes

// It seems 2.01 only add more CfgMovesMC from addons

class CfgMovesMC {
	access = 1;
	vehicleActions = "CfgVehicleActions";
	transitionsInterpolated[] = {};
	transitionsSimple[] = {"Lying","LyingDying",1,"LyingDying","LyingDead",1,"CivilLying","CivilLyingDying",1,"CivilLyingDying","CivilLyingDead",1,"Stand","StandDying",1,"StandDying","StandDead",1,"Stand","StandDyingVer2",1,"StandDyingVer2","StandDeadVer2",1,"Weapon","WeaponDying",1,"WeaponDying","WeaponDead",1,"Weapon","WeaponDyingVer2",1,"WeaponDyingVer2","WeaponDeadVer2",1,"Cargo","CargoDying",1,"CargoDying","CargoDead",1,"Combat","CombatToWeapon",2,"CombatToWeapon","Weapon",2,"Lying","LyingToWeapon",2,"LyingToWeapon","Weapon",2,"Weapon","WeaponToLying",2,"WeaponToLying","Lying",2,"Combat","CombatReloadMagazine",2,"CombatReloadMagazine","Combat",2,"Combat","CombatReloadMGun",2,"CombatReloadMGun","Combat",2,"Combat","CombatReloadMortarStart",2,"CombatReloadMortarStart","CombatReloadMortarEnd",2,"CombatReloadMortarEnd","Combat",2,"Combat","CombatThrowGrenadeStart",2,"CombatThrowGrenadeStart","CombatThrowGrenadeEnd",2,"CombatThrowGrenadeEnd","Combat",2,"Stand","StandThrowGrenadeStart",2,"StandThrowGrenadeStart","StandThrowGrenadeEnd",2,"StandThrowGrenadeEnd","Stand",2,"Civil","CivilThrowGrenadeStart",2,"CivilThrowGrenadeStart","CivilThrowGrenadeEnd",2,"CivilThrowGrenadeEnd","Civil",2,"Lying","LyingThrowGrenadeStart",2,"LyingThrowGrenadeStart","LyingThrowGrenadeEnd",2,"LyingThrowGrenadeEnd","Lying",2,"CombatRunF","CombatRunThrowGrenadeStart",2,"CombatRunThrowGrenadeStart","CombatRunThrowGrenadeEnd",2,"CombatRunThrowGrenadeEnd","Combat",2,"CivilRunF","CivilRunThrowGrenadeStart",2,"CivilRunThrowGrenadeStart","CivilRunThrowGrenadeEnd",2,"CivilRunThrowGrenadeEnd","Civil",2,"Lying","LyingReloadMagazine",2,"LyingReloadMagazine","Lying",2,"Combat","CombatToBinoc",2,"CombatToBinoc","Binoc",2,"Binoc","BinocToCombat",2,"BinocToCombat","Combat",2,"Lying","LyingToBinocLying",2,"LyingToBinocLying","BinocLying",2,"BinocLying","BinocLyingToLying",2,"BinocLyingToLying","Lying",2,"Weapon","WeaponReloadAT",2,"WeaponReloadAT","Weapon",2,"Stand","StandToCombat",1,"StandToCombat","Combat",1,"Combat","CombatToStand",1,"CombatToStand","Stand",1,"Lying","LyingToCombat",1.2,"LyingToCombat","Combat",1.2,"Combat","CombatToLying",1.2,"CombatToLying","Lying",1.2,"CombatRunF","CombatRunFToLying",1,"CombatRunFToLying","Lying",1,"Lying","LyingToCombatRun",1,"LyingToCombatRun","CombatRunF",1,"Civil","CivilToCivilLying",1.2,"CivilToCivilLying","CivilLying",1.2,"CivilLying","CivilLyingToCivil",1.2,"CivilLyingToCivil","Civil",1.2,"Combat","CombatGetInCar",1,"CombatGetInCar","Combat",1,"Combat","CombatGetInTank",1,"CombatGetInTank","Combat",1,"CombatGetOutTank","Combat",1,"Civil","CivilGetInCar",1,"CivilGetInCar","Civil",1,"Civil","CivilGetInTank",1,"CivilGetInTank","Civil",1,"CivilGetOutTank","Civil",1,"Stand","StandGetInCar",1,"StandGetInCar","Stand",1,"Stand","StandGetInTank",1,"StandGetInTank","Stand",1,"StandGetOutTank","Stand",1,"Stand","StandToSitDown",1,"StandToSitDown","EffectStandSitDown",1,"EffectStandSitDown","SitDownToStand",1,"SitDownToStand","Stand",1,"EffectStandSitDown","SitDownDying",1,"SitDownDying","SitDownDead",1,"CombatDead","DeadState",10,"CombatDeadVer2","DeadState",10,"StandDead","DeadState",10,"StandDeadVer2","DeadState",10,"LyingDead","DeadState",10,"CivilLyingDead","DeadState",10,"WeaponDead","DeadState",10,"WeaponDeadVer2","DeadState",10,"SitDownDead","DeadState",10};
	transitionsDisabled[] = {};
	class Actions {
		class NoActionsAll: CfgManActions {
			access = 3;
		};
		class NoActions: NoActionsAll {
			ladderOnDown = "LadderDownStart";
			ladderOnUp = "LadderUpStart";
			turnSpeed = 1;
			upDegree = -1;
			limitFast = 5;
		};
		class DeadActions: NoActions {
			upDegree = "ManPosDead";
		};
		class CargoActions: NoActions {
			die = "DeadState";
		};
		class WeaponActions: NoActions {
			stop = "Weapon";
			upDegree = "ManPosWeapon";
			weaponOn = "Weapon";
			weaponOff = "Crouch";
			handGunOn = "HandGunCrouch";
			down = "Lying";
			up = "Combat";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			die = "WeaponDead";
			civilLying = "CivilLying";
			civil = "Civil";
			walkF = "WeaponWalkF";
			walkLF = "WeaponWalkLF";
			walkRF = "WeaponWalkRF";
			walkL = "WeaponWalkL";
			walkR = "WeaponWalkR";
			walkLB = "WeaponWalkLB";
			walkRB = "WeaponWalkRB";
			walkB = "WeaponWalkB";
			slowF = "WeaponWalkF";
			slowLF = "WeaponWalkLF";
			slowRF = "WeaponWalkRF";
			slowL = "WeaponWalkL";
			slowR = "WeaponWalkR";
			slowLB = "WeaponWalkLB";
			slowRB = "WeaponWalkRB";
			slowB = "WeaponWalkB";
			fastF = "WeaponWalkF";
			fastLF = "WeaponWalkLF";
			fastRF = "WeaponWalkRF";
			fastL = "WeaponWalkL";
			fastR = "WeaponWalkR";
			fastLB = "WeaponWalkLB";
			fastRB = "WeaponWalkRB";
			fastB = "WeaponWalkB";
			turnL = "WeaponTurnL";
			turnR = "WeaponTurnR";
			default = "Combat";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			reloadAT = "WeaponReloadAT";
		};
		class StandActions: NoActions {
			stop = "Stand";
			default = "Stand";
			walkF = "StandWalkF";
			walkLF = "StandWalkLF";
			walkRF = "StandWalkRF";
			walkL = "StandWalkL";
			walkR = "StandWalkR";
			walkLB = "StandWalkLB";
			walkRB = "StandWalkRB";
			walkB = "StandWalkB";
			slowF = "StandWalkF";
			slowLF = "StandWalkLF";
			slowRF = "StandWalkRF";
			slowL = "StandWalkL";
			slowR = "StandWalkR";
			slowLB = "StandWalkLB";
			slowRB = "StandWalkRB";
			slowB = "StandWalkB";
			fastF = "StandRunF";
			fastLF = "StandWalkLF";
			fastRF = "StandWalkRF";
			fastL = "StandWalkL";
			fastR = "StandWalkR";
			fastLB = "StandWalkLB";
			fastRB = "StandWalkRB";
			fastB = "StandWalkB";
			down = "Combat";
			up = "Combat";
			weaponOn = "Weapon";
			weaponOff = "Stand";
			binocOn = "BinocStand";
			binocOff = "Stand";
			handGunOn = "HandGunStand";
			strokeFist = "StandStrokeFist";
			strokeGun = "";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			fireNotPossible = "Combat";
			throwGrenade = "StandThrowGrenadeStart";
			turnL = "StandTurnL";
			turnR = "StandTurnR";
			getInCar = "StandGetInCar";
			getOutCar = "Stand";
			getInTank = "StandGetInTank";
			getOutTank = "StandGetOutTank";
			sitDown = "StandToSitDown";
			salute = "EffectStandSaluteStart";
			turnSpeed = 4;
			limitFast = 2.5;
			die = "StandDead";
			takeFlag = "StandToStandTakeFlag";
			putDown = "StandPutDown";
			upDegree = "ManPosStand";
		};
		class StandStillActions: StandActions {
			stop = "EffectStandStill";
			default = "EffectStandStill";
		};
		class StandStandActions: StandActions {
			stop = "EffectStand";
			default = "EffectStand";
		};
		class StandSaluteActions: StandActions {
			stop = "EffectStandSalute";
			default = "EffectStandSalute";
			salute = "";
		};
		class StandTalkActions: StandActions {
			stop = "EffectStandTalk";
			default = "EffectStandTalk";
		};
		class SitActions: StandActions {
			turnL = "";
			turnR = "";
			stop = "EffectStandSitDown";
			default = "EffectStandSitDown";
			strokeFist = "";
			sitDown = "";
			die = "SitDownDead";
		};
		class CivilActions: StandActions {
			stop = "Civil";
			default = "Civil";
			walkF = "CivilWalkF";
			walkLF = "CivilWalkLF";
			walkRF = "CivilWalkRF";
			walkL = "CivilWalkL";
			walkR = "CivilWalkR";
			walkLB = "CivilWalkLB";
			walkRB = "CivilWalkRB";
			walkB = "CivilWalkB";
			slowF = "CivilWalkF";
			slowLF = "CivilWalkLF";
			slowRF = "CivilWalkRF";
			slowL = "CivilWalkL";
			slowR = "CivilWalkR";
			slowLB = "CivilWalkLB";
			slowRB = "CivilWalkRB";
			slowB = "CivilWalkB";
			fastF = "CivilRunF";
			fastLF = "CivilRunLF";
			fastRF = "CivilRunRF";
			fastL = "CivilRunL";
			fastR = "CivilRunR";
			fastLB = "CivilRunLB";
			fastRB = "CivilRunRB";
			fastB = "CivilRunB";
			down = "CivilLying";
			up = "CivilLying";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			throwGrenade = "CivilThrowGrenadeStart";
			turnL = "CivilTurnL";
			turnR = "CivilTurnR";
			handGunOn = "HandGunStand";
			die = "CivilDead";
			getInCar = "CivilGetInCar";
			getOutCar = "Civil";
			getInTank = "CivilGetInTank";
			getOutTank = "CivilGetOutTank";
			takeFlag = "CivilToCivilTakeFlag";
			putDown = "CivilPutDown";
			limitFast = 4;
			upDegree = "ManPosNoWeapon";
		};
		class CombatActions: NoActions {
			stop = "Combat";
			default = "Combat";
			stopRelaxed = "CombatRelaxed";
			reloadMagazine = "CombatReloadMagazine";
			reloadMGun = "CombatReloadMGun";
			reloadMortar = "CombatReloadMortarStart";
			throwGrenade = "CombatThrowGrenadeStart";
			walkF = "CombatWalkF";
			walkLF = "CombatWalkLF";
			walkRF = "CombatWalkRF";
			walkL = "CombatWalkL";
			walkR = "CombatWalkR";
			walkLB = "CombatWalkLB";
			walkRB = "CombatWalkRB";
			walkB = "CombatWalkB";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "CombatSprintF";
			fastLF = "CombatSprintLF";
			fastRF = "CombatSprintRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
			down = "Lying";
			up = "Crouch";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			die = "CombatDead";
			weaponOn = "Weapon";
			binocOn = "Binoc";
			binocOff = "Combat";
			handGunOn = "HandGunStand";
			takeFlag = "CombatToTakeFlag";
			putDown = "PutDown";
			medic = "Medic";
			treated = "Treated";
			strokeFist = "";
			strokeGun = "CombatStrokeGun";
			turnL = "CombatTurnL";
			turnR = "CombatTurnR";
			turnLRelaxed = "CombatTurnLRelaxed";
			turnRRelaxed = "CombatTurnRRelaxed";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			turnSpeed = 8;
			limitFast = 5.5;
			upDegree = "ManPosCombat";
		};
		class CrouchActions: CombatActions {
			stop = "Crouch";
			default = "Crouch";
			up = "Combat";
			reloadMagazine = "CrouchReloadMagazine";
			reloadMG = "CrouchReloadMagazine";
			die = "CrouchDead";
			weaponOn = "Weapon";
			walkF = "CrouchWalkF";
			walkLF = "CrouchWalkLF";
			walkRF = "CrouchWalkRF";
			walkL = "CrouchWalkL";
			walkR = "CrouchWalkR";
			walkLB = "CrouchWalkLB";
			walkRB = "CrouchWalkRB";
			walkB = "CrouchWalkB";
			slowF = "CrouchRunF";
			slowLF = "CrouchRunLF";
			slowRF = "CrouchRunRF";
			slowL = "CrouchRunL";
			slowR = "CrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchSprintF";
			fastLF = "CrouchSprintLF";
			fastRF = "CrouchSprintRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
			binocOn = "BinocCrouch";
			binocOff = "Crouch";
			handGunOn = "HandGunCrouch";
			turnL = "CrouchTurnL";
			turnR = "CrouchTurnR";
		};
		class CombatStandingUpActions: CombatActions {
			die = "LyingDead";
		};
		class CombatRunFActions: CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
		};
		class CombatRunBActions: CombatActions {
			die = "CombatRunBDead";
		};
		class CivilRunFActions: CivilActions {
			throwGrenade = "CivilRunThrowGrenadeStart";
		};
		class CrouchRunFActions: CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
		};
		class CrouchRunBActions: CrouchActions {
			die = "CombatRunBDead";
		};
		class CombatRelaxedActions: CombatActions {
			die = "CombatRelaxedDead";
		};
		class LyingActions: NoActions {
			stop = "Lying";
			default = "Lying";
			reloadMagazine = "LyingReloadMagazine";
			reloadMGun = "LyingReloadMagazine";
			throwGrenade = "LyingThrowGrenadeStart";
			walkF = "LyingCrawlF";
			walkLF = "LyingCrawlLF";
			walkRF = "LyingCrawlRF";
			walkL = "LyingCrawlL";
			walkR = "LyingCrawlR";
			walkLB = "LyingCrawlLB";
			walkRB = "LyingCrawlRB";
			walkB = "LyingCrawlB";
			slowF = "LyingCrawlF";
			slowLF = "LyingCrawlLF";
			slowRF = "LyingCrawlRF";
			slowL = "LyingCrawlL";
			slowR = "LyingCrawlR";
			slowLB = "LyingCrawlLB";
			slowRB = "LyingCrawlRB";
			slowB = "LyingCrawlB";
			fastF = "LyingFastCrawlF";
			fastLF = "LyingCrawlLF";
			fastRF = "LyingCrawlRF";
			fastL = "LyingCrawlL";
			fastR = "LyingCrawlR";
			fastLB = "LyingCrawlLB";
			fastRB = "LyingCrawlRB";
			fastB = "LyingCrawlB";
			down = "Combat";
			up = "Crouch";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			die = "LyingDead";
			weaponOn = "Weapon";
			weaponOff = "Lying";
			binocOn = "BinocLying";
			binocOff = "Lying";
			handGunOn = "HandGunLying";
			turnL = "LyingTurnL";
			turnR = "LyingTurnR";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			takeFlag = "CombatToTakeFlag";
			putDown = "PutDownLying";
			medic = "Medic";
			treated = "TreatedLying";
			turnSpeed = 3;
			upDegree = "ManPosLying";
		};
		class CrawlingActions: LyingActions {
			up = "CombatRunF";
			combat = "CombatRunF";
		};
		class CivilLyingActions: LyingActions {
			stop = "CivilLying";
			down = "Civil";
			up = "Civil";
			walkF = "CivilLyingCrawlF";
			walkLF = "CivilLyingCrawlLF";
			walkRF = "CivilLyingCrawlRF";
			walkL = "CivilLyingCrawlL";
			walkR = "CivilLyingCrawlR";
			walkLB = "CivilLyingCrawlLB";
			walkRB = "CivilLyingCrawlRB";
			walkB = "CivilLyingCrawlB";
			slowF = "CivilLyingCrawlF";
			slowLF = "CivilLyingCrawlLF";
			slowRF = "CivilLyingCrawlRF";
			slowL = "CivilLyingCrawlL";
			slowR = "CivilLyingCrawlR";
			slowLB = "CivilLyingCrawlLB";
			slowRB = "CivilLyingCrawlRB";
			slowB = "CivilLyingCrawlB";
			fastF = "CivilLyingFastCrawlF";
			fastLF = "CivilLyingCrawlLF";
			fastRF = "CivilLyingCrawlRF";
			fastL = "CivilLyingCrawlL";
			fastR = "CivilLyingCrawlR";
			fastLB = "CivilLyingCrawlLB";
			fastRB = "CivilLyingCrawlRB";
			fastB = "CivilLyingCrawlB";
			die = "CivilLyingDead";
			takeFlag = "CivilLyingToCivilLyingTakeFlag";
			putDown = "CivilLyingPutDown";
			upDegree = "ManPosLyingNoWeapon";
		};
		class CivilCrawlingActions: CivilLyingActions {};
		class LadderActions: NoActions {
			stop = "LadderStatic";
			default = "LadderStatic";
			upDegree = "ManPosStand";
			turnSpeed = 0.1;
			ladderOff = "LadderDownEnd";
			ladderOffTop = "LadderUpEnd";
			ladderOffBottom = "LadderDownEnd";
			down = "LadderDownLoop";
			up = "LadderUpLoop";
			die = "StandDead";
		};
		class LadderUpActions: LadderActions {
			ladderOff = "LadderUpEnd";
		};
		class LadderDownActions: LadderActions {
			ladderOff = "LadderDownEnd";
		};
		class CombatNoMoveActions: CombatActions {
			stopRelaxed = "";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			turnSpeed = 2;
		};
		class PutDownActions: CombatActions {
			stop = "PutDown";
			default = "PutDown";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class TakeFlagActions: CombatActions {
			stop = "Combat";
			default = "Combat";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class MedicActions: CombatActions {
			stop = "Medic";
			default = "Medic";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class TreatedActions: CombatActions {
			stop = "Treated";
			default = "Treated";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class StandPutDownActions: StandActions {
			stop = "StandPutDown";
			default = "StandPutDown";
			down = "Stand";
			up = "Stand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Stand";
			fireNotPossible = "Stand";
		};
		class StandTakeFlagActions: StandActions {
			stop = "Stand";
			default = "Stand";
			down = "Stand";
			up = "Stand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Stand";
			fireNotPossible = "Stand";
		};
		class CivilPutDownActions: CivilActions {
			stop = "CivilPutDown";
			default = "CivilPutDown";
			down = "CivilLying";
			up = "Civil";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Civil";
			fireNotPossible = "Civil";
		};
		class CivilTakeFlagActions: CivilActions {
			stop = "Civil";
			default = "Civil";
			down = "CivilLying";
			up = "Civil";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Civil";
			fireNotPossible = "Civil";
		};
		class PutDownLyingActions: LyingActions {
			stop = "PutDownLying";
			default = "PutDownLying";
			down = "Lying";
			up = "Lying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Lying";
			fireNotPossible = "Lying";
		};
		class TreatedLyingActions: LyingActions {
			stop = "TreatedLying";
			default = "TreatedLying";
			down = "Lying";
			up = "Lying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Lying";
			fireNotPossible = "Lying";
		};
		class CivilLyingPutDownActions: CivilLyingActions {
			stop = "CivilLyingPutDown";
			default = "CivilLyingPutDown";
			down = "CivilLying";
			up = "CivilLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "CivilLying";
			fireNotPossible = "CivilLying";
		};
		class CivilLyingTakeFlagActions: CivilLyingActions {
			stop = "CivilLying";
			default = "CivilLying";
			down = "CivilLying";
			up = "CivilLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "CivilLying";
			fireNotPossible = "CivilLying";
		};
		class BinocActions: CombatNoMoveActions {
			stop = "Binoc";
			default = "Binoc";
			binocOff = "Combat";
			upDegree = "ManPosBinoc";
		};
		class BinocLyingActions: LyingActions {
			stop = "BinocLying";
			default = "BinocLying";
			binocOff = "Lying";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinocLying";
			turnSpeed = 1;
		};
		class BinocStandActions: StandActions {
			stop = "BinocStand";
			default = "BinocStand";
			binocOff = "Stand";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinocStand";
			turnSpeed = 2;
		};
		class BinocCrouchActions: CrouchActions {
			stop = "BinocCrouch";
			default = "BinocCrouch";
			binocOff = "Crouch";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinoc";
			turnSpeed = 2;
		};
	};
	class BlendAnims {
		aimingDefault[] = {"hlava",1,"krk",1,"zbran",1,"roura",1,"lrameno",1,"prameno",1,"lbiceps",1,"lloket",1,"lruka",1,"pbiceps",1,"ploket",1,"pruka",1,"hrudnik",0.9,"zebra",0.5,"bricho",0.2};
		legsDefault[] = {"lprsty",1,"pprsty",1,"lchodidlo",1,"pchodidlo",1,"lholen",0.95,"pholen",0.95,"lstehno",0.9,"pstehno",0.9,"lzadek",0.5,"pzadek",0.5};
		headDefault[] = {"hlava",1,"krk",0.5};
		aimingLying[] = {"hlava",1,"krk",0.9,"lrameno",0.5,"prameno",0.5,"hrudnik",0.8,"zebra",0.5};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
	};
	class Default {
		access = 3;
		actions = "StandActions";
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 0;
		enableOptics = 1;
		disableWeaponsLong = 0;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		duty = -0.5;
		visibleSize = 1;
		aimPrecision = 1;
		recoilSuffix = "";
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingDefault";
		legs = "legsDefault";
		head = "headDefault";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
	};
	class StandBase: Default {
		limitGunMovement = 0;
		aiming = "aimingNo";
		disableWeapons = 1;
		disableWeaponsLong = 1;
	};
	class LadderBase: StandBase {
		actions = "LadderActions";
		aiming = "aimingNo";
		legs = "legsNo";
		onLadder = 1;
		disableWeapons = 1;
	};
	class LadderUpBase: LadderBase {
		actions = "LadderUpActions";
	};
	class LadderDownBase: LadderBase {
		actions = "LadderDownActions";
	};
	class DefaultDie: Default {
		limitGunMovement = 0;
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge1 = 0.45;
		soundEdge2 = 0.45;
	};
	class States {
		class DeadState: Default {
			actions = "DeadActions";
			file = "bezsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class Stand: StandBase {
			actions = "StandActions";
			file = "bezstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"StandVar2",0.7,"Stand",0.3};
			equivalentTo = "Stand";
			interpolationSpeed = 2;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandVar2: Stand {
			file = "bezstanistill.rtm";
			speed = -7.8;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandWalkF: StandBase {
			actions = "StandActions";
			file = "chuzeBez0l.rtm";
			speed = -1.2;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandWalkLF: StandWalkF {
			file = "chuzebez-45L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkRF: StandWalkF {
			file = "chuzebez45L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkL: StandWalkF {
			file = "chuzebez-90L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkR: StandWalkF {
			file = "chuzebez90L.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkLB: StandWalkF {
			file = "chuzebez-135l.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkRB: StandWalkF {
			file = "chuzebez135l.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandWalkB: StandWalkF {
			file = "chuzebez180l.rtm";
			speed = -1.53;
			looped = 1;
		};
		class StandRunF: StandWalkF {
			file = "bezbeh.rtm";
			speed = -0.8;
			duty = -0.5;
			relSpeedMin = 0.7;
			relSpeedMax = 1;
		};
		class StandToCombat: Default {
			actions = "CombatActions";
			file = "stanidostanis.rtm";
			speed = -1.8;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToStand: Default {
			actions = "StandActions";
			file = "sstanidostani.rtm";
			speed = -1.5;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatToLying: Default {
			actions = "LyingActions";
			file = "stanisdolehu.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			interpolateTo[] = {"LyingDying",1};
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
		};
		class CombatRunFToLying: Default {
			actions = "LyingActions";
			file = "behleh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
		};
		class LyingToCombat: Default {
			actions = "CombatStandingUpActions";
			file = "lehdostanis.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			interpolateTo[] = {"LyingDying",1};
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
		};
		class LyingToCombatRun: Default {
			actions = "CombatStandingUpActions";
			file = "lehbeh.rtm";
			speed = -1;
			looped = 0;
			onLandBeg = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "standup";
			soundEdge1 = 0;
			soundEdge2 = 0;
		};
		class Combat: Default {
			actions = "CombatActions";
			preload = 1;
			file = "sstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {"CombatStillPlayer",0.5,"Combat"};
			variantsAI[] = {"CombatStillPlayer",0.3,"CombatStillV1",0.5,"Combat"};
		};
		class CombatRelaxed: Combat {
			actions = "CombatRelaxedActions";
			file = "savarestanistat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxedStill",0.8,"CombatRelaxed"};
			interpolateTo[] = {"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
		};
		class CombatStillV1: Combat {
			file = "sstani.rtm";
			speed = -6.8;
			looped = 1;
			equivalentTo = "Combat";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatStillPlayer: Combat {
			file = "sstaniSoft.rtm";
			speed = -6.8;
			looped = 1;
			equivalentTo = "Combat";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatRelaxedStill: Combat {
			actions = "CombatRelaxedActions";
			file = "savarestani.rtm";
			speed = -5;
			looped = 1;
			disableWeapons = 0;
			equivalentTo = "CombatRelaxed";
		};
		class CombatReloadMagazine: Default {
			preload = 1;
			actions = "CombatActions";
			file = "snabij.rtm";
			speed = "- 2.4";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToBinoc: Default {
			actions = "CombatActions";
			file = "sdalek.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Binoc: Default {
			actions = "BinocActions";
			file = "sdalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			head = "headNo";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class BinocToCombat: Default {
			actions = "CombatActions";
			file = "sdalek2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Crouch: Combat {
			preload = 1;
			actions = "CrouchActions";
			file = "klek.rtm";
			speed = 1e+010;
			variantsPlayer[] = {};
			variantsAI[] = {};
			visibleSize = 0.6;
			aimPrecision = 0.5;
			recoilSuffix = "halffixed";
		};
		class CrouchIM: Combat {
			actions = "CrouchActions";
			speed = 1e+010;
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class CrouchToCombat: Default {
			preload = 1;
			actions = "CombatActions";
			file = "klekdostani.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			enableOptics = 0;
			connectFrom[] = {"Crouch",0.5};
			connectTo[] = {"Combat",0.5};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CrouchToCrouchSprintF: Default {
			preload = 1;
			actions = "CrouchRunFActions";
			file = "klekbeh.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",0.4};
			enableOptics = 0;
			connectTo[] = {"CrouchSprintF",0.4};
			interpolateTo[] = {"Crouch",1};
		};
		class CombatToCrouch: Default {
			preload = 1;
			actions = "CrouchActions";
			file = "sstanidoklek.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			enableOptics = 0;
			connectFrom[] = {"Combat",0.5};
			connectTo[] = {"Crouch",0.5};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchToLying: Default {
			preload = 1;
			actions = "LyingActions";
			file = "klekleh.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Lying",1};
			soundEnabled = 1;
			enableOptics = 0;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingToCrouch: Default {
			preload = 1;
			actions = "CrouchActions";
			file = "lehklek.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"Lying",1};
			connectTo[] = {"Crouch",1};
			soundEnabled = 1;
			enableOptics = 0;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			onLandBeg = 1;
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchReloadMagazine: Default {
			preload = 1;
			actions = "CrouchActions";
			file = "kleknabij.rtm";
			speed = "- 2.4";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			visibleSize = 0.6;
			aimPrecision = 0.5;
			recoilSuffix = "halffixed";
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchDying: DefaultDie {
			actions = "NoActions";
			file = "kleksmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"CrouchDead",1};
		};
		class CrouchDead: CrouchDying {
			actions = "DeadActions";
			file = "kleksmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CrouchToWeapon: Default {
			actions = "WeaponActions";
			file = "klekdoAT.rtm";
			speed = -2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Weapon",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToCrouch: Default {
			actions = "CrouchActions";
			file = "atdoklek.rtm";
			speed = -2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",1.2};
			connectTo[] = {"Crouch",1.2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class LyingToBinocLying: Default {
			actions = "LyingActions";
			file = "plazenidalek.rtm";
			speed = -2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			showItemInHand = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class BinocLying: Default {
			actions = "BinocLyingActions";
			file = "plazenidalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			duty = -1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class BinocLyingToLying: Default {
			actions = "LyingActions";
			file = "plazenidalek2.rtm";
			speed = -2;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class StandToBinocStand: Default {
			actions = "StandActions";
			file = "bezdalek.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStand: Default {
			actions = "BinocStandActions";
			file = "bezdalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"StandToBinocStand",1};
			connectTo[] = {"BinocStandToStand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStandToStand: Default {
			actions = "StandActions";
			file = "bezdalek2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeStart: Default {
			actions = "StandActions";
			file = "bezgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeEnd: Default {
			actions = "StandActions";
			file = "bezgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatToTakeFlag: Default {
			actions = "CombatActions";
			file = "spoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TakeFlag: Default {
			actions = "TakeFlagActions";
			file = "spolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToTakeFlag",2};
			connectTo[] = {"TakeFlagToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TakeFlagToCombat: Default {
			actions = "CombatActions";
			file = "spoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToPutDown: Default {
			actions = "CombatActions";
			file = "spoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class PutDown: Default {
			actions = "PutDownActions";
			file = "spolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToPutDown",2};
			connectTo[] = {"PutDownToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class PutDownToCombat: Default {
			actions = "CombatActions";
			file = "spoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToMedic: Default {
			actions = "CombatActions";
			file = "smedicstart.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Medic: Default {
			actions = "MedicActions";
			file = "smedicloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToMedic",2};
			connectTo[] = {"MedicToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class MedicToCombat: Default {
			actions = "CombatActions";
			file = "smedicend.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToTreated: Default {
			actions = "CombatActions";
			file = "sosetrenstart.rtm";
			speed = -5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Treated: Default {
			actions = "TreatedActions";
			file = "sosetrenloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToTreated",2};
			connectTo[] = {"TreatedToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TreatedToCombat: Default {
			actions = "CombatActions";
			file = "sosetrenend.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class StandToStandTakeFlag: Default {
			actions = "StandActions";
			file = "bezstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandTakeFlag: Default {
			actions = "StandTakeFlagActions";
			file = "bezstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"StandToStandTakeFlag",2};
			connectTo[] = {"StandTakeFlagToStand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandTakeFlagToStand: Default {
			actions = "StandActions";
			file = "bezstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandToStandPutDown: Default {
			actions = "StandActions";
			file = "bezstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandPutDown: Default {
			actions = "StandPutDownActions";
			file = "bezstanipolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"StandToStandPutDown",2};
			connectTo[] = {"StandPutDownToStand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandPutDownToStand: Default {
			actions = "StandActions";
			file = "bezstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CivilToCivilTakeFlag: Default {
			actions = "CivilActions";
			file = "civilstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilTakeFlag: Default {
			actions = "CivilTakeFlagActions";
			file = "civilstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilToCivilTakeFlag",2};
			connectTo[] = {"CivilTakeFlagToCivil",2};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilTakeFlagToCivil: Default {
			actions = "CivilActions";
			file = "civilstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilToCivilPutDown: Default {
			actions = "CivilActions";
			file = "civilstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilPutDown: Default {
			actions = "CivilPutDownActions";
			file = "civilstanipolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilToCivilPutDown",2};
			connectTo[] = {"CivilPutDownToCivil",2};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilPutDownToCivil: Default {
			actions = "CivilActions";
			file = "civilstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class LyingToPutDownLying: Default {
			actions = "LyingActions";
			file = "lehpoloz.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class PutDownLying: Default {
			actions = "PutDownLyingActions";
			file = "lehpolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"LyingToPutDownLying",2};
			connectTo[] = {"PutDownLyingToLying",2};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class PutDownLyingToLying: Default {
			actions = "LyingActions";
			file = "lehpoloz2.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingToTreatedLying: Default {
			actions = "LyingActions";
			file = "lehosetrenstart.rtm";
			speed = -5;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class TreatedLying: Default {
			actions = "TreatedLyingActions";
			file = "lehosetrenloop.rtm";
			speed = -3;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"LyingToTreatedLying",2};
			connectTo[] = {"TreatedLyingToLying",2};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class TreatedLyingToLying: Default {
			actions = "LyingActions";
			file = "lehosetrenend.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class CivilLyingToCivilLyingTakeFlag: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz1.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingTakeFlag: Default {
			actions = "CivilLyingTakeFlagActions";
			file = "lehcivilpolozstat.rtm";
			speed = -2.5;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilLyingToCivilLyingTakeFlag",2};
			connectTo[] = {"CivilLyingTakeFlagToCivilLying",2};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingTakeFlagToCivilLying: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz2.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingToCivilLyingPutDown: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz1.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingPutDown: Default {
			actions = "CivilLyingPutDownActions";
			file = "lehcivilpolozstat.rtm";
			speed = 1e+010;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilLyingToCivilLyingPutDown",2};
			connectTo[] = {"CivilLyingPutDownToCivilLying",2};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingPutDownToCivilLying: Default {
			actions = "CivilLyingActions";
			file = "lehcivilpoloz2.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CombatReloadMGun: Default {
			actions = "CombatActions";
			file = "kulometnabij.rtm";
			speed = -2.93;
			looped = 0;
			disableWeapons = 1;
		};
		class CombatReloadMortarStart: Default {
			actions = "CombatActions";
			file = "minabijstart.rtm";
			speed = -2.415;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
		};
		class CombatReloadMortarEnd: Default {
			actions = "CombatActions";
			file = "minabijend.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
		};
		class CombatThrowGrenadeStart: Default {
			actions = "CombatActions";
			file = "sgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatThrowGrenadeEnd: Default {
			actions = "CombatActions";
			file = "sgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatRunThrowGrenadeStart: Default {
			actions = "CombatRunFActions";
			file = "sbehgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatRunDying",0.1,"CombatRunDyingVer2",0.1};
		};
		class CombatRunThrowGrenadeEnd: Default {
			actions = "CombatRunFActions";
			file = "sbehgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatStrokeGun: Default {
			actions = "CombatActions";
			file = "spazba.rtm";
			speed = -2.2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatStrokeGunEnd",1};
		};
		class CombatStrokeGunEnd: Default {
			actions = "CombatActions";
			file = "sstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			connectTo[] = {"Combat",1};
		};
		class CombatRunF: Default {
			preload = 1;
			actions = "CombatRunFActions";
			file = "sbeh0l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1;
		};
		class CombatRunLF: CombatRunF {
			preload = 0;
			file = "sbeh-45l.rtm";
			speed = -0.7;
		};
		class CombatRunRF: CombatRunF {
			preload = 0;
			file = "sbeh45l.rtm";
			speed = -0.7;
		};
		class CombatRunNF: CombatRunF {
			preload = 0;
			actions = "CombatActions";
		};
		class CombatRunL: CombatRunNF {
			file = "sbeh-90l.rtm";
			speed = -0.7;
		};
		class CombatRunR: CombatRunNF {
			file = "sbeh90l.rtm";
			speed = -0.76;
		};
		class CombatRunLB: CombatRunNF {
			actions = "CombatRunBActions";
			file = "sbeh-135l.rtm";
			speed = -0.7;
		};
		class CombatRunRB: CombatRunNF {
			actions = "CombatRunBActions";
			file = "sbeh135l.rtm";
			speed = -0.7;
		};
		class CombatRunB: CombatRunNF {
			actions = "CombatRunBActions";
			file = "sbeh180L.rtm";
			speed = -0.7;
			soundEdge1 = 1;
			soundEdge2 = 0.5;
		};
		class CombatSprintF: Default {
			preload = 1;
			actions = "CombatRunFActions";
			looped = 1;
			file = "ssprint0.rtm";
			speed = -0.4;
			duty = 0.6;
			showWeaponAim = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1;
		};
		class CombatSprintLF: CombatSprintF {
			preload = 0;
			file = "ssprint-45l.rtm";
			speed = -0.45;
			duty = 0.6;
		};
		class CombatSprintRF: CombatSprintF {
			preload = 0;
			file = "ssprint45l.rtm";
			speed = -0.45;
			duty = 0.6;
		};
		class CombatTurnR: Default {
			actions = "CombatActions";
			file = "svpravo.rtm";
			speed = -1.8;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1;
		};
		class CombatTurnL: Default {
			actions = "CombatActions";
			file = "svlevo.rtm";
			speed = -1.8;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1;
		};
		class CombatTurnRRelaxed: CombatTurnR {
			file = "savaredoprava.rtm";
			speed = -2.6;
		};
		class CombatTurnLRelaxed: CombatTurnL {
			file = "savaredoleva.rtm";
			speed = -2.6;
		};
		class CombatWalkF: Default {
			actions = "CombatActions";
			file = "schuze0l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1;
		};
		class CombatWalkLF: CombatWalkF {
			file = "schuze-45l.rtm";
		};
		class CombatWalkRF: CombatWalkF {
			file = "schuze45l.rtm";
		};
		class CombatWalkL: CombatWalkF {
			file = "schuze-90l.rtm";
		};
		class CombatWalkR: CombatWalkF {
			file = "schuze90l.rtm";
		};
		class CombatWalkLB: CombatWalkF {
			file = "schuze-135l.rtm";
		};
		class CombatWalkRB: CombatWalkF {
			file = "schuze135l.rtm";
		};
		class CombatWalkB: CombatWalkF {
			file = "schuze180l.rtm";
		};
		class CrouchRunF: CombatRunF {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunF";
			interpolateTo[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunLF: CombatRunLF {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunLF";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunRF: CombatRunRF {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunRF";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunL: CombatRunL {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunL";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchRunR: CombatRunR {
			actions = "CrouchRunFActions";
			connectAs = "CombatRunR";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchRunLB: CombatRunLB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunLB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunRB: CombatRunRB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunRB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunB: CombatRunB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchWalkF: CombatWalkF {
			actions = "CrouchActions";
			connectAs = "CombatWalkF";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkLF: CombatWalkLF {
			actions = "CrouchActions";
			connectAs = "CombatWalkLF";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkRF: CombatWalkRF {
			actions = "CrouchActions";
			connectAs = "CombatWalkRF";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkL: CombatWalkL {
			actions = "CrouchActions";
			connectAs = "CombatWalkL";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkR: CombatWalkR {
			actions = "CrouchActions";
			connectAs = "CombatWalkR";
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkLB: CombatWalkLB {
			actions = "CrouchActions";
			connectAs = "CombatWalkLB";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkRB: CombatWalkRB {
			actions = "CrouchActions";
			connectAs = "CombatWalkRB";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchWalkB: CombatWalkB {
			actions = "CrouchActions";
			connectAs = "CombatWalkB";
			enableOptics = 0;
			interpolateWith[] = {"Crouch",1};
		};
		class CrouchSprintF: CombatSprintF {
			actions = "CrouchRunFActions";
			connectAs = "CombatSprintF";
			enableOptics = 0;
		};
		class CrouchSprintLF: CombatSprintLF {
			actions = "CrouchRunFActions";
			connectAs = "CombatSprintLF";
			enableOptics = 0;
		};
		class CrouchSprintRF: CombatSprintRF {
			actions = "CrouchRunFActions";
			connectAs = "CombatSprintRF";
			enableOptics = 0;
		};
		class CrouchTurnR: CombatTurnR {
			actions = "CrouchActions";
			connectAs = "CombatTurnR";
		};
		class CrouchTurnL: CombatTurnL {
			actions = "CrouchActions";
			connectAs = "CombatTurnL";
		};
		class CrouchToBinocCrouch: Default {
			actions = "CrouchActions";
			file = "klekdalekstart.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class BinocCrouch: Default {
			actions = "BinocCrouchActions";
			file = "klekdalekstat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"CrouchToBinocCrouch",1};
			connectTo[] = {"BinocCrouchToCrouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class BinocCrouchToCrouch: Default {
			actions = "CrouchActions";
			file = "klekdalekend.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"Crouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CivilBase: Default {
			aiming = "aimingNo";
			actions = "CivilActions";
			duty = -1;
			disableWapons = 1;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolationSpeed = 3;
		};
		class Civil: CivilBase {
			file = "civilstat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"Civil",0.2,"CivilStillV1",0.8};
			equivalentTo = "Civil";
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolateFrom[] = {"CombatThrowGrenadeEnd",1};
		};
		class CivilStillV1: Civil {
			actions = "CivilActions";
			file = "civilstani.rtm";
			speed = -10;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CivilWalkF: CivilBase {
			file = "civilchuze0l.rtm";
			speed = -1;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1;
		};
		class CivilWalkLF: CivilWalkF {
			file = "civilchuze-45l.rtm";
		};
		class CivilWalkRF: CivilWalkF {
			file = "civilchuze45l.rtm";
		};
		class CivilWalkL: CivilWalkF {
			file = "civilchuze90l.rtm";
		};
		class CivilWalkR: CivilWalkF {
			file = "civilchuze-90l.rtm";
		};
		class CivilWalkLB: CivilWalkF {
			file = "civilchuze-135l.rtm";
		};
		class CivilWalkRB: CivilWalkF {
			file = "civilchuze135l.rtm";
		};
		class CivilWalkB: CivilWalkF {
			file = "civilchuze180l.rtm";
		};
		class CivilRunF: CivilWalkF {
			actions = "CivilRunFActions";
			file = "civilbeh0l.rtm";
			speed = -0.55;
			looped = 1;
			duty = -0.5;
		};
		class CivilRunLF: CivilRunF {
			file = "civilbeh-45l.rtm";
		};
		class CivilRunRF: CivilRunF {
			file = "civilbeh45l.rtm";
		};
		class CivilRunL: CivilRunF {
			file = "civilbeh-90l.rtm";
		};
		class CivilRunR: CivilRunF {
			file = "civilbeh90l.rtm";
		};
		class CivilRunB: CivilRunF {
			actions = "CivilActions";
			file = "civilbeh180l.rtm";
		};
		class CivilRunLB: CivilRunB {
			file = "civilbeh-135l.rtm";
		};
		class CivilRunRB: CivilRunB {
			file = "civilbeh135l.rtm";
		};
		class CivilTurnR: CivilBase {
			actions = "CivilActions";
			file = "civildoprava.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1;
			duty = -1;
			interpolationSpeed = 5;
		};
		class CivilTurnL: CivilBase {
			actions = "CivilActions";
			file = "civildoleva.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1;
			duty = -1;
			interpolationSpeed = 5;
		};
		class CivilThrowGrenadeStart: Default {
			actions = "CivilActions";
			file = "civilgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilThrowGrenadeEnd: Default {
			actions = "CivilActions";
			file = "civilgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilRunThrowGrenadeStart: Default {
			actions = "CivilRunFActions";
			file = "behgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilRunThrowGrenadeEnd: Default {
			actions = "CivilRunFActions";
			file = "behgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilToCivilLying: Default {
			actions = "CivilLyingActions";
			file = "civil2leh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			interpolateTo[] = {"CivilLyingDying",1};
		};
		class CivilLyingToCivil: Default {
			actions = "CivilActions";
			file = "leh2civil.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			interpolateTo[] = {"CivilDying",1,"CivilDyingVer2",1};
		};
		class Lying: Default {
			preload = 1;
			actions = "LyingActions";
			file = "leh.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			visibleSize = 0.25;
			aimPrecision = 0.3;
			recoilSuffix = "fixed";
		};
		class LyingNoAim: Lying {
			preload = 0;
			limitGunMovement = 0;
			aiming = "aimingLying";
			legs = "legsNo";
		};
		class LyingStillV1: Lying {
			file = "polehavani.rtm";
			speed = -6.2;
		};
		class LyingTurnL: Lying {
			preload = 0;
			file = "plizenidoleva.rtm";
			speed = -4;
			duty = 0;
		};
		class LyingTurnR: Lying {
			preload = 0;
			file = "plizenidoprava.rtm";
			speed = -4;
			duty = 0;
		};
		class LyingReloadMagazine: LyingNoAim {
			preload = 1;
			actions = "LyingActions";
			file = "plizeninabij.rtm";
			speed = -2.4;
			disableWeapons = 1;
			looped = 0;
			interpolateTo[] = {"LyingDying",1};
		};
		class LyingThrowGrenadeStart: LyingNoAim {
			looped = 0;
			limitGunMovement = 1;
			file = "plazenigranat.rtm";
			speed = -1.8;
			disableWeapons = 1;
			duty = 0;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingThrowGrenadeEnd: LyingNoAim {
			looped = 0;
			limitGunMovement = 1;
			file = "plazenigranat2.rtm";
			speed = -2.3;
			disableWeapons = 1;
			duty = 0;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingCrawlF: LyingNoAim {
			preload = 1;
			actions = "CrawlingActions";
			file = "plazni0l.rtm";
			speed = -1;
			duty = 0;
			disableWeapons = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "crawl";
		};
		class LyingFastCrawlF: LyingCrawlF {
			actions = "CrawlingActions";
			file = "ultraplaz.rtm";
			speed = -0.8;
			disableWeapons = 1;
			duty = 0.6;
		};
		class LyingCrawlLF: LyingCrawlF {
			preload = 0;
			file = "plizeni-45l.rtm";
			speed = -1;
		};
		class LyingCrawlRF: LyingCrawlF {
			preload = 0;
			file = "plizeni45l.rtm";
			speed = -1;
		};
		class LyingCrawlL: LyingCrawlF {
			preload = 0;
			actions = "LyingActions";
			file = "plizeni-90l.rtm";
			speed = -1;
		};
		class LyingCrawlR: LyingCrawlL {
			preload = 0;
			file = "plizeni90l.rtm";
			speed = -1;
		};
		class LyingCrawlLB: LyingCrawlL {
			preload = 0;
			file = "plizeni-135l.rtm";
			speed = -1.1;
		};
		class LyingCrawlRB: LyingCrawlL {
			preload = 0;
			file = "plizeni135l.rtm";
			speed = -1.1;
		};
		class LyingCrawlB: LyingCrawlL {
			preload = 0;
			file = "plizeni180L.rtm";
			speed = -1.1;
		};
		class LyingDying: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "plazenismrt.rtm";
			speed = -1;
			onLandEnd = 1;
			looped = 0;
			soundEnabled = 0;
		};
		class CivilLying: Default {
			actions = "CivilLyingActions";
			file = "lehcivil.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			disableWapons = 1;
			disableWeaponsLong = 1;
			visibleSize = 0.25;
			aimPrecision = 0.3;
			recoilSuffix = "fixed";
		};
		class CivilLyingNoAim: CivilLying {
			limitGunMovement = 0;
			aiming = "aimingNo";
			legs = "legsNo";
		};
		class CivilLyingStillV1: CivilLying {
			file = "lehcivilvar.rtm";
			speed = -6.2;
		};
		class CivilLyingCrawlF: CivilLyingNoAim {
			actions = "CivilCrawlingActions";
			file = "plazni0l.rtm";
			speed = -1;
			duty = 0;
		};
		class CivilLyingFastCrawlF: CivilLyingCrawlF {
			actions = "CivilCrawlingActions";
			file = "ultraplaz.rtm";
			speed = -0.8;
			duty = 0.6;
		};
		class CivilLyingCrawlLF: CivilLyingCrawlF {
			file = "plizeni-45l.rtm";
			speed = -1;
		};
		class CivilLyingCrawlRF: CivilLyingCrawlF {
			file = "plizeni45l.rtm";
			speed = -1;
		};
		class CivilLyingCrawlL: CivilLyingCrawlF {
			actions = "CivilLyingActions";
			file = "plizeni-90l.rtm";
			speed = -1;
		};
		class CivilLyingCrawlR: CivilLyingCrawlL {
			file = "plizeni90l.rtm";
			speed = -1;
		};
		class CivilLyingCrawlLB: CivilLyingCrawlL {
			file = "plizeni-135l.rtm";
			speed = -1.1;
		};
		class CivilLyingCrawlRB: CivilLyingCrawlL {
			file = "plizeni135l.rtm";
			speed = -1.1;
		};
		class CivilLyingCrawlB: CivilLyingCrawlL {
			file = "plizeni180L.rtm";
			speed = -1.1;
		};
		class CivilLyingDying: DefaultDie {
			actions = "NoActions";
			file = "civillehsmrt.rtm";
			speed = -1;
			onLandEnd = 1;
			looped = 0;
			soundEnabled = 0;
		};
		class CivilLyingDead: CivilLyingDying {
			actions = "DeadActions";
			file = "civillehsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class WeaponDying: DefaultDie {
			actions = "NoActions";
			file = "atsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class WeaponDyingVer2: WeaponDying {
			file = "atsmrtB.rtm";
		};
		class WeaponDead: WeaponDying {
			actions = "DeadActions";
			file = "atsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"WeaponDead",0.5,"WeaponDeadVer2"};
			equivalentTo = "WeaponDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class WeaponDeadVer2: WeaponDead {
			file = "atsmrtB2.rtm";
		};
		class SitDownDying: DefaultDie {
			actions = "NoActions";
			file = "bezsedismrt.rtm";
			speed = -0.6;
			looped = 0;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class SitDownDead: SitDownDying {
			actions = "DeadActions";
			file = "bezsedismrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class StandDying: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "bezsmrt.rtm";
			speed = -2;
			looped = 0;
			onLandEnd = 1;
			interpolationSpeed = 5;
		};
		class StandDead: StandDying {
			actions = "DeadActions";
			file = "bezsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"StandDead",0.5,"StandDeadVer2"};
			equivalentTo = "StandDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class StandDyingVer2: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "bezsmrtB.rtm";
			speed = -2;
			looped = 0;
			onLandEnd = 1;
			interpolationSpeed = 5;
		};
		class StandDeadVer2: StandDead {
			actions = "DeadActions";
			file = "bezsmrtB2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class CivilDying: DefaultDie {
			actions = "NoActions";
			file = "civilsmrtb.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {};
			connectTo[] = {"CivilDead",1};
		};
		class CivilDead: CivilDying {
			actions = "DeadActions";
			file = "civilsmrtb2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CivilDead",0.5,"CivilDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CivilDead";
		};
		class CivilDyingVer2: CivilDying {
			file = "civilsmrt.rtm";
			connectTo[] = {"CivilDeadVer2",1};
		};
		class CivilDeadVer2: CivilDead {
			file = "civilsmrt2.rtm";
		};
		class CombatDying: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "ssmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDead",1};
		};
		class CombatDead: CombatDying {
			actions = "DeadActions";
			file = "ssmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"CombatDead",0.5,"CombatDeadVer3",0.2,"CombatDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatDead";
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatDyingVer2: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "ssmrtB.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDeadVer2",1};
		};
		class CombatDeadVer2: CombatDead {
			actions = "DeadActions";
			file = "ssmrtb2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatDyingVer3: DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "kulometsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDeadVer3",1};
		};
		class CombatDeadVer3: CombatDead {
			actions = "DeadActions";
			file = "kulometsmrt2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatRunDying: DefaultDie {
			actions = "NoActions";
			file = "sbehsmrt0b.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunF",1};
			connectTo[] = {"CombatRunDead",1};
		};
		class CombatRunDead: CombatRunDying {
			actions = "DeadActions";
			file = "sbehsmrt0b2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRunDead",0.75,"CombatRunDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatRunDead";
		};
		class CombatRunDyingVer2: DefaultDie {
			actions = "NoActions";
			file = "sbehsmrt0.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunF",1};
			connectTo[] = {"CombatRunDeadVer2",1};
		};
		class CombatRunDeadVer2: CombatRunDyingVer2 {
			actions = "DeadActions";
			file = "sbehsmrt02.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			equivalentTo = "CombatRunDead";
			variantAfter[] = {0,0,0};
		};
		class CombatRunBDying: DefaultDie {
			actions = "NoActions";
			file = "sbehsmrt180b.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunB",1};
			connectTo[] = {"CombatRunBDead",1};
		};
		class CombatRunBDead: CombatRunBDying {
			actions = "DeadActions";
			file = "sbehsmrt180b2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRunBDead",0.75,"CombatRunBDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatRunBDead";
		};
		class CombatRunBDyingVer2: CombatRunBDying {
			file = "sbehsmrt180.rtm";
			connectTo[] = {"CombatRunBDeadVer2",1};
		};
		class CombatRunBDeadVer2: CombatRunBDead {
			file = "sbehsmrt1802.rtm";
		};
		class CombatRelaxedDying: DefaultDie {
			actions = "NoActions";
			file = "kulometsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"CombatRelaxed",1};
			connectTo[] = {"CombatRelaxedDead",1};
		};
		class CombatRelaxedDead: DefaultDie {
			actions = "DeadActions";
			file = "kulometsmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
			variantAfter[] = {0,0,0};
		};
		class CombatRelaxedDyingVer2: DefaultDie {
			actions = "NoActions";
			file = "ssmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"CombatRelaxed",1};
			connectTo[] = {"CombatRelaxedDeadVer2",1};
		};
		class CombatRelaxedDeadVer2: DefaultDie {
			actions = "DeadActions";
			file = "ssmrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			equivalentTo = "CombatRelaxedDead";
			variantsPlayer[] = {"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
			variantAfter[] = {0,0,0};
		};
		class LyingDead: LyingDying {
			actions = "DeadActions";
			file = "plazenismrt2.rtm";
			speed = 1e+010;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class CargoDying: DefaultDie {
			actions = "NoActions";
			file = "Cargosmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
		};
		class CargoDead: CargoDying {
			actions = "DeadActions";
			file = "Cargosmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CargoDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CombatToWeapon: Default {
			actions = "WeaponActions";
			file = "stanidoAT.rtm";
			speed = -2.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class LyingToWeapon: Default {
			actions = "WeaponActions";
			file = "lehdoat.rtm";
			speed = "- 3.0";
			visibleSize = 0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToLying: Default {
			actions = "WeaponActions";
			file = "atdolehu.rtm";
			speed = -2.8;
			looped = 0;
			visibleSize = 0.7;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class Weapon: Default {
			actions = "WeaponActions";
			file = "atstat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			enableMissile = 1;
			duty = -1;
			visibleSize = 0.6;
			aimPrecision = 0.5;
			recoilSuffix = "halffixed";
		};
		class WeaponWalkF: Weapon {
			file = "at0l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkL: Weapon {
			file = "at-90l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkR: Weapon {
			file = "at90l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkB: Weapon {
			file = "at180l.rtm";
			speed = -0.9;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkLF: Weapon {
			file = "at-45l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkRF: Weapon {
			file = "at45l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkLB: Weapon {
			file = "at-135l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkRB: Weapon {
			file = "at135l.rtm";
			speed = -0.6;
			looped = 1;
			duty = -0.5;
		};
		class WeaponTurnL: Weapon {
			file = "atdoleva.rtm";
			speed = -1.5;
			looped = 1;
			duty = -0.5;
			soundEnabled = 0;
		};
		class WeaponTurnR: Weapon {
			file = "atdoprava.rtm";
			speed = -1.5;
			looped = 1;
			duty = -0.5;
			soundEnabled = 0;
		};
		class WeaponReloadAT: Weapon {
			file = "atnabij.rtm";
			speed = -4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToCombat: Default {
			actions = "WeaponActions";
			file = "ATdostani.rtm";
			speed = "- 1.5";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",2};
			connectTo[] = {"Combat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class HandGunStand: Default {
			access = 0;
		};
		class HandGunCrouch: Default {
			access = 0;
		};
		class HandGunLying: Default {
			access = 0;
		};
		class Driver: Default {
			actions = "CargoActions";
			file = "cargo.rtm";
			speed = 4294967271;
			looped = 1;
			soundEnabled = 0;
		};
		class Pilot: Driver {
			file = "cargo.rtm";
			speed = -1;
			looped = 1;
		};
		class Gunner: Driver {
			file = "cargo.rtm";
			speed = -10;
			looped = 1;
		};
		class Commander: Driver {
			file = "cargo.rtm";
			speed = -10;
			looped = 1;
		};
		class Cargo: Driver {
			actions = "CargoActions";
			file = "cargostat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CargoVer1",0.6,"CargoVer2",0.1,"CargoVer3",0.1,"CargoVer4",0.1,"CargoVer5",0.1,"Cargo"};
			equivalentTo = "Cargo";
			interpolationSpeed = 1;
		};
		class CargoVer1: Cargo {
			file = "cargosoft.rtm";
			speed = -3.8;
			looped = 1;
		};
		class CargoVer2: Cargo {
			file = "cargomenipusku.rtm";
			speed = -3.8;
			looped = 1;
		};
		class CargoVer3: Cargo {
			file = "cargopuska.rtm";
			speed = -4.2;
			looped = 1;
		};
		class CargoVer4: Cargo {
			file = "cargorozhlizise.rtm";
			speed = -3.2;
			looped = 1;
		};
		class CargoVer5: Cargo {
			file = "cargo.rtm";
			speed = -9.6;
			looped = 1;
		};
		class M113Gunner: Driver {
			file = "M113Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113GunnerV1",0.7,"M113Gunner"};
			interpolateWith[] = {"M113GunnerV1",0.5};
			equivalentTo = "M113Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"M113GunnerDying",1};
		};
		class M113GunnerV1: M113Gunner {
			file = "M113Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M113GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "M113Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M113Gunner",1};
		};
		class M113GunnerDead: M113GunnerDying {
			actions = "DeadActions";
			file = "M113Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M113GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M113Driver: Driver {
			file = "M113Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113DriverV1",0.7,"M113Driver"};
			interpolateWith[] = {"M113DriverV1",0.5};
			equivalentTo = "M113Driver";
			interpolationSpeed = 1;
		};
		class M113DriverV1: M113Driver {
			file = "M113Driver.rtm";
			speed = -4;
			looped = 1;
		};
		class M113DriverOut: Driver {
			file = "M113DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113DriverOutV1",0.7,"M113DriverOut"};
			interpolateWith[] = {"M113DriverOutV1",0.5};
			equivalentTo = "M113DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M113DriverOutDying",1};
		};
		class M113DriverOutV1: M113DriverOut {
			file = "M113DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M113DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "M113DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M113DriverOut",1};
		};
		class M113DriverOutDead: M113DriverOutDying {
			actions = "DeadActions";
			file = "M113DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M113DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M113Medic: Driver {
			file = "M113Medicstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M113MedicV1",0.7,"M113Medic"};
			interpolateWith[] = {"M113MedicV1",0.5};
			equivalentTo = "M113Medic";
			interpolationSpeed = 1;
		};
		class M113MedicV1: M113Medic {
			file = "M113Medic.rtm";
			speed = -4;
			looped = 1;
		};
		class Nemocnej: Driver {
			file = "Nemocnejstat.rtm";
			speed = 1e+010;
			looped = 1;
		};
		class M60Gunner: Driver {
			file = "M60Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60GunnerV1",0.7,"M60Gunner"};
			interpolateWith[] = {"M60GunnerV1",0.5};
			equivalentTo = "M60Gunner";
			interpolationSpeed = 1;
		};
		class M60GunnerV1: M60Gunner {
			file = "M60Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M60Driver: Driver {
			file = "M60Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60DriverV1",0.7,"M60Driver"};
			interpolateWith[] = {"M60DriverV1",0.5};
			equivalentTo = "M60Driver";
			interpolationSpeed = 1;
		};
		class M60DriverV1: M60Driver {
			file = "M60Driver.rtm";
			speed = -4;
			looped = 1;
		};
		class M60Commander: Driver {
			file = "M60Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60CommanderV1",0.7,"M60Commander"};
			interpolateWith[] = {"M60CommanderV1",0.5};
			equivalentTo = "M60Commander";
			interpolationSpeed = 1;
		};
		class M60CommanderV1: M60Commander {
			file = "M60Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class M60DriverOut: Driver {
			file = "M60DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60DriverOutV1",0.7,"M60DriverOut"};
			interpolateWith[] = {"M60DriverOutV1",0.5};
			equivalentTo = "M60DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M60DriverOutDying",1};
		};
		class M60DriverOutV1: M60DriverOut {
			file = "M60DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M60DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "M60DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M60DriverOut",1};
		};
		class M60DriverOutDead: M60DriverOutDying {
			actions = "DeadActions";
			file = "M60DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M60DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M60CommanderOut: Driver {
			file = "M60CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M60CommanderOutV1",0.7,"M60CommanderOut"};
			interpolateWith[] = {"M60CommanderOutV1",0.5};
			equivalentTo = "M60CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M60CommanderOutDying",1};
		};
		class M60CommanderOutV1: M60CommanderOut {
			file = "M60CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M60CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "M60CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M60CommanderOut",1};
		};
		class M60CommanderOutDead: M60CommanderOutDying {
			actions = "DeadActions";
			file = "M60CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M60CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M1A1Commander: Driver {
			file = "M1A1Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1CommanderV1",0.7,"M1A1Commander"};
			interpolateWith[] = {"M1A1CommanderV1",0.5};
			equivalentTo = "M1A1Commander";
			interpolationSpeed = 1;
		};
		class M1A1CommanderV1: M1A1Commander {
			file = "M1A1Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1Gunner: Driver {
			file = "M1A1Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1GunnerV1",0.7,"M1A1Gunner"};
			interpolateWith[] = {"M1A1GunnerV1",0.5};
			equivalentTo = "M1A1Gunner";
			interpolationSpeed = 1;
		};
		class M1A1GunnerV1: M1A1Gunner {
			file = "M1A1Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1Driver: Driver {
			file = "M1A1Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
		};
		class M1A1DriverOut: Driver {
			file = "M1A1DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1DriverOutV1",0.7,"M1A1DriverOut"};
			interpolateWith[] = {"M1A1DriverOutV1",0.5};
			equivalentTo = "M1A1DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M1A1DriverOutDying",1};
		};
		class M1A1DriverOutV1: M1A1DriverOut {
			file = "M1A1DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "M1A1DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M1A1DriverOut",1};
		};
		class M1A1DriverOutDead: M1A1DriverOutDying {
			actions = "DeadActions";
			file = "M1A1DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M1A1DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M1A1CommanderOut: Driver {
			file = "M1A1CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M1A1CommanderOutV1",0.7,"M1A1CommanderOut"};
			interpolateWith[] = {"M1A1CommanderOutV1",0.5};
			equivalentTo = "M1A1CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M1A1CommanderOutDying",1};
		};
		class M1A1CommanderOutV1: M1A1CommanderOut {
			file = "M1A1CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "M1A1CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M1A1CommanderOut",1};
		};
		class M1A1CommanderOutDead: M1A1CommanderOutDying {
			actions = "DeadActions";
			file = "M1A1CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M1A1CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPGunner: Driver {
			file = "BMPGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPGunnerV1",0.7,"BMPGunner"};
			interpolateWith[] = {"BMPGunnerV1",0.5};
			equivalentTo = "BMPGunner";
			interpolationSpeed = 1;
		};
		class BMPGunnerV1: BMPGunner {
			file = "BMPGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPDriver: Driver {
			file = "BMPDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPDriverV1",0.7,"BMPDriver"};
			interpolateWith[] = {"BMPDriverV1",0.5};
			equivalentTo = "BMPDriver";
			interpolationSpeed = 1;
		};
		class BMPDriverV1: BMPDriver {
			file = "BMPDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPCommander: Driver {
			file = "BMPCommanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPCommanderV1",0.7,"BMPCommander"};
			interpolateWith[] = {"BMPCommanderV1",0.5};
			equivalentTo = "BMPCommander";
			interpolationSpeed = 1;
		};
		class BMPCommanderV1: BMPCommander {
			file = "BMPCommander.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPGunnerOut: Driver {
			file = "BMPGunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPGunnerOutV1",0.7,"BMPGunnerOut"};
			interpolateWith[] = {"BMPGunnerOutV1",0.5};
			equivalentTo = "BMPGunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPGunnerOutDying",1};
		};
		class BMPGunnerOutV1: BMPGunnerOut {
			file = "BMPGunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPGunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "BMPGunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPGunnerOut",1};
		};
		class BMPGunnerOutDead: BMPGunnerOutDying {
			actions = "DeadActions";
			file = "BMPGunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"BMPGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPDriverOut: Driver {
			file = "BMPDriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPDriverOutV1",0.7,"BMPDriverOut"};
			interpolateWith[] = {"BMPDriverOutV1",0.5};
			equivalentTo = "BMPDriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPDriverOutDying",1};
		};
		class BMPDriverOutV1: BMPDriverOut {
			file = "BMPDriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPDriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "BMPDriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPDriverOut",1};
		};
		class BMPDriverOutDead: BMPDriverOutDying {
			actions = "DeadActions";
			file = "BMPDriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"BMPDriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPCommanderOut: Driver {
			file = "BMPCommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"BMPCommanderOutV1",0.7,"BMPCommanderOut"};
			interpolateWith[] = {"BMPCommanderOutV1",0.5};
			equivalentTo = "BMPCommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPCommanderOutDying",1};
		};
		class BMPCommanderOutV1: BMPCommanderOut {
			file = "BMPCommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "BMPCommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPCommanderOut",1};
		};
		class BMPCommanderOutDead: BMPCommanderOutDying {
			actions = "DeadActions";
			file = "BMPCommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"BMPCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72Gunner: Driver {
			file = "T72Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72GunnerV1",0.7,"T72Gunner"};
			interpolateWith[] = {"T72GunnerV1",0.5};
			equivalentTo = "T72Gunner";
			interpolationSpeed = 1;
		};
		class T72GunnerV1: T72Gunner {
			file = "T72Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class T72Driver: Driver {
			file = "T72Driverstat.rtm";
			speed = 1e+010;
			looped = 1;
		};
		class T72Commander: Driver {
			file = "T72Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72CommanderV1",0.7,"T72Commander"};
			interpolateWith[] = {"T72CommanderV1",0.5};
			equivalentTo = "T72Commander";
			interpolationSpeed = 1;
		};
		class T72CommanderV1: T72Commander {
			file = "T72Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class T72DriverOut: Driver {
			file = "T72DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72DriverOutV1",0.7,"T72DriverOut"};
			interpolateWith[] = {"T72DriverOutV1",0.5};
			equivalentTo = "T72DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72DriverOutDying",1};
		};
		class T72DriverOutV1: T72DriverOut {
			file = "T72DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "T72DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72DriverOut",1};
		};
		class T72DriverOutDead: T72DriverOutDying {
			actions = "DeadActions";
			file = "T72DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T72DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72GunnerOut: Driver {
			file = "T72GunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72GunnerOutV1",0.7,"T72GunnerOut"};
			interpolateWith[] = {"T72GunnerOutV1",0.5};
			equivalentTo = "T72GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72GunnerOutDying",1};
		};
		class T72GunnerOutV1: T72GunnerOut {
			file = "T72GunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72GunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "T72GunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72GunnerOut",1};
		};
		class T72GunnerOutDead: T72GunnerOutDying {
			actions = "DeadActions";
			file = "T72GunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T72GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72CommanderOut: Driver {
			file = "T72CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T72CommanderOutV1",0.7,"T72CommanderOut"};
			interpolateWith[] = {"T72CommanderOutV1",0.5};
			equivalentTo = "T72CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72CommanderOutDying",1};
		};
		class T72CommanderOutV1: T72CommanderOut {
			file = "T72CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "T72CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72CommanderOut",1};
		};
		class T72CommanderOutDead: T72CommanderOutDying {
			actions = "DeadActions";
			file = "T72CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T72CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T80GunnerOut: Driver {
			file = "T80GunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T80GunnerOutV1",0.7,"T80GunnerOut"};
			interpolateWith[] = {"T80GunnerOutV1",0.5};
			equivalentTo = "T80GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"T80GunnerOutDying",1};
		};
		class T80GunnerOutV1: T80GunnerOut {
			file = "T80GunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T80GunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "T80GunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T80GunnerOut",1};
		};
		class T80GunnerOutDead: T80GunnerOutDying {
			actions = "DeadActions";
			file = "T80GunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T80GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T80CommanderOut: Driver {
			file = "T80CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T80CommanderOutV1",0.7,"T80CommanderOut"};
			interpolateWith[] = {"T80CommanderOutV1",0.5};
			equivalentTo = "T80CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T80CommanderOutDying",1};
		};
		class T80CommanderOutV1: T80CommanderOut {
			file = "T80CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T80CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "T80CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T80CommanderOut",1};
		};
		class T80CommanderOutDead: T80CommanderOutDying {
			actions = "DeadActions";
			file = "T80CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T80CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T55Gunner: Driver {
			file = "T55Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55GunnerV1",0.7,"T55Gunner"};
			interpolateWith[] = {"T55GunnerV1",0.5};
			equivalentTo = "T55Gunner";
			interpolationSpeed = 1;
		};
		class T55GunnerV1: T55Gunner {
			file = "T55Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class T55Commander: Driver {
			file = "T55Commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55CommanderV1",0.7,"T55Commander"};
			interpolateWith[] = {"T55CommanderV1",0.5};
			equivalentTo = "T55Commander";
			interpolationSpeed = 1;
		};
		class T55CommanderV1: T55Commander {
			file = "T55Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class T55DriverOut: Driver {
			file = "T55DriverOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55DriverOutV1",0.7,"T55DriverOut"};
			interpolateWith[] = {"T55DriverOutV1",0.5};
			equivalentTo = "T55DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"T55DriverOutDying",1};
		};
		class T55DriverOutV1: T55DriverOut {
			file = "T55DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T55DriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "T55DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T55DriverOut",1};
		};
		class T55DriverOutDead: T55DriverOutDying {
			actions = "DeadActions";
			file = "T55DriverOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T55DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T55CommanderOut: Driver {
			file = "T55CommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"T55CommanderOutV1",0.7,"T55CommanderOut"};
			interpolateWith[] = {"T55CommanderOutV1",0.5};
			equivalentTo = "T55CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T55CommanderOutDying",1};
		};
		class T55CommanderOutV1: T55CommanderOut {
			file = "T55CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T55CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "T55CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T55CommanderOut",1};
		};
		class T55CommanderOutDead: T55CommanderOutDying {
			actions = "DeadActions";
			file = "T55CommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"T55CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUGunner: Driver {
			file = "ZSUGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUGunnerV1",0.7,"ZSUGunner"};
			interpolateWith[] = {"ZSUGunnerV1",0.5};
			equivalentTo = "ZSUGunner";
			interpolationSpeed = 1;
		};
		class ZSUGunnerV1: ZSUGunner {
			file = "ZSUGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUDriver: Driver {
			file = "ZSUDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUDriverV1",0.7,"ZSUDriver"};
			interpolateWith[] = {"ZSUDriverV1",0.5};
			equivalentTo = "ZSUDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUDriverDying",1};
		};
		class ZSUDriverV1: ZSUDriver {
			file = "ZSUDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUDriverDying: DefaultDie {
			actions = "NoActions";
			file = "ZSUDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUDriver",1};
		};
		class ZSUDriverDead: ZSUDriverDying {
			actions = "DeadActions";
			file = "ZSUDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ZSUDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUCommander: Driver {
			file = "ZSUCommanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUCommanderV1",0.7,"ZSUCommander"};
			interpolateWith[] = {"ZSUCommanderV1",0.5};
			equivalentTo = "ZSUCommander";
			interpolationSpeed = 1;
		};
		class ZSUCommanderV1: ZSUCommander {
			file = "ZSUCommander.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUGunnerOut: Driver {
			file = "ZSUGunnerOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUGunnerOutV1",0.7,"ZSUGunnerOut"};
			interpolateWith[] = {"ZSUGunnerOutV1",0.5};
			equivalentTo = "ZSUGunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUGunnerOutDying",1};
		};
		class ZSUGunnerOutV1: ZSUGunnerOut {
			file = "ZSUGunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUGunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "ZSUGunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUGunnerOut",1};
		};
		class ZSUGunnerOutDead: ZSUGunnerOutDying {
			actions = "DeadActions";
			file = "ZSUGunnerOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ZSUGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUCommanderOut: Driver {
			file = "ZSUCommanderOutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ZSUCommanderOutV1",0.7,"ZSUCommanderOut"};
			interpolateWith[] = {"ZSUCommanderOutV1",0.5};
			equivalentTo = "ZSUCommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUCommanderOutDying",1};
		};
		class ZSUCommanderOutV1: ZSUCommanderOut {
			file = "ZSUCommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "ZSUCommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUCommanderOut",1};
		};
		class ZSUCommanderOutDead: ZSUCommanderOutDying {
			actions = "DeadActions";
			file = "ZSUCommanderOutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ZSUCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UH60Pilot: Driver {
			file = "UH60Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UH60PilotV1",0.7,"UH60Pilot"};
			interpolateWith[] = {"UH60PilotV1",0.5};
			equivalentTo = "UH60Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"UH60PilotDying",1};
		};
		class UH60PilotV1: UH60Pilot {
			file = "UH60Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class UH60PilotDying: DefaultDie {
			actions = "NoActions";
			file = "UH60Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UH60Pilot",1};
		};
		class UH60PilotDead: UH60PilotDying {
			actions = "DeadActions";
			file = "UH60Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UH60PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UH60Gunner: Driver {
			file = "UH60Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UH60GunnerV1",0.7,"UH60Gunner"};
			interpolateWith[] = {"UH60GunnerV1",0.5};
			equivalentTo = "UH60Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"UH60GunnerDying",1};
		};
		class UH60GunnerV1: UH60Gunner {
			file = "UH60Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class UH60GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "UH60Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UH60Gunner",1};
		};
		class UH60GunnerDead: UH60GunnerDying {
			actions = "DeadActions";
			file = "UH60Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UH60GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class AH1Pilot: Driver {
			file = "AH1Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"AH1PilotV1",0.7,"AH1Pilot"};
			interpolateWith[] = {"AH1PilotV1",0.5};
			equivalentTo = "AH1Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"AH1PilotDying",1};
		};
		class AH1PilotV1: AH1Pilot {
			file = "AH1Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class AH1PilotDying: DefaultDie {
			actions = "NoActions";
			file = "AH1Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"AH1Pilot",1};
		};
		class AH1PilotDead: AH1PilotDying {
			actions = "DeadActions";
			file = "AH1Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"AH1PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class AH1Gunner: Driver {
			file = "AH1Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"AH1GunnerV1",0.7,"AH1Gunner"};
			interpolateWith[] = {"AH1GunnerV1",0.5};
			equivalentTo = "AH1Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"AH1GunnerDying",1};
		};
		class AH1GunnerV1: AH1Gunner {
			file = "AH1Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class AH1GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "AH1Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"AH1Gunner",1};
		};
		class AH1GunnerDead: AH1GunnerDying {
			actions = "DeadActions";
			file = "AH1Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"AH1GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class A10Pilot: Driver {
			file = "A10Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"A10PilotV1",0.7,"A10Pilot"};
			interpolateWith[] = {"A10PilotV1",0.5};
			equivalentTo = "A10Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"A10PilotDying",1};
		};
		class A10PilotV1: A10Pilot {
			file = "A10Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class A10PilotDying: DefaultDie {
			actions = "NoActions";
			file = "A10Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"A10Pilot",1};
		};
		class A10PilotDead: A10PilotDying {
			actions = "DeadActions";
			file = "A10Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"A10PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CesnaPilot: Driver {
			file = "CesnaPilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CesnaPilotV1",0.7,"CesnaPilot"};
			interpolateWith[] = {"CesnaPilotV1",0.5};
			equivalentTo = "CesnaPilot";
			interpolationSpeed = 1;
			connectTo[] = {"CesnaPilotDying",1};
		};
		class CesnaPilotV1: CesnaPilot {
			file = "CesnaPilot.rtm";
			speed = -4;
			looped = 1;
		};
		class CesnaPilotDying: DefaultDie {
			actions = "NoActions";
			file = "CesnaPilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CesnaPilot",1};
		};
		class CesnaPilotDead: CesnaPilotDying {
			actions = "DeadActions";
			file = "CesnaPilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CesnaPilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CesnaCargo: Driver {
			file = "CesnaCargostat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CesnaCargoV1",0.7,"CesnaCargo"};
			interpolateWith[] = {"CesnaCargoV1",0.5};
			equivalentTo = "CesnaCargo";
			interpolationSpeed = 1;
			connectTo[] = {"CesnaCargoDying",1};
		};
		class CesnaCargoV1: CesnaCargo {
			file = "CesnaCargo.rtm";
			speed = -4;
			looped = 1;
		};
		class CesnaCargoDying: DefaultDie {
			actions = "NoActions";
			file = "CesnaCargosmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CesnaCargo",1};
		};
		class CesnaCargoDead: CesnaCargoDying {
			actions = "DeadActions";
			file = "CesnaCargosmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CesnaCargoDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi17Pilot: Driver {
			file = "Mi17Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"Mi17PilotV1",0.7,"Mi17Pilot"};
			interpolateWith[] = {"Mi17PilotV1",0.5};
			equivalentTo = "Mi17Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"Mi17PilotDying",1};
		};
		class Mi17PilotV1: Mi17Pilot {
			file = "Mi17Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi17PilotDying: DefaultDie {
			actions = "NoActions";
			file = "Mi17Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi17Pilot",1};
		};
		class Mi17PilotDead: Mi17PilotDying {
			actions = "DeadActions";
			file = "Mi17Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"Mi17PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi24Pilot: Driver {
			file = "Mi24Pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"Mi24PilotV1",0.7,"Mi24Pilot"};
			interpolateWith[] = {"Mi24PilotV1",0.5};
			equivalentTo = "Mi24Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"Mi24PilotDying",1};
		};
		class Mi24PilotV1: Mi24Pilot {
			file = "Mi24Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi24PilotDying: DefaultDie {
			actions = "NoActions";
			file = "Mi24Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi24Pilot",1};
		};
		class Mi24PilotDead: Mi24PilotDying {
			actions = "DeadActions";
			file = "Mi24Pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"Mi24PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi24Gunner: Driver {
			file = "Mi24Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"Mi24GunnerV1",0.7,"Mi24Gunner"};
			interpolateWith[] = {"Mi24GunnerV1",0.5};
			equivalentTo = "Mi24Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"Mi24GunnerDying",1};
		};
		class Mi24GunnerV1: Mi24Gunner {
			file = "Mi24Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi24GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "Mi24Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi24Gunner",1};
		};
		class Mi24GunnerDead: Mi24GunnerDying {
			actions = "DeadActions";
			file = "Mi24Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"Mi24GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class 5TDriver: Driver {
			file = "5TDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"5TDriverV1",0.7,"5TDriver"};
			interpolateWith[] = {"5TDriverV1",0.5};
			equivalentTo = "5TDriver";
			interpolationSpeed = 1;
			connectTo[] = {"5TDriverDying",1};
		};
		class 5TDriverV1: 5TDriver {
			file = "5TDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class 5TDriverDying: DefaultDie {
			actions = "NoActions";
			file = "5TDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"5TDriver",1};
		};
		class 5TDriverDead: 5TDriverDying {
			actions = "DeadActions";
			file = "5TDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"5TDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class 5TCoDriver: Driver {
			file = "5TCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"5TCoDriverV1",0.7,"5TCoDriver"};
			interpolateWith[] = {"5TCoDriverV1",0.5};
			equivalentTo = "5TCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"5TCoDriverDying",1};
		};
		class 5TCoDriverV1: 5TCoDriver {
			file = "5TCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class 5TCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "5TCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"5TCoDriver",1};
		};
		class 5TCoDriverDead: 5TCoDriverDying {
			actions = "DeadActions";
			file = "5TCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"5TCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UralDriver: Driver {
			file = "UralDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UralDriverV1",0.7,"UralDriver"};
			interpolateWith[] = {"UralDriverV1",0.5};
			equivalentTo = "UralDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UralDriverDying",1};
		};
		class UralDriverV1: UralDriver {
			file = "UralDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UralDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UralDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UralDriver",1};
		};
		class UralDriverDead: UralDriverDying {
			actions = "DeadActions";
			file = "UralDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UralDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UralCoDriver: Driver {
			file = "UralCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UralCoDriverV1",0.7,"UralCoDriver"};
			interpolateWith[] = {"UralCoDriverV1",0.5};
			equivalentTo = "UralCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UralCoDriverDying",1};
		};
		class UralCoDriverV1: UralCoDriver {
			file = "UralCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UralCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UralCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UralCoDriver",1};
		};
		class UralCoDriverDead: UralCoDriverDying {
			actions = "DeadActions";
			file = "UralCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UralCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class V3SDriver: Driver {
			file = "V3SDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"V3SDriverV1",0.7,"V3SDriver"};
			interpolateWith[] = {"V3SDriverV1",0.5};
			equivalentTo = "V3SDriver";
			interpolationSpeed = 1;
			connectTo[] = {"V3SDriverDying",1};
		};
		class V3SDriverV1: V3SDriver {
			file = "V3SDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class V3SDriverDying: DefaultDie {
			actions = "NoActions";
			file = "V3SDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"V3SDriver",1};
		};
		class V3SDriverDead: V3SDriverDying {
			actions = "DeadActions";
			file = "V3SDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"V3SDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class V3SCoDriver: Driver {
			file = "V3SCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"V3SCoDriverV1",0.7,"V3SCoDriver"};
			interpolateWith[] = {"V3SCoDriverV1",0.5};
			equivalentTo = "V3SCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"V3SCoDriverDying",1};
		};
		class V3SCoDriverV1: V3SCoDriver {
			file = "V3SCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class V3SCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "V3SCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"V3SCoDriver",1};
		};
		class V3SCoDriverDead: V3SCoDriverDying {
			actions = "DeadActions";
			file = "V3SCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"V3SCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepDriver: Driver {
			file = "JeepDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepDriverV1",0.7,"JeepDriver"};
			interpolateWith[] = {"JeepDriverV1",0.5};
			equivalentTo = "JeepDriver";
			interpolationSpeed = 1;
			connectTo[] = {"JeepDriverDying",1};
		};
		class JeepDriverV1: JeepDriver {
			file = "JeepDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepDriverDying: DefaultDie {
			actions = "NoActions";
			file = "JeepDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepDriver",1};
		};
		class JeepDriverDead: JeepDriverDying {
			actions = "DeadActions";
			file = "JeepDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepGunner: Driver {
			file = "JeepGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepGunnerV1",0.7,"JeepGunner"};
			interpolateWith[] = {"JeepGunnerV1",0.5};
			equivalentTo = "JeepGunner";
			interpolationSpeed = 1;
			connectTo[] = {"JeepGunnerDying",1};
		};
		class JeepGunnerV1: JeepGunner {
			file = "JeepGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "JeepGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepGunner",1};
		};
		class JeepGunnerDead: JeepGunnerDying {
			actions = "DeadActions";
			file = "JeepGunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepCoDriver: Driver {
			file = "JeepCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepCoDriverV1",0.7,"JeepCoDriver"};
			interpolateWith[] = {"JeepCoDriverV1",0.5};
			equivalentTo = "JeepCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"JeepCoDriverDying",1};
		};
		class JeepCoDriverV1: JeepCoDriver {
			file = "JeepCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "JeepCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepCoDriver",1};
		};
		class JeepCoDriverDead: JeepCoDriverDying {
			actions = "DeadActions";
			file = "JeepCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepCoDriverBack: Driver {
			file = "JeepCoDriverBackstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"JeepCoDriverBackV1",0.7,"JeepCoDriverBack"};
			interpolateWith[] = {"JeepCoDriverBackV1",0.5};
			equivalentTo = "JeepCoDriverBack";
			interpolationSpeed = 1;
			connectTo[] = {"JeepCoDriverBackDying",1};
		};
		class JeepCoDriverBackV1: JeepCoDriverBack {
			file = "JeepCoDriverBack.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepCoDriverBackDying: DefaultDie {
			actions = "NoActions";
			file = "JeepCoDriverBacksmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepCoDriverBack",1};
		};
		class JeepCoDriverBackDead: JeepCoDriverBackDying {
			actions = "DeadActions";
			file = "JeepCoDriverBacksmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"JeepCoDriverBackDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UazDriver: Driver {
			file = "UazDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UazDriverV1",0.7,"UazDriver"};
			interpolateWith[] = {"UazDriverV1",0.5};
			equivalentTo = "UazDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UazDriverDying",1};
		};
		class UazDriverV1: UazDriver {
			file = "UazDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UazDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UazDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UazDriver",1};
		};
		class UazDriverDead: UazDriverDying {
			actions = "DeadActions";
			file = "UazDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UazDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UazCoDriver: Driver {
			file = "UazCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"UazCoDriverV1",0.7,"UazCoDriver"};
			interpolateWith[] = {"UazCoDriverV1",0.5};
			equivalentTo = "UazCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UazCoDriverDying",1};
		};
		class UazCoDriverV1: UazCoDriver {
			file = "UazCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UazCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "UazCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UazCoDriver",1};
		};
		class UazCoDriverDead: UazCoDriverDying {
			actions = "DeadActions";
			file = "UazCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"UazCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaDriver: Driver {
			file = "SkodaDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"SkodaDriverV1",0.7,"SkodaDriver"};
			interpolateWith[] = {"SkodaDriverV1",0.5};
			equivalentTo = "SkodaDriver";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaDriverDying",1};
		};
		class SkodaDriverV1: SkodaDriver {
			file = "SkodaDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaDriverDying: DefaultDie {
			actions = "NoActions";
			file = "SkodaDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaDriver",1};
		};
		class SkodaDriverDead: SkodaDriverDying {
			actions = "DeadActions";
			file = "SkodaDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"SkodaDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaCoDriver: Driver {
			file = "SkodaCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"SkodaCoDriverV1",0.7,"SkodaCoDriver"};
			interpolateWith[] = {"SkodaCoDriverV1",0.5};
			equivalentTo = "SkodaCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaCoDriverDying",1};
		};
		class SkodaCoDriverV1: SkodaCoDriver {
			file = "SkodaCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "SkodaCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaCoDriver",1};
		};
		class SkodaCoDriverDead: SkodaCoDriverDying {
			actions = "DeadActions";
			file = "SkodaCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"SkodaCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaCoDriverBack: Driver {
			file = "SkodaCoDriverBackstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"SkodaCoDriverBackV1",0.7,"SkodaCoDriverBack"};
			interpolateWith[] = {"SkodaCoDriverBackV1",0.5};
			equivalentTo = "SkodaCoDriverBack";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaCoDriverBackDying",1};
		};
		class SkodaCoDriverBackV1: SkodaCoDriverBack {
			file = "SkodaCoDriverBack.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaCoDriverBackDying: DefaultDie {
			actions = "NoActions";
			file = "SkodaCoDriverBacksmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaCoDriverBack",1};
		};
		class SkodaCoDriverBackDead: SkodaCoDriverBackDying {
			actions = "DeadActions";
			file = "SkodaCoDriverBacksmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"SkodaCoDriverBackDying",1};
			connectTo[] = {"DeadState",1};
		};
		class PBRDriver: Driver {
			file = "PBRDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"PBRDriverV1",0.7,"PBRDriver"};
			interpolateWith[] = {"PBRDriverV1",0.5};
			equivalentTo = "PBRDriver";
			interpolationSpeed = 1;
			connectTo[] = {"PBRDriverDying",1};
		};
		class PBRDriverV1: PBRDriver {
			file = "PBRDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class PBRDriverDying: DefaultDie {
			actions = "NoActions";
			file = "PBRDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"PBRDriver",1};
		};
		class PBRDriverDead: PBRDriverDying {
			actions = "DeadActions";
			file = "PBRDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"PBRDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class PBRGunner: Driver {
			file = "PBRGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"PBRGunnerV1",0.7,"PBRGunner"};
			interpolateWith[] = {"PBRGunnerV1",0.5};
			equivalentTo = "PBRGunner";
			interpolationSpeed = 1;
			connectTo[] = {"PBRGunnerDying",1};
		};
		class PBRGunnerV1: PBRGunner {
			file = "PBRGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class PBRGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "PBRGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"PBRGunner",1};
		};
		class PBRGunnerDead: PBRGunnerDying {
			actions = "DeadActions";
			file = "PBRGunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"PBRGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M2Gunner: Driver {
			file = "M2Gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2GunnerV1",0.7,"M2Gunner"};
			interpolateWith[] = {"M2GunnerV1",0.5};
			equivalentTo = "M2Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"M2GunnerDying",1};
		};
		class M2GunnerV1: M2Gunner {
			file = "M2Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M2GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "M2Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M2Gunner",1};
		};
		class M2GunnerDead: M2GunnerDying {
			actions = "DeadActions";
			file = "M2Gunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M2GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class HRLGunner: Driver {
			file = "HRLGunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"HRLGunnerV1",0.7,"HRLGunner"};
			interpolateWith[] = {"HRLGunnerV1",0.5};
			equivalentTo = "HRLGunner";
			interpolationSpeed = 1;
			connectTo[] = {"HRLGunnerDying",1};
		};
		class HRLGunnerV1: HRLGunner {
			file = "HRLGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class HRLGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "HRLGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HRLGunner",1};
		};
		class HRLGunnerDead: HRLGunnerDying {
			actions = "DeadActions";
			file = "HRLGunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"HRLGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ScudDriver: Driver {
			file = "ScudDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ScudDriverV1",0.7,"ScudDriver"};
			interpolateWith[] = {"ScudDriverV1",0.5};
			equivalentTo = "ScudDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ScudDriverDying",1};
		};
		class ScudDriverV1: ScudDriver {
			file = "ScudDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ScudDriverDying: DefaultDie {
			actions = "NoActions";
			file = "ScudDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ScudDriver",1};
		};
		class ScudDriverDead: ScudDriverDying {
			actions = "DeadActions";
			file = "ScudDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ScudDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ScudCoDriver: Driver {
			file = "ScudCoDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ScudCoDriverV1",0.7,"ScudCoDriver"};
			interpolateWith[] = {"ScudCoDriverV1",0.5};
			equivalentTo = "ScudCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ScudCoDriverDying",1};
		};
		class ScudCoDriverV1: ScudCoDriver {
			file = "ScudCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ScudCoDriverDying: DefaultDie {
			actions = "NoActions";
			file = "ScudCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ScudCoDriver",1};
		};
		class ScudCoDriverDead: ScudCoDriverDying {
			actions = "DeadActions";
			file = "ScudCoDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ScudCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class TractorDriver: Driver {
			file = "traktordriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"TractorDriverV1",0.7,"TractorDriver"};
			interpolateWith[] = {"TractorDriverV1",0.5};
			equivalentTo = "TractorDriver";
			interpolationSpeed = 1;
			connectTo[] = {"TractorDriverDying",1};
		};
		class TractorDriverV1: TractorDriver {
			file = "traktordriver.rtm";
			speed = -4;
			looped = 1;
		};
		class TractorDriverDying: DefaultDie {
			actions = "NoActions";
			file = "traktordriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"TractorDriver",1};
		};
		class TractorDriverDead: TractorDriverDying {
			actions = "DeadActions";
			file = "traktordriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"TractorDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Para: Driver {
			file = "Parastat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"ParaV1",0.7,"Para"};
			interpolateWith[] = {"ParaV1",0.5};
			equivalentTo = "Para";
			interpolationSpeed = 1;
			connectTo[] = {"ParaDying",1};
		};
		class ParaV1: Para {
			file = "Para.rtm";
			speed = -4;
			looped = 1;
		};
		class ParaDying: DefaultDie {
			actions = "NoActions";
			file = "Parasmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Para",1};
		};
		class ParaDead: ParaDying {
			actions = "DeadActions";
			file = "Parasmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"ParaDying",1};
			connectTo[] = {"DeadState",1};
		};
		class StandTurnR: StandBase {
			actions = "StandActions";
			file = "dopravabez.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1;
			duty = -1;
			interpolationSpeed = 5;
		};
		class StandTurnL: StandBase {
			actions = "StandActions";
			file = "dolevabez.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1;
			duty = -1;
			interpolationSpeed = 5;
		};
		class StandStrokeFist: Default {
			actions = "StandActions";
			file = "bezuder.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			connectFrom[] = {"Stand",1};
			connectTo[] = {"StandStrokeFistEnd",1};
		};
		class StandStrokeFistEnd: Default {
			actions = "StandActions";
			file = "bezstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			connectTo[] = {"Stand",1};
		};
		class OnChair: StandBase {
			actions = "NoActions";
			file = "zidle.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
		};
		class EffectStand: StandBase {
			actions = "StandStandActions";
			file = "bezstanistill.rtm";
			speed = -8.8;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class EffectStandStill: StandBase {
			actions = "StandStillActions";
			file = "bezstanistat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			equivalentTo = "EffectStandStill";
			interpolationSpeed = 1;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class EffectStandTalk: StandBase {
			actions = "StandTalkActions";
			file = "bezpovidani.rtm";
			speed = -14;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
		};
		class EffectStandSaluteStart: StandBase {
			actions = "StandSaluteActions";
			file = "bezhlas.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Stand",2};
		};
		class EffectStandSalute: StandBase {
			actions = "StandSaluteActions";
			file = "bezhlasstat.rtm";
			speed = 1e+010;
			looped = 1;
			soundEnabled = 0;
			connectFrom[] = {"EffectStandSaluteStart",1};
			connectTo[] = {"EffectStandSaluteEnd",1};
		};
		class EffectStandSaluteEnd: StandBase {
			actions = "StandActions";
			file = "bezhlas2.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectTo[] = {"Stand",2};
		};
		class EffectStandmove: StandBase {
			actions = "StandStillActions";
			file = "bezstani.rtm";
			speed = -8.8;
			looped = 1;
			soundEnabled = 0;
			equivalentTo = "EffectStandStill";
			interpolationSpeed = 1;
		};
		class EffectStandSitDown: StandBase {
			actions = "SitActions";
			file = "bezsedi2.rtm";
			speed = -4;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {"EffectStandSitDown",0.3,"EffectStandSitDownVer2",0.3,"EffectStandSitDownVer1"};
			equivalentTo = "EffectStandSitDown";
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownVer1: EffectStandSitDown {
			file = "bezsedi2.rtm";
			speed = 1e+010;
			looped = 1;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownVer2: EffectStandSitDown {
			file = "bezsedi.rtm";
			speed = -4.6;
			looped = 1;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownStill: EffectStandSitDown {
			file = "bezsedi.rtm";
			speed = 1e+010;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class StandToSitDown: StandBase {
			actions = "SitActions";
			file = "bezdosedu.rtm";
			speed = -3.2;
			looped = 0;
			soundEnabled = 0;
			duty = -1;
		};
		class SitDownToStand: StandBase {
			actions = "StandActions";
			file = "bezvztava.rtm";
			speed = -2.5;
			looped = 0;
			soundEnabled = 0;
			duty = -1;
		};
		class FXBase: StandBase {
			actions = "StandActions";
			looped = 0;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 1;
		};
		class FXStandToTel: FXBase {
			file = "ktelefonustart.rtm";
			speed = -0.5;
			connectTo[] = {"FXStandToTelHand",1};
		};
		class FXStandToTelHand: FXBase {
			file = "ktelefonuend.rtm";
			speed = -4.5;
			showItemInRightHand = 1;
		};
		class FXStandTelLoop: FXBase {
			file = "telloop.rtm";
			speed = -10;
			looped = 1;
			showItemInRightHand = 1;
		};
		class FXStandDropTel: FXBase {
			file = "poloztelefon.rtm";
			speed = -4;
			interpolateWith[] = {"FXStandToTel",1};
		};
		class FXStandFromTable: FXBase {
			file = "staniodstolu.rtm";
			speed = -3;
		};
		class FXStandUnivTable: FXBase {
			file = "univsezeni.rtm";
			speed = -8;
			looped = 1;
		};
		class FXStandToTable: FXBase {
			file = "sedkestolu.rtm";
			speed = -2.5;
		};
		class FXStandDangle: FXBase {
			file = "houpese.rtm";
			speed = -4;
		};
		class FXStandToDip: FXBase {
			file = "dokliku.rtm";
			speed = -2;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"FXStandDip",1};
		};
		class FXStandDip: FXBase {
			file = "klik.rtm";
			speed = -1.5;
			looped = 1;
		};
		class FXStandFromDip: FXBase {
			file = "zkliku.rtm";
			speed = -2;
			connectFrom[] = {"FXStandDip",1};
			connectTo[] = {"Stand",1};
		};
		class FXStandSur: FXBase {
			file = "zajatecstani.rtm";
			speed = -2;
		};
		class FXStandSurDead: FXBase {
			file = "zajatecsmrtb.rtm";
			speed = -2;
		};
		class FXStandSurUniv: FXBase {
			file = "zajatecstat.rtm";
			speed = 1e+010;
		};
		class FXStandSurDown: FXBase {
			file = "lehzajatec.rtm";
			speed = -3.5;
		};
		class FXStandRotateTable: FXBase {
			file = "kestolu.rtm";
			speed = -2;
		};
		class FXStandShowTable: FXBase {
			file = "ukazujeustolu.rtm";
			speed = -3;
		};
		class FXStandEndTable: FXBase {
			file = "ukazodstolu.rtm";
			speed = -5;
		};
		class FXStandStraight: FXBase {
			file = "staninic.rtm";
			speed = -2;
		};
		class FXStandBug: FXBase {
			file = "buzeruje.rtm";
			speed = -10;
		};
		class FXStandhip: FXBase {
			file = "rucevbok.rtm";
			speed = -5;
		};
		class FXStandAtt: FXBase {
			file = "uspozorstat.rtm";
			speed = 1e+010;
		};
		class FXStandAttVar1: FXBase {
			file = "rucevbok.rtm";
			speed = -3;
		};
		class FXangel: FXBase {
			file = "fx_angel_stand.rtm";
			speed = 1e+010;
		};
		class FXangel2: FXBase {
			file = "fx_angel_stand2.rtm";
			speed = 1e+010;
		};
		class LadderStatic: LadderBase {
			file = "upDownStat2.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = 1e+010;
			duty = -1;
		};
		class LadderUpStart: LadderUpBase {
			file = "upstart2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -0.75;
			duty = -0.5;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"LadderStatic",1};
		};
		class LadderUpLoop: LadderUpBase {
			file = "uploop2.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = -0.6;
			duty = -0.5;
			interpolateWith[] = {"LadderStatic",1};
		};
		class LadderUpEnd: LadderBase {
			actions = "StandActions";
			file = "upend2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			onLadder = 0;
			connectFrom[] = {"LadderStatic",1};
			connectTo[] = {"Stand",1};
		};
		class LadderDownStart: LadderDownBase {
			file = "downstart2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"LadderStatic",1};
		};
		class LadderDownLoop: LadderDownBase {
			file = "downloop3.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = -0.6;
			duty = -0.5;
			interpolateWith[] = {"LadderStatic",1};
		};
		class LadderDownEnd: LadderDownBase {
			actions = "StandActions";
			file = "downend2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			onLadder = 0;
			connectFrom[] = {"LadderStatic",1};
			connectTo[] = {"Stand",0.9};
		};
		class EffectWeaponPanic: Default {
			file = "szmaten.rtm";
			speed = -9;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandEngageAtWill: Default {
			file = "sengageatwill.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandFireAtWill: Default {
			file = "sengageatwill.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandFormation: Default {
			file = "sformace.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandHoldFire: Default {
			file = "sholdfire.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandStop: Default {
			file = "sstop.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandForward: Default {
			file = "svpred.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class EffectCombatStand: Default {
			file = "sstani.rtm";
			speed = -3;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class StandGetInCar: StandBase {
			actions = "StandActions";
			file = "bezosobak.rtm";
			speed = -2.25;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandGetInTank: StandBase {
			actions = "StandActions";
			file = "nastupbez.rtm";
			speed = -1.3;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandGetOutTank: StandBase {
			actions = "StandActions";
			file = "bezseskok.rtm";
			speed = -3.065;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatGetInCar: Default {
			actions = "CombatActions";
			file = "sosobak.rtm";
			speed = -1.23;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatGetInTank: Default {
			actions = "CombatActions";
			file = "snastup.rtm";
			speed = -2.38;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatGetOutTank: Default {
			actions = "CombatActions";
			file = "sdoskok.rtm";
			speed = -0.915;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CivilGetInCar: Default {
			actions = "CivilActions";
			file = "civilosobak.rtm";
			speed = -1.23;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilGetInTank: Default {
			actions = "CivilActions";
			file = "civilnastup.rtm";
			speed = -2.38;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilGetOutTank: Default {
			actions = "CivilActions";
			file = "civilseskok.rtm";
			speed = -0.915;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
	};
	class Interpolations {
		standF[] = {1,"Stand","StandWalkF","StandWalkLF","StandWalkRF","StandWalkL","StandWalkR","StandRunF"};
		standB[] = {1,"Stand","StandWalkLB","StandWalkRB","StandWalkB"};
		combatF[] = {0.9,"Combat","CombatStillPlayer","CombatRelaxed","CombatRunF","CombatRunLF","CombatRunRF","CombatRunL","CombatRunR","CombatSprintF","CombatSprintLF","CombatSprintRF","CombatWalkF","CombatWalkLF","CombatWalkRF","CombatWalkL","CombatWalkR"};
		combatB[] = {1,"Combat","CombatStillPlayer","CombatRelaxed","CombatRunLB","CombatRunRB","CombatRunB","CombatWalkLB","CombatWalkRB","CombatWalkB"};
		crouchF[] = {0.5,"CrouchIM","CrouchRunF","CrouchRunLF","CrouchRunRF","CrouchRunL","CrouchRunR","CrouchSprintF","CrouchSprintLF","CrouchSprintRF"};
		crouchFW[] = {0.5,"CrouchIM","CrouchWalkF","CrouchWalkLF","CrouchWalkRF","CrouchWalkL","CrouchWalkR"};
		crouchB[] = {0.5,"CrouchIM","CrouchRunLB","CrouchRunRB","CrouchRunB","CrouchWalkLB","CrouchWalkRB","CrouchWalkB"};
		civilF[] = {1,"Civil","CivilRunF","CivilRunLF","CivilRunRF","CivilRunL","CivilRunR","CivilWalkF","CivilWalkLF","CivilWalkRF","CivilWalkL","CivilWalkR"};
		civilB[] = {1,"Civil","CivilWalkLB","CivilWalkRB","CivilWalkB","CivilRunLB","CivilRunRB","CivilRunB"};
		lyingF[] = {1,"Lying","LyingCrawlF","LyingFastCrawlF","LyingCrawlLF","LyingCrawlRF","LyingCrawlL","LyingCrawlR"};
		lyingB[] = {1,"Lying","LyingCrawlLB","LyingCrawlRB","LyingCrawlB"};
		civilLyingF[] = {1,"CivilLying","CivilLyingCrawlF","CivilLyingFastCrawlF","CivilLyingCrawlLF","CivilLyingCrawlRF","CivilLyingCrawlL","CivilLyingCrawlR"};
		civilLyingB[] = {1,"CivilLying","CivilLyingCrawlLB","CivilLyingCrawlRB","CivilLyingCrawlB"};
		lyingVars[] = {0.1,"Lying","LyingStillV1","LyingTurnL","LyingTurnR"};
		civilLyingVars[] = {0.1,"CivilLying","CivilLyingStillV1"};
		combatVars[] = {0.1,"Combat","CombatStillPlayer","CombatStillV1"};
		combatReleaxedVars[] = {0.1,"Combat","CombatRelaxed","CombatRelaxedStill"};
		combatTurnRelaxed[] = {0.1,"CombatRelaxed","CombatTurnLRelaxed","CombatTurnRRelaxed"};
		combatTurn[] = {0.1,"Combat","CombatStillPlayer","CombatTurnL","CombatTurnR"};
		standTurn[] = {0.1,"Stand","StandTurnL","StandTurnR"};
		standFX[] = {1,"Stand","EffectStand","EffectStandTalk","EffectStand","EffectCombatStand","EffectStandStill","CommandFireAtWill","CommandFormation","CommandHoldFire","CommandStop","CommandForward"};
		standVars[] = {1,"Stand","StandVar2"};
		weaponF[] = {1,"Weapon","WeaponWalkF","WeaponWalkLF","WeaponWalkRF","WeaponWalkL","WeaponWalkR"};
		weaponB[] = {1,"Weapon","WeaponWalkLB","WeaponWalkRB","WeaponWalkB"};
		weaponTurn[] = {1,"Weapon","WeaponTurnL","WeaponTurnR"};
		civilLyingTrans[] = {2,"CivilLying","Lying"};
		civilCombatTrans[] = {2,"Combat","Civil"};
		civilStandTrans[] = {2,"Stand","Civil"};
		civilVars[] = {0.1,"Civil","CivilStillV1"};
		civilTurn[] = {1,"Civil","CivilTurnL","CivilTurnR"};
		cargoEquiv[] = {2,"M113Gunner","M113Driver","M113DriverOut","M60Gunner","M60Driver","M60DriverOut","M60Commander","M60CommanderOut","M1A1Gunner","M1A1Driver","M1A1DriverOut","M1A1Commander","Cargo"};
		cargoVars[] = {0.1,"Cargo","CargoVer1","CargoVer2","CargoVer3","CargoVer4","CargoVer5"};
		sitDownVars[] = {1,"EffectStandSitDown","EffectStandSitDownVer2","EffectStandSitDownVer1"};
	};
};
