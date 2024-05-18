////////////////////////////////////////////////////////////////////
//DeRap: D:\Program Files (x86)\Steam\steamapps\common\ARMA Cold War Assault\Res\Bin\RESOURCE.BIN
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sat May 18 15:08:30 2024 : 'file' last modified on Sun Feb 23 17:04:20 2014
////////////////////////////////////////////////////////////////////

#define _OFP_

//(98 Enums)
enum {
	cmd_watch,	//0
	cmd_getin,	//1
	cmd_getout,	//2
	cmd_action,	//3
	cmd_advance,	//4
	cmd_stay_back,	//5
	cmd_flank_left,	//6
	cmd_flank_right,	//7
	cmd_next_waypoint,	//8
	cmd_hide,	//9
	cmd_join,	//10
	cmd_stop,	//11
	cmd_expect,	//12
	cmd_move_submenu,	//13
	cmd_form_column,	//14
	cmd_form_stagcol,	//15
	cmd_form_wedge,	//16
	cmd_form_echleft,	//17
	cmd_form_echright,	//18
	cmd_form_vee,	//19
	cmd_form_line,	//20
	cmd_engage,	//21
	cmd_loose_form,	//22
	cmd_keep_form,	//23
	cmd_hold_fire,	//24
	cmd_open_fire,	//25
	cmd_fire,	//26
	cmd_watch_around,	//27
	cmd_watch_auto,	//28
	cmd_watch_submenu,	//29
	cmd_watch_first,	//30
	cmd_watch_n,	//31
	cmd_watch_ne,	//32
	cmd_watch_e,	//33
	cmd_watch_se,	//34
	cmd_watch_s,	//35
	cmd_watch_sw,	//36
	cmd_watch_w,	//37
	cmd_watch_nw,	//38
	cmd_stealth,	//39
	cmd_combat,	//40
	cmd_aware,	//41
	cmd_safe,	//42
	cmd_pos_up,	//43
	cmd_pos_down,	//44
	cmd_pos_auto,	//45
	cmd_team_main,	//46
	cmd_team_red,	//47
	cmd_team_green,	//48
	cmd_team_blue,	//49
	cmd_team_yellow,	//50
	cmd_assign_main,	//51
	cmd_assign_red,	//52
	cmd_assign_green,	//53
	cmd_assign_blue,	//54
	cmd_assign_yellow,	//55
	cmd_radio_alpha,	//56
	cmd_radio_bravo,	//57
	cmd_radio_charlie,	//58
	cmd_radio_delta,	//59
	cmd_radio_echo,	//60
	cmd_radio_foxtrot,	//61
	cmd_radio_golf,	//62
	cmd_radio_hotel,	//63
	cmd_radio_india,	//64
	cmd_radio_juliet,	//65
	cmd_reply_done,	//66
	cmd_reply_fail,	//67
	cmd_reply_copy,	//68
	cmd_reply_repeat,	//69
	cmd_reply_where_are_you,	//70
	cmd_report,	//71
	cmd_reply_engaging,	//72
	cmd_reply_under_fire,	//73
	cmd_reply_hit,	//74
	cmd_reply_one_less,	//75
	cmd_reply_fireready,	//76
	cmd_reply_firenotready,	//77
	cmd_reply_killed,	//78
	cmd_reply_ammo_low,	//79
	cmd_reply_fuel_low,	//80
	cmd_reply_injured,	//81
	cmd_support_medic,	//82
	cmd_support_repair,	//83
	cmd_support_rearm,	//84
	cmd_support_refuel,	//85
	cmd_support_done,	//86
	cmd_radio_custom,	//87
	cmd_radio_custom_1,	//88
	cmd_radio_custom_2,	//89
	cmd_radio_custom_3,	//90
	cmd_radio_custom_4,	//91
	cmd_radio_custom_5,	//92
	cmd_radio_custom_6,	//93
	cmd_radio_custom_7,	//94
	cmd_radio_custom_8,	//95
	cmd_radio_custom_9,	//96
	cmd_radio_custom_0,	//97
};
//class RESOURCE.bin {
class RadioProtocol {
	access = 3;
	class Default {
		priority = 0;
		timeout = 1000.0;
	};
	class Report {
		priority = 100;
		timeout = 30.0;
	};
	class PriorityReport {
		priority = 200;
		timeout = 60.0;
	};
	class Confirmation {
		priority = 300;
		timeout = 3.0;
	};
	class Completition {
		priority = 400;
		timeout = 5.0;
	};
	class JoinCompleted {
		priority = 400;
		timeout = 30.0;
	};
	class Failure {
		priority = 500;
		timeout = 30.0;
	};
	class Notify {
		priority = 600;
		timeout = 5.0;
	};
	class Detected {
		priority = 700;
		timeout = 5.0;
	};
	class NormalCommand {
		priority = 800;
		timeout = 1000.0;
	};
	class CriticalReport {
		priority = 850;
		timeout = 60.0;
	};
	class UrgentCommand {
		priority = 900;
		timeout = 1000.0;
	};
	class UICommand {
		priority = 1000;
		timeout = 1000.0;
	};
	class Design {
		priority = 950;
		timeout = 1000.0;
	};
	class SentUnitKilled: CriticalReport {
		versions[] = {"Version1",0.5,"Version2",0.3,"Version3",0.2};
		class Version1 {
			text = "$STR_SENT_UNIT_KILLED_1";
			Speech9[] = {"%1.1","IsDown"};
			Speech5[] = {"%1.1","IsDown"};
		};
		class Version2 {
			text = "$STR_SENT_UNIT_KILLED_2";
			Speech9[] = {"Damned","%1.1","IsDown"};
			Speech5[] = {"Damned","%1.1","IsDown"};
		};
		class Version3 {
			text = "$STR_SENT_UNIT_KILLED_3";
			Speech9[] = {"OhNo","%1.1","IsDown"};
			Speech5[] = {"OhNo","%1.1","IsDown"};
		};
	};
	class SentSupportAskHeal: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_ASK_HEAL_1";
			Speech9[] = {"needMedic","Position","%1"};
			Speech5[] = {"needMedic","Position","%1"};
		};
	};
	class SentSupportAskRepair: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_ASK_REPAIR_1";
			Speech9[] = {"needRepairs","Position","%1"};
			Speech5[] = {"needRepairs","Position","%1"};
		};
	};
	class SentSupportAskRefuel: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_ASK_REFUEL_1";
			Speech9[] = {"needFuel","Position","%1"};
			Speech5[] = {"needFuel","Position","%1"};
		};
	};
	class SentSupportAskRearm: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_ASK_REARM_1";
			Speech9[] = {"needAmmo","Position","%1"};
			Speech5[] = {"needAmmo","Position","%1"};
		};
	};
	class SentSupportConfirm: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_CONFIRM_1";
			Speech9[] = {"supporting","Position","%2"};
			Speech5[] = {"supporting","Position","%2"};
		};
	};
	class SentSupportReady: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_READY_1";
			Speech9[] = {"Position","%2","Supporting","%1"};
			Speech5[] = {"Position","%2","Supporting","%1"};
		};
	};
	class SentSupportDone: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_SUPPORT_DONE_1";
			Speech9[] = {"Ready"};
			Speech5[] = {"Ready"};
		};
	};
	class SentHealthCritical: CriticalReport {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_HEALTH_CRITICAL_1";
			Speech9[] = {"%1.1","Injured"};
			Speech5[] = {"%1.1","Injured"};
		};
	};
	class SentDammageCritical: CriticalReport {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_DAMMAGE_CRITICAL_1";
			Speech9[] = {"%1.1","statusRed"};
			Speech5[] = {"%1.1","statusRed"};
		};
	};
	class SentFuelCritical: CriticalReport {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FUEL_CRITICAL_1";
			Speech9[] = {"%1.1","outOfFuel"};
			Speech5[] = {"%1.1","outOfFuel"};
		};
	};
	class SentFuelLow: Report {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FUEL_LOW_1";
			Speech9[] = {"%1.1","FuelLow"};
			Speech5[] = {"%1.1","FuelLow"};
		};
	};
	class SentAmmoCritical: CriticalReport {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_AMMO_CRITICAL_1";
			Speech9[] = {"%1.1","outOfAmmo"};
			Speech5[] = {"%1.1","outOfAmmo"};
		};
	};
	class SentAmmoLow: Report {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_AMMO_LOW_1";
			Speech9[] = {"%1.1","ammoLow"};
			Speech5[] = {"%1.1","ammoLow"};
		};
	};
	class SentReportPosition: Report {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_REPORT_POSITION_1";
			Speech9[] = {"%1","Position","%2"};
			Speech5[] = {"%1","Position","%2"};
		};
	};
	class SentIsLeader: CriticalReport {
		versions[] = {"Version1",0.5,"Version2",0.5};
		class Version1 {
			text = "$STR_SENT_IS_LEADER_1";
			Speech9[] = {"%1","TakingCommand"};
			Speech5[] = {"%1","TakingCommand"};
		};
		class Version2 {
			text = "$STR_SENT_IS_LEADER_2";
			Speech9[] = {"ThisIs","%1","TakingCommand","ISayAgain","%1","TakingCommand","Out"};
			Speech5[] = {"ThisIs","%1","TakingCommand","ISayAgain","%1","TakingCommand","Out"};
		};
	};
	class SentCommandCompleted: Completition {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_COMMAND_COMPLETED_1";
			Speech9[] = {"%1","Ready"};
			Speech5[] = {"%1","Ready"};
		};
		class Version2 {
			text = "$STR_SENT_COMMAND_COMPLETED_2";
			Speech9[] = {"%1","Waiting"};
			Speech5[] = {"%1","Waiting"};
		};
	};
	class SentJoinCompleted: JoinCompleted {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_COMMAND_COMPLETED_1";
			Speech9[] = {"%1","Ready"};
			Speech5[] = {"%1","Ready"};
		};
	};
	class SentFireReady: Completition {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FIRE_READY_1";
			Speech9[] = {"%1","ReadyToFire"};
			Speech5[] = {"%1","ReadyToFire"};
		};
	};
	class SentFireNegative: Completition {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FIRE_NEGATIVE_1";
			Speech9[] = {"%1","CannotFire"};
			Speech5[] = {"%1","CannotFire"};
		};
	};
	class SentCommandFailed: Failure {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_COMMAND_FAILED_1";
			Speech9[] = {"%1","Negative"};
			Speech5[] = {"%1","Negative"};
		};
	};
	class SentDestinationUnreacheable: Failure {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_DESTINATION_UNREACHEABLE_1";
			Speech9[] = {"%1","canNotGetThere"};
			Speech5[] = {"%1","canNotGetThere"};
		};
	};
	class SentEnemyDetected: Detected {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_ENEMY_DETECTED_1";
			Speech9[] = {"%3","%4","%2","%5"};
			Speech5[] = {"%3","%4","%2","%5"};
		};
		class Version2 {
			text = "$STR_SENT_ENEMY_DETECTED_2";
			Speech9[] = {"%3","%2","%5"};
			Speech5[] = {"%3","%2","%5"};
		};
	};
	class SentEnemyDetectedFar: Detected {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_ENEMY_DETECTED_FAR_1";
			Speech9[] = {"%1","%3","%4","%2","%5"};
			Speech5[] = {"%1","%3","%4","%2","%5"};
		};
		class Version2 {
			text = "$STR_SENT_ENEMY_DETECTED_FAR_2";
			Speech9[] = {"%1","%3","%2","%5"};
			Speech5[] = {"%1","%3","%2","%5"};
		};
	};
	class SentEnemyDetectedSimple: Detected {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_ENEMY_DETECTED_SIMPLE_1";
			Speech9[] = {"%3","%2","%5"};
			Speech5[] = {"%3","%2","%5"};
		};
	};
	class SentEnemyDetectedSimpleFar: Detected {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_ENEMY_DETECTED_SIMPLE_FAR_1";
			Speech9[] = {"%1","%3","%2"};
			Speech5[] = {"%1","%3","%2"};
		};
	};
	class SentObjectDestroyed: Completition {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_OBJECT_DESTROYED_1";
			Speech9[] = {"iVeGotHim"};
			Speech5[] = {"iVeGotHim"};
		};
		class Version2 {
			text = "$STR_SENT_OBJECT_DESTROYED_2";
			Speech9[] = {"%2","isHistory"};
			Speech5[] = {"%2","isHistory"};
		};
	};
	class SentObjectDestroyedUnknown: Completition {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_OBJECT_DESTROYED_UNKNOWN_1";
			Speech9[] = {"iVeGotHim"};
			Speech5[] = {"iVeGotHim"};
		};
	};
	class SentContact: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CONTACT_1";
			Speech9[] = {"contact"};
			Speech5[] = {"contact"};
		};
	};
	class SentUnderFire: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_UNDER_FIRE_1";
			Speech9[] = {"underFire"};
			Speech5[] = {"underFire"};
		};
	};
	class SentClear: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CLEAR_1";
			Speech9[] = {"clear"};
			Speech5[] = {"clear"};
		};
	};
	class SentRepeatCommand: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_REPEAT_COMMAND_1";
			Speech9[] = {"repeat"};
			Speech5[] = {"repeat"};
		};
	};
	class SentWhereAreYou: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_WHERE_ARE_YOU_1";
			Speech9[] = {"whereAreYou"};
			Speech5[] = {"whereAreYou"};
		};
	};
	class SentReturnToFormation: NormalCommand {
		versions[] = {"Version1",0.4,"Version2",0.6};
		class Version1 {
			text = "$STR_SENT_RETURN_TO_FORMATION_1";
			Speech9[] = {"%1","returnToFormation"};
			Speech5[] = {"%1","returnToFormation"};
		};
		class Version2 {
			text = "$STR_SENT_RETURN_TO_FORMATION_2";
			Speech9[] = {"%1","fallBackIntoFormation"};
			Speech5[] = {"%1","fallBackIntoFormation"};
		};
	};
	class SentFormColumn: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_COLUMN_1";
			Speech9[] = {"FormColumn"};
			Speech5[] = {"FormColumn"};
		};
	};
	class SentFormStaggeredColumn: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_STAGGERED_COLUMN_1";
			Speech9[] = {"FormStageredColumn"};
			Speech5[] = {"FormStageredColumn"};
		};
	};
	class SentFormWedge: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_WEDGE_1";
			Speech9[] = {"FormWedge"};
			Speech5[] = {"FormWedge"};
		};
	};
	class SentFormEcholonLeft: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_ECHOLON_LEFT_1";
			Speech9[] = {"FormEchelonLeft"};
			Speech5[] = {"FormEchelonLeft"};
		};
	};
	class SentFormEcholonRight: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_ECHOLON_RIGHT_1";
			Speech9[] = {"FormEchelonRight"};
			Speech5[] = {"FormEchelonRight"};
		};
	};
	class SentFormVee: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_VEE_1";
			Speech9[] = {"FormVee"};
			Speech5[] = {"FormVee"};
		};
	};
	class SentFormLine: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_LINE_1";
			Speech9[] = {"FormLine"};
			Speech5[] = {"FormLine"};
		};
	};
	class SentBehaviourCareless: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_BEHAVIOUR_CARELESS_1";
			Speech9[] = {"%1.1","Careless"};
			Speech5[] = {"%1.1","Careless"};
		};
	};
	class SentBehaviourSafe: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_BEHAVIOUR_SAFE_1";
			Speech9[] = {"%1.1","AtEase"};
			Speech5[] = {"%1.1","AtEase"};
		};
	};
	class SentBehaviourAware: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_BEHAVIOUR_AWARE_1";
			Speech9[] = {"%1.1","StayAlert"};
			Speech5[] = {"%1.1","StayAlert"};
		};
	};
	class SentBehaviourCombat: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_BEHAVIOUR_COMBAT_1";
			Speech9[] = {"%1.1","Danger"};
			Speech5[] = {"%1.1","Danger"};
		};
	};
	class SentBehaviourStealth: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_BEHAVIOUR_STEALTH_1";
			Speech9[] = {"%1.1","stealth"};
			Speech5[] = {"%1.1","stealth"};
		};
	};
	class SentOpenFire: NormalCommand {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_OPEN_FIRE_1";
			Speech9[] = {"%1.1","FireAtWill"};
			Speech5[] = {"%1.1","FireAtWill"};
		};
		class Version2 {
			text = "$STR_SENT_OPEN_FIRE_2";
			Speech9[] = {"%1.1","WeaponsFree"};
			Speech5[] = {"%1.1","WeaponsFree"};
		};
	};
	class SentOpenFireInCombat: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_OPEN_FIRE_IN_COMBAT_1";
			Speech9[] = {"%1.1","GoGoGo"};
			Speech5[] = {"%1.1","GoGoGo"};
		};
	};
	class SentHoldFire: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_HOLD_FIRE_1";
			Speech9[] = {"%1.1","HoldFire"};
			Speech5[] = {"%1.1","HoldFire"};
		};
	};
	class SentHoldFireInCombat: UrgentCommand {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_HOLD_FIRE_IN_COMBAT_1";
			Speech9[] = {"%1.1","CeaseFire"};
			Speech5[] = {"%1.1","CeaseFire"};
		};
		class Version2 {
			text = "$STR_SENT_HOLD_FIRE_IN_COMBAT_2";
			Speech9[] = {"%1.1","DontFire"};
			Speech5[] = {"%1.1","DontFire"};
		};
	};
	class SentCeaseFireInsideGroup: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CEASE_FIRE_INSIDE_GROUP_1";
			Speech9[] = {"%1.1","CeaseFire"};
			Speech5[] = {"%1.1","CeaseFire"};
		};
	};
	class SentCeaseFire: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CEASE_FIRE_1";
			Speech9[] = {"%2.1","CeaseFire"};
			Speech5[] = {"%2.1","CeaseFire"};
		};
	};
	class SentLooseFormation: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_LOOSE_FORMATION_1";
			Speech9[] = {"%1.1","engageAtWill"};
			Speech5[] = {"%1.1","engageAtWill"};
		};
	};
	class SentKeepFormation: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_KEEP_FORMATION_1";
			Speech9[] = {"%1.1","disengage"};
			Speech5[] = {"%1.1","disengage"};
		};
	};
	class SentUnitPosDown: NormalCommand {
		versions[] = {"Version1",0.3,"Version2",0.3,"Version3",0.4};
		class Version1 {
			text = "$STR_SENT_UNIT_POS_DOWN_1";
			Speech9[] = {"%1.1","goProne"};
			Speech5[] = {"%1.1","goProne"};
		};
		class Version2 {
			text = "$STR_SENT_UNIT_POS_DOWN_2";
			Speech9[] = {"%1.1","hitTheDirt"};
			Speech5[] = {"%1.1","hitTheDirt"};
		};
		class Version3 {
			text = "$STR_SENT_UNIT_POS_DOWN_3";
			Speech9[] = {"%1.1","getDown"};
			Speech5[] = {"%1.1","getDown"};
		};
	};
	class SentUnitPosUp: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_UNIT_POS_UP_1";
			Speech9[] = {"%1.1","StandUp"};
			Speech5[] = {"%1.1","StandUp"};
		};
	};
	class SentUnitPosAuto: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_UNIT_POS_AUTO_1";
			Speech9[] = {"%1.1","KeepLow"};
			Speech5[] = {"%1.1","KeepLow"};
		};
	};
	class SentFormPosAdvance: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_POS_ADVANCE_1";
			Speech9[] = {"%1.1","Advance"};
			Speech5[] = {"%1.1","Advance"};
		};
	};
	class SentFormPosStayBack: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_POS_STAY_BACK_1";
			Speech9[] = {"%1.1","StayBack"};
			Speech5[] = {"%1.1","StayBack"};
		};
	};
	class SentFormPosFlankLeft: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_POS_FLANK_LEFT_1";
			Speech9[] = {"%1.1","FlankLeft"};
			Speech5[] = {"%1.1","FlankLeft"};
		};
	};
	class SentFormPosFlankRight: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FORM_POS_FLANK_RIGHT_1";
			Speech9[] = {"%1.1","FlankRight"};
			Speech5[] = {"%1.1","FlankRight"};
		};
	};
	class SentReportStatus: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_REPORT_STATUS_1";
			Speech9[] = {"%1.1","ReportStatus"};
			Speech5[] = {"%1.1","ReportStatus"};
		};
	};
	class SentTeam: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_TEAM_1";
			Speech9[] = {"%1.1","Are","%2"};
			Speech5[] = {"%1.1","Are","%2"};
		};
	};
	class SentWatchTgt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_WATCH_TGT_1";
			Speech9[] = {"%1.1","Watch","%2"};
			Speech5[] = {"%1.1","Watch","%2"};
		};
	};
	class SentWatchDir: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_WATCH_DIR_1";
			Speech9[] = {"%1.1","Watch","%2"};
			Speech5[] = {"%1.1","Watch","%2"};
		};
	};
	class SentWatchPos: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_WATCH_POS_1";
			Speech9[] = {"%1.1","Watch","%2"};
			Speech5[] = {"%1.1","Watch","%2"};
		};
	};
	class SentWatchAround: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_WATCH_AROUND_1";
			Speech9[] = {"%1.1","scanHorizon"};
			Speech5[] = {"%1.1","scanHorizon"};
		};
	};
	class SentNoTarget: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_NO_TARGET_1";
			Speech9[] = {"%1.1","NoTarget"};
			Speech5[] = {"%1.1","NoTarget"};
		};
	};
	class SentTarget: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_TARGET_1";
			Speech9[] = {"%1","Target","%2"};
			Speech5[] = {"%1","Target","%2"};
		};
	};
	class SentEngage: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_ENGAGE_1";
			Speech9[] = {"%1","Engage","%2"};
			Speech5[] = {"%1","Engage","%2"};
		};
	};
	class SentFire: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FIRE_1";
			Speech9[] = {"%1","FireAt","%2"};
			Speech5[] = {"%1","FireAt","%2"};
		};
	};
	class SentEngageNoTarget: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_ENGAGE_NO_TARGET_1";
			Speech9[] = {"%1","Engage"};
			Speech5[] = {"%1","Engage"};
		};
	};
	class SentFireNoTarget: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_FIRE_NO_TARGET_1";
			Speech9[] = {"%1","Fire"};
			Speech5[] = {"%1","Fire"};
		};
	};
	class SentCmdMove: NormalCommand {
		versions[] = {"Version1",0.5,"Version2",0.5};
		class Version1 {
			text = "$STR_SENT_CMD_MOVE_1";
			Speech9[] = {"%1.1","MoveTo","%2","XMIT","%3"};
			Speech5[] = {"%1.1","MoveTo","%2","XMIT","%3"};
		};
		class Version2 {
			text = "$STR_SENT_CMD_MOVE_2";
			Speech9[] = {"%1.1","GoTo","%2","XMIT","%3"};
			Speech5[] = {"%1.1","GoTo","%2","XMIT","%3"};
		};
	};
	class SentCmdMoveFar: NormalCommand {
		versions[] = {"Version1",0.5,"Version2",0.5};
		class Version1 {
			text = "$STR_SENT_CMD_MOVE_FAR_1";
			Speech9[] = {"%1.1","MoveTo","%2"};
			Speech5[] = {"%1.1","MoveTo","%2"};
		};
		class Version2 {
			text = "$STR_SENT_CMD_MOVE_FAR_2";
			Speech9[] = {"%1.1","GoTo","%2"};
			Speech5[] = {"%1.1","GoTo","%2"};
		};
	};
	class SentCmdMoveTo: NormalCommand {
		versions[] = {"Version1",0.5,"Version2",0.5};
		class Version1 {
			text = "$STR_SENT_CMD_MOVE_TO_1";
			Speech9[] = {"%1.1","MoveTo","%2","%3"};
			Speech5[] = {"%1.1","MoveTo","%2","%3"};
		};
		class Version2 {
			text = "$STR_SENT_CMD_MOVE_TO_2";
			Speech9[] = {"%1.1","GoTo","%2","%3"};
			Speech5[] = {"%1.1","GoTo","%2","%3"};
		};
	};
	class SentCmdMoveNear: NormalCommand {
		versions[] = {"Version1",1.0};
		class Version1 {
			text = "$STR_SENT_CMD_MOVE_NEAR_1";
			Speech9[] = {"%1.1","moveTo","%2","%3"};
			Speech5[] = {"%1.1","moveTo","%2","%3"};
		};
	};
	class SentCmdHeal: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_HEAL_1";
			Speech9[] = {"%1.1","HealAt","%2","%3"};
			Speech5[] = {"%1.1","HealAt","%2","%3"};
		};
	};
	class SentCmdHealFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_HEAL_FAR_1";
			Speech9[] = {"%1.1","HealAt","%2"};
			Speech5[] = {"%1.1","HealAt","%2"};
		};
	};
	class SentCmdHealAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_HEAL_AT_1";
			Speech9[] = {"%1.1","GoTo","%2","%3"};
			Speech5[] = {"%1.1","GoTo","%2","%3"};
		};
	};
	class SentCmdRepair: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REPAIR_1";
			Speech9[] = {"%1.1","RepairAt","%2","%3"};
			Speech5[] = {"%1.1","RepairAt","%2","%3"};
		};
	};
	class SentCmdRepairFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REPAIR_FAR_1";
			Speech9[] = {"%1.1","RepairAt","%2"};
			Speech5[] = {"%1.1","RepairAt","%2"};
		};
	};
	class SentCmdRepairAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REPAIR_AT_1";
			Speech9[] = {"%1.1","RepairAt","%2","%3"};
			Speech5[] = {"%1.1","RepairAt","%2","%3"};
		};
	};
	class SentCmdRefuel: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REFUEL_1";
			Speech9[] = {"%1.1","RefuelAt","%2","%3"};
			Speech5[] = {"%1.1","RefuelAt","%2","%3"};
		};
	};
	class SentCmdRefuelFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REFUEL_FAR_1";
			Speech9[] = {"%1.1","RefuelAt","%2"};
			Speech5[] = {"%1.1","RefuelAt","%2"};
		};
	};
	class SentCmdRefuelAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REFUEL_AT_1";
			Speech9[] = {"%1.1","RefuelAt","%2","%3"};
			Speech5[] = {"%1.1","RefuelAt","%2","%3"};
		};
	};
	class SentCmdRearm: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REARM_1";
			Speech9[] = {"%1.1","RearmAt","%2","%3"};
			Speech5[] = {"%1.1","RearmAt","%2","%3"};
		};
	};
	class SentCmdRearmFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REARM_FAR_1";
			Speech9[] = {"%1.1","RearmAt","%2"};
			Speech5[] = {"%1.1","RearmAt","%2"};
		};
	};
	class SentCmdRearmAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_REARM_AT_1";
			Speech9[] = {"%1.1","RearmAt","%3"};
			Speech5[] = {"%1.1","RearmAt","%3"};
		};
	};
	class SentCmdSupport: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_SUPPORT_1";
			Speech9[] = {"%1.1","supporting","%2","%3"};
			Speech5[] = {"%1.1","supporting","%2","%3"};
		};
	};
	class SentCmdSupportFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_SUPPORT_FAR_1";
			Speech9[] = {"%1.1","supporting","%2"};
			Speech5[] = {"%1.1","supporting","%2"};
		};
	};
	class SentCmdSupportAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_SUPPORT_AT_1";
			Speech9[] = {"%1.1","supporting","%2","%3"};
			Speech5[] = {"%1.1","supporting","%2","%3"};
		};
	};
	class SentCmdTakeWeapon: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_TAKE_WEAPON_1";
			Speech9[] = {"%1.1","TakeWeaponFrom","%2","%3"};
			Speech5[] = {"%1.1","TakeWeaponFrom","%2","%3"};
		};
	};
	class SentCmdTakeWeaponFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_TAKE_WEAPON_FAR_1";
			Speech9[] = {"%1.1","TakeWeaponFrom","%2"};
			Speech5[] = {"%1.1","TakeWeaponFrom","%2"};
		};
	};
	class SentCmdTakeWeaponAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_TAKE_WEAPON_AT_1";
			Speech9[] = {"%1.1","TakeWeaponFrom","%2","%3"};
			Speech5[] = {"%1.1","TakeWeaponFrom","%2","%3"};
		};
	};
	class SentCmdTakeMagazine: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_TAKE_MAGAZINE_1";
			Speech9[] = {"%1.1","TakeMagazineFrom","%2","%3"};
			Speech5[] = {"%1.1","TakeMagazineFrom","%2","%3"};
		};
	};
	class SentCmdTakeMagazineFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_TAKE_MAGAZINE_FAR_1";
			Speech9[] = {"%1.1","TakeMagazineFrom","%2"};
			Speech5[] = {"%1.1","TakeMagazineFrom","%2"};
		};
	};
	class SentCmdTakeMagazineAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_TAKE_MAGAZINE_AT_1";
			Speech9[] = {"%1.1","TakeMagazineFrom","%2","%3"};
			Speech5[] = {"%1.1","TakeMagazineFrom","%2","%3"};
		};
	};
	class SentCmdAction: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_ACTION_1";
			Speech9[] = {};
			Speech5[] = {};
		};
	};
	class SentCmdActionFar: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_ACTION_FAR_1";
			Speech9[] = {};
			Speech5[] = {};
		};
	};
	class SentCmdActionAt: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_ACTION_AT_1";
			Speech9[] = {};
			Speech5[] = {};
		};
	};
	class SentCmdFollowMe: UrgentCommand {
		versions[] = {"Version1",0.4,"Version2",0.6};
		class Version1 {
			text = "$STR_SENT_CMD_FOLLOW_ME_1";
			Speech9[] = {"%1.1","returnToFormation"};
			Speech5[] = {"%1.1","returnToFormation"};
		};
		class Version2 {
			text = "$STR_SENT_CMD_FOLLOW_ME_2";
			Speech9[] = {"%1.1","fallBackIntoFormation"};
			Speech5[] = {"%1.1","fallBackIntoFormation"};
		};
	};
	class SentCmdFollow: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_FOLLOW_1";
			Speech9[] = {"%1.1","Follow","%2.1"};
			Speech5[] = {"%1.1","Follow","%2.1"};
		};
	};
	class SentCmdAttack: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_ATTACK_1";
			Speech9[] = {"%1.1","Attack","%2"};
			Speech5[] = {"%1.1","Attack","%2"};
		};
	};
	class SentAttackNoTarget: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_ATTACK_NO_TARGET_1";
			Speech9[] = {"%1.1","Attack"};
			Speech5[] = {"%1.1","Attack"};
		};
	};
	class SentCmdFire: UrgentCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_FIRE_1";
			Speech9[] = {"%1.1","FireAt","%2"};
			Speech5[] = {"%1.1","FireAt","%2"};
		};
	};
	class SentCmdGetIn: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETIN_1";
			Speech9[] = {"%1.1","GetIn","%2"};
			Speech5[] = {"%1.1","GetIn","%2"};
		};
	};
	class SentCmdGetInCommander: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETIN_COMMANDER_1";
			Speech9[] = {"%1.1","Commander","GetIn","%2"};
			Speech5[] = {"%1.1","Commander","GetIn","%2"};
		};
	};
	class SentCmdGetInDriver: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETIN_DRIVER_1";
			Speech9[] = {"%1.1","Driver","GetIn","%2"};
			Speech5[] = {"%1.1","Driver","GetIn","%2"};
		};
	};
	class SentCmdGetInPilot: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETIN_PILOT_1";
			Speech9[] = {"%1.1","Pilot","GetIn","%2"};
			Speech5[] = {"%1.1","Pilot","GetIn","%2"};
		};
	};
	class SentCmdGetInGunner: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETIN_GUNNER_1";
			Speech9[] = {"%1.1","Gunner","GetIn","%2"};
			Speech5[] = {"%1.1","Gunner","GetIn","%2"};
		};
	};
	class SentCmdGetInCargo: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETIN_CARGO_1";
			Speech9[] = {"%1.1","Board","%2"};
			Speech5[] = {"%1.1","Board","%2"};
		};
	};
	class SentCmdGetOut: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_GETOUT_1";
			Speech9[] = {"%1.1","Disembark"};
			Speech5[] = {"%1.1","Disembark"};
		};
	};
	class SentCmdStop: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_STOP_1";
			Speech9[] = {"%1.1","halt"};
			Speech5[] = {"%1.1","halt"};
		};
	};
	class SentCmdExpect: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_EXPECT_1";
			Speech9[] = {"%1.1","WaitForMe"};
			Speech5[] = {"%1.1","WaitForMe"};
		};
	};
	class SentCmdHide: NormalCommand {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CMD_HIDE_1";
			Speech9[] = {"%1.1","TakeCover"};
			Speech5[] = {"%1.1","TakeCover"};
		};
	};
	class SentNotifyAttack: Notify {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_NOTIFY_ATTACK_1";
			Speech9[] = {"%1.1","Engaging"};
			Speech5[] = {"%1.1","Engaging"};
		};
	};
	class SentNotifySupport: Notify {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_NOTIFY_SUPPORT_1";
			Speech9[] = {"%1.1","supporting"};
			Speech5[] = {"%1.1","supporting"};
		};
	};
	class SentConfirmPrivate: Confirmation {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CONFIRM_PRIVATE_1";
			Speech9[] = {"Roger"};
			Speech5[] = {"Roger"};
		};
	};
	class SentConfirmMove: Confirmation {
		versions[] = {"Version1",0.6,"Version2",0.2,"Version3",0.2};
		class Version1 {
			text = "$STR_SENT_CONFIRM_MOVE_1";
			Speech9[] = {"Roger"};
			Speech5[] = {"Roger"};
		};
		class Version2 {
			text = "$STR_SENT_CONFIRM_MOVE_2";
			Speech9[] = {"movingOn"};
			Speech5[] = {"movingOn"};
		};
		class Version3 {
			text = "$STR_SENT_CONFIRM_MOVE_3";
			Speech9[] = {"OnTheWay"};
			Speech5[] = {"OnTheWay"};
		};
	};
	class SentConfirmAttack: Confirmation {
		versions[] = {"Version1",0.5,"Version2",0.25,"Version3"};
		class Version1 {
			text = "$STR_SENT_CONFIRM_ATTACK_1";
			Speech9[] = {"IAmOnHim"};
			Speech5[] = {"IAmOnHim"};
		};
		class Version2 {
			text = "$STR_SENT_CONFIRM_ATTACK_2";
			Speech9[] = {"Roger"};
			Speech5[] = {"Roger"};
		};
		class Version3 {
			text = "$STR_SENT_CONFIRM_ATTACK_3";
			Speech9[] = {"OnTheWay"};
			Speech5[] = {"OnTheWay"};
		};
	};
	class SentConfirmOther: Confirmation {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_CONFIRM_OTHER_1";
			Speech9[] = {"Roger"};
			Speech5[] = {"Roger"};
		};
	};
	class VehicleMove {
		versions[] = {"Version1",0.5,"Version2"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_MOVE_1";
			Speech9[] = {"MoveTo","%1","XMIT","%2"};
			Speech5[] = {"MoveTo","%1","XMIT","%2"};
		};
		class Version2 {
			text = "$STR_SENT_VEHICLE_MOVE_2";
			Speech9[] = {"GoTo","%1","XMIT","%2"};
			Speech5[] = {"GoTo","%1","XMIT","%2"};
		};
	};
	class VehicleJoin {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_JOIN_1";
			Speech9[] = {"KeepFormation"};
			Speech5[] = {"KeepFormation"};
		};
	};
	class VehicleFire {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_FIRE_1";
			Speech9[] = {"FireAt","%1"};
			Speech5[] = {"FireAt","%1"};
		};
	};
	class VehicleTarget {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_TARGET_1";
			Speech9[] = {"Target","%1","XMIT","%2"};
			Speech5[] = {"Target","%1","XMIT","%2"};
		};
	};
	class VehicleNoTarget {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_NO_TARGET_1";
			Speech9[] = {"NoTarget"};
			Speech5[] = {"NoTarget"};
		};
	};
	class VehicleCeaseFire {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_CEASE_FIRE_1";
			Speech9[] = {"CeaseFire"};
			Speech5[] = {"CeaseFire"};
		};
	};
	class VehicleForward {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_FORWARD_1";
			Speech9[] = {"XMIT","Forward"};
			Speech5[] = {"XMIT","Forward"};
		};
	};
	class VehicleStop {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_STOP_1";
			Speech9[] = {"XMIT","Halt"};
			Speech5[] = {"XMIT","Halt"};
		};
	};
	class VehicleBackward {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_BACKWARD_1";
			Speech9[] = {"XMIT","reverse"};
			Speech5[] = {"XMIT","reverse"};
		};
	};
	class VehicleFaster {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_FASTER_1";
			Speech9[] = {"XMIT","Fast"};
			Speech5[] = {"XMIT","Fast"};
		};
	};
	class VehicleSlower {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_SLOWER_1";
			Speech9[] = {"XMIT","Slow"};
			Speech5[] = {"XMIT","Slow"};
		};
	};
	class VehicleLeft {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_LEFT_1";
			Speech9[] = {"XMIT","Left"};
			Speech5[] = {"XMIT","Left"};
		};
	};
	class VehicleRight {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_RIGHT_1";
			Speech9[] = {"XMIT","Right"};
			Speech5[] = {"XMIT","Right"};
		};
	};
	class VehicleDirectFire {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_DIRECT_FIRE_1";
			Speech9[] = {"Fire"};
			Speech5[] = {"Fire"};
		};
	};
	class VehicleLoad {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_LOAD_1";
			Speech9[] = {"%1"};
			Speech5[] = {"%1"};
		};
	};
	class VehicleAzimut {
		versions[] = {"Version1"};
		class Version1 {
			text = "$STR_SENT_VEHICLE_AZIMUT_1";
			Speech9[] = {"%1"};
			Speech5[] = {"%1"};
		};
	};
	class VehicleFireFailed {
		versions[] = {"Version1",0.5,"Version2",0.5};
		class Version1 {
			text = "$STR_SENT_VEHICLE_FIRE_FAILED_1";
			Speech9[] = {"Negative"};
			Speech5[] = {"Negative"};
		};
		class Version2 {
			text = "$STR_SENT_VEHICLE_FIRE_FAILED_2";
			Speech9[] = {"CannotFire"};
			Speech5[] = {"CannotFire"};
		};
	};
};
class RscMainMenu {
	access = 3;
	title = "$STR_COMMAND";
	atomic = 0;
	items[] = {"Move","Target","Engage","GetIn","Status","Action","CombatMode","Formations","Team","Reply","HideMenu"};
	class Move {
		title = "$STR_MOVE";
		key = 2;
		character = 1;
		command = -2;
		menu = "RscMoveHigh";
	};
	class Target {
		title = "$STR_WATCH_TARGET";
		key = 3;
		character = 2;
		command = "cmd_watch";
	};
	class Engage {
		title = "$STR_WATCH";
		key = 4;
		character = 3;
		command = -2;
		menu = "RscWatchDir";
	};
	class GetIn {
		title = "$STR_GETIN";
		key = 5;
		character = 4;
		command = "cmd_getin";
	};
	class Status {
		title = "$STR_STATUS";
		key = 6;
		character = 5;
		menu = "RscStatus";
		Command = -2;
	};
	class Action {
		title = "$STR_ACTION";
		key = 7;
		character = 6;
		command = "cmd_action";
	};
	class CombatMode {
		title = "$STR_COMBAT_MODE";
		key = 8;
		character = 7;
		command = -2;
		menu = "RscCombatMode";
	};
	class Formations {
		title = "$STR_FORMATION";
		key = 9;
		character = 8;
		command = -2;
		menu = "RscFormations";
	};
	class Team {
		title = "$STR_TEAM";
		key = 10;
		character = 9;
		command = -2;
		menu = "RscTeam";
	};
	class Reply {
		title = "$STR_REPLY";
		key = 11;
		character = 0;
		command = -2;
		menu = "RscReply";
	};
	class HideMenu {
		title = "";
		key = 14;
		character = "Backspace";
		command = -3;
	};
};
class RscSubmenu {
	access = 3;
	atomic = 0;
	class Back {
		title = "";
		key = 14;
		character = "Backspace";
		command = -4;
	};
	class Separator {
		title = "";
		key = 0;
		character = 0;
		command = -1;
	};
};
class RscMoveHigh: RscSubmenu {
	title = "$STR_MOVE_DIR";
	items[] = {"Join","Advance","StayBack","FlankLeft","FlankRight","Separator","Stop","Expect","Hide","Separator","NextWP","Separator","Other","Back"};
	class Join {
		title = "$STR_FOLLOW_ME";
		key = 2;
		character = 1;
		command = "cmd_join";
	};
	class Advance {
		title = "$STR_ADVANCE";
		key = 3;
		character = 2;
		command = "cmd_advance";
	};
	class StayBack {
		title = "$STR_STAY_BACK";
		key = 4;
		character = 3;
		command = "cmd_stay_back";
	};
	class FlankLeft {
		title = "$STR_FLANK_LEFT";
		key = 5;
		character = 4;
		command = "cmd_flank_left";
	};
	class FlankRight {
		title = "$STR_FLANK_RIGHT";
		key = 6;
		character = 5;
		command = "cmd_flank_right";
	};
	class Stop {
		title = "$STR_STOP";
		key = 7;
		character = 6;
		command = "cmd_stop";
	};
	class Expect {
		title = "$STR_EXPECT";
		key = 8;
		character = 7;
		command = "cmd_expect";
	};
	class Hide {
		title = "$STR_HIDE";
		key = 9;
		character = 8;
		command = "cmd_hide";
	};
	class NextWP {
		title = "$STR_NEXT_WAYPOINT";
		key = 10;
		character = 9;
		command = "cmd_next_waypoint";
	};
	class Other {
		title = "$STR_MOVE_OTHER";
		key = 11;
		character = 0;
		command = "cmd_move_submenu";
		menu = "RscMoveDir";
	};
};
class RscMoveDir: RscSubmenu {
	atomic = 1;
	title = "$STR_MOVE_DIR";
	items[] = {"N","NE","E","SE","S","SW","W","NW","Back"};
	class N {
		title = "$STR_MOVE_N";
		key = 2;
		character = 1;
		command = -2;
		menu = "RscMoveDist";
	};
	class NE {
		title = "$STR_MOVE_NE";
		key = 3;
		character = 2;
		command = -2;
		menu = "RscMoveDist";
	};
	class E {
		title = "$STR_MOVE_E";
		key = 4;
		character = 3;
		command = -2;
		menu = "RscMoveDist";
	};
	class SE {
		title = "$STR_MOVE_SE";
		key = 5;
		character = 4;
		command = -2;
		menu = "RscMoveDist";
	};
	class S {
		title = "$STR_MOVE_S";
		key = 6;
		character = 5;
		command = -2;
		menu = "RscMoveDist";
	};
	class SW {
		title = "$STR_MOVE_SW";
		key = 7;
		character = 6;
		command = -2;
		menu = "RscMoveDist";
	};
	class W {
		title = "$STR_MOVE_W";
		key = 8;
		character = 7;
		command = -2;
		menu = "RscMoveDist";
	};
	class NW {
		title = "$STR_MOVE_NW";
		key = 9;
		character = 8;
		command = -2;
		menu = "RscMoveDist";
	};
};
class RscReply: RscSubmenu {
	title = "$STR_REPLY_MENU";
	items[] = {"Done","Fail","FireReady","FireNotReady","Repeat","Copy","UserRadio","Radio","Back"};
	class Done {
		title = "$STR_REPLY_DONE";
		key = 2;
		character = 1;
		command = "cmd_reply_done";
	};
	class Fail {
		title = "$STR_REPLY_FAIL";
		key = 3;
		character = 2;
		command = "cmd_reply_fail";
	};
	class FireReady {
		title = "$STR_REPLY_FIREREADY";
		key = 4;
		character = 3;
		command = "cmd_reply_fireready";
	};
	class FireNotReady {
		title = "$STR_REPLY_FIRENOTREADY";
		key = 5;
		character = 4;
		command = "cmd_reply_firenotready";
	};
	class Repeat {
		title = "$STR_REPLY_REPEAT";
		key = 8;
		character = 7;
		command = "cmd_reply_repeat";
	};
	class Copy {
		title = "$STR_REPLY_COPY";
		key = 9;
		character = 8;
		command = "cmd_reply_copy";
	};
	class UserRadio {
		title = "$STR_RADIO_CUSTOM";
		key = 10;
		character = 9;
		command = "cmd_radio_custom";
		menu = "RscUserRadio";
	};
	class Radio {
		title = "$STR_RADIO";
		key = 11;
		character = 0;
		command = -2;
		menu = "RscRadio";
	};
};
class RscCallSupport: RscSubmenu {
	title = "$STR_SUPPORT_MENU";
	items[] = {"Medic","Repair","Rearm","Refuel","Done","Back"};
	class Medic {
		title = "$STR_SUPPORT_MEDIC";
		key = 2;
		character = 1;
		command = "cmd_support_medic";
	};
	class Repair {
		title = "$STR_SUPPORT_REPAIR";
		key = 3;
		character = 2;
		command = "cmd_support_repair";
	};
	class Rearm {
		title = "$STR_SUPPORT_REARM";
		key = 4;
		character = 3;
		command = "cmd_support_rearm";
	};
	class Refuel {
		title = "$STR_SUPPORT_REFUEL";
		key = 5;
		character = 4;
		command = "cmd_support_refuel";
	};
	class Done {
		title = "$STR_SUPPORT_DONE";
		key = 6;
		character = 5;
		command = "cmd_support_done";
	};
};
class RscStatus: RscSubmenu {
	title = "$STR_MENU_STATUS";
	items[] = {"Support","FuelLow","AmmoLow","Injured","WhereAreYou","Report","UnderFire","OneLess","IsDown","Back"};
	class Support {
		title = "$STR_CALL_SUPPORT";
		key = 2;
		character = 1;
		command = -2;
		menu = "RscCallSupport";
	};
	class FuelLow {
		title = "$STR_REPLY_FUEL_LOW";
		key = 3;
		character = 2;
		command = "cmd_reply_fuel_low";
	};
	class AmmoLow {
		title = "$STR_REPLY_AMMO_LOW";
		key = 4;
		character = 3;
		command = "cmd_reply_ammo_low";
	};
	class Injured {
		title = "$STR_REPLY_INJURED";
		key = 5;
		character = 4;
		command = "cmd_reply_injured";
	};
	class WhereAreYou {
		title = "$STR_REPLY_WHERE_ARE_YOU";
		key = 6;
		character = 5;
		command = "cmd_reply_where_are_you";
	};
	class Report {
		title = "$STR_REPORT";
		key = 6;
		character = 5;
		command = "cmd_report";
	};
	class UnderFire {
		title = "$STR_REPLY_UNDER_FIRE";
		key = 7;
		character = 6;
		command = "cmd_reply_under_fire";
	};
	class OneLess {
		title = "$STR_REPLY_ONE_LESS";
		key = 8;
		character = 7;
		command = "cmd_reply_one_less";
	};
	class IsDown {
		title = "$STR_REPLY_KILLED";
		key = 9;
		character = 8;
		command = "cmd_reply_killed";
	};
};
class RscWatchDir: RscSubmenu {
	title = "$STR_WATCH_DIR";
	items[] = {"OpenFire","HoldFire","Fire","Separator","Engage","EngageAtWill","Disengage","Separator","LookAround","WatchDir","Back"};
	class OpenFire {
		title = "$STR_OPEN_FIRE";
		key = 2;
		character = 1;
		command = "cmd_open_fire";
	};
	class HoldFire {
		title = "$STR_HOLD_FIRE";
		key = 3;
		character = 2;
		command = "cmd_hold_fire";
	};
	class Fire {
		title = "$STR_FIRE";
		key = 4;
		character = 3;
		command = "cmd_fire";
	};
	class Engage {
		title = "$STR_ENGAGE_NOW";
		key = 5;
		character = 4;
		command = "cmd_engage";
	};
	class EngageAtWill {
		title = "$STR_ENGAGE_AT_WILL";
		key = 6;
		character = 5;
		command = "cmd_loose_form";
	};
	class Disengage {
		title = "$STR_DISENGAGE";
		key = 7;
		character = 6;
		command = "cmd_keep_form";
	};
	class LookAround {
		title = "$STR_LOOK_AROUND";
		key = 8;
		character = 7;
		command = "cmd_watch_around";
	};
	class WatchDir {
		title = "$STR_WATCH_DIR";
		key = 9;
		character = 8;
		command = "cmd_watch_submenu";
		menu = "RscWatchMoreDir";
	};
};
class RscWatchMoreDir: RscSubmenu {
	title = "$STR_WATCH_DIR";
	atomic = 1;
	items[] = {"N","NE","E","SE","S","SW","W","NW","Back"};
	class N {
		title = "$STR_MOVE_N";
		key = 2;
		character = 1;
		command = "cmd_watch_n";
	};
	class NE {
		title = "$STR_MOVE_NE";
		key = 3;
		character = 2;
		command = "cmd_watch_ne";
	};
	class E {
		title = "$STR_MOVE_E";
		key = 4;
		character = 3;
		command = "cmd_watch_e";
	};
	class SE {
		title = "$STR_MOVE_SE";
		key = 5;
		character = 4;
		command = "cmd_watch_se";
	};
	class S {
		title = "$STR_MOVE_S";
		key = 6;
		character = 5;
		command = "cmd_watch_s";
	};
	class SW {
		title = "$STR_MOVE_SW";
		key = 7;
		character = 6;
		command = "cmd_watch_sw";
	};
	class W {
		title = "$STR_MOVE_W";
		key = 8;
		character = 7;
		command = "cmd_watch_w";
	};
	class NW {
		title = "$STR_MOVE_NW";
		key = 9;
		character = 8;
		command = "cmd_watch_nw";
	};
};
class RscMoveDist: RscSubmenu {
	title = "$STR_MOVE_DIST";
	items[] = {"D50","D100","D200","D500","D1000","D2000","Back"};
	class D50 {
		title = "$STR_MOVE_50";
		key = 2;
		character = 1;
		command = 4096;
	};
	class D100 {
		title = "$STR_MOVE_100";
		key = 3;
		character = 2;
		command = 4096;
	};
	class D200 {
		title = "$STR_MOVE_200";
		key = 4;
		character = 3;
		command = 4096;
	};
	class D500 {
		title = "$STR_MOVE_500";
		key = 5;
		character = 4;
		command = 4096;
	};
	class D1000 {
		title = "$STR_MOVE_1000";
		key = 6;
		character = 5;
		command = 4096;
	};
	class D2000 {
		title = "$STR_MOVE_2000";
		key = 7;
		character = 6;
		command = 4096;
	};
};
class RscFormations: RscSubmenu {
	title = "$STR_FORMATION";
	items[] = {"Column","Staggered","Wedge","EchL","EchR","Vee","Line","Back"};
	class Column {
		title = "$STR_COLUMN";
		key = 2;
		character = 1;
		command = "cmd_form_column";
	};
	class Staggered {
		title = "$STR_STAGGERED";
		key = 3;
		character = 2;
		command = "cmd_form_stagcol";
	};
	class Wedge {
		title = "$STR_WEDGE";
		key = 4;
		character = 3;
		command = "cmd_form_wedge";
	};
	class EchL {
		title = "$STR_ECHL";
		key = 5;
		character = 4;
		command = "cmd_form_echleft";
	};
	class EchR {
		title = "$STR_ECHR";
		key = 6;
		character = 5;
		command = "cmd_form_echright";
	};
	class Vee {
		title = "$STR_VEE";
		key = 7;
		character = 6;
		command = "cmd_form_vee";
	};
	class Line {
		title = "$STR_LINE";
		key = 8;
		character = 7;
		command = "cmd_form_line";
	};
};
class RscCombatMode: RscSubmenu {
	title = "$STR_COMBAT_MODE";
	items[] = {"Stealth","Combat","Aware","Safe","Separator","PosUp","PosDown","PosAuto","Separator","Back"};
	class Stealth {
		title = "$STR_STEALTH";
		key = 2;
		character = 1;
		command = "cmd_stealth";
	};
	class Combat {
		title = "$STR_COMBAT";
		key = 3;
		character = 2;
		command = "cmd_combat";
	};
	class Aware {
		title = "$STR_AWARE";
		key = 4;
		character = 3;
		command = "cmd_aware";
	};
	class Safe {
		title = "$STR_SAFE";
		key = 5;
		character = 4;
		command = "cmd_safe";
	};
	class PosUp {
		title = "$STR_POS_UP";
		key = 6;
		character = 5;
		command = "cmd_pos_up";
	};
	class PosDown {
		title = "$STR_POS_DOWN";
		key = 7;
		character = 6;
		command = "cmd_pos_down";
	};
	class PosAuto {
		title = "$STR_POS_AUTO";
		key = 8;
		character = 7;
		command = "cmd_pos_auto";
	};
};
class RscTeam: RscSubmenu {
	title = "$STR_TEAM";
	items[] = {"Red","Green","Blue","Yellow","Main","Separator","Assign","Back"};
	class Red {
		title = "$STR_TEAM_RED";
		key = 2;
		character = 1;
		command = "cmd_team_red";
	};
	class Green {
		title = "$STR_TEAM_GREEN";
		key = 3;
		character = 2;
		command = "cmd_team_green";
	};
	class Blue {
		title = "$STR_TEAM_BLUE";
		key = 4;
		character = 3;
		command = "cmd_team_blue";
	};
	class Yellow {
		title = "$STR_TEAM_YELLOW";
		key = 5;
		character = 4;
		command = "cmd_team_yellow";
	};
	class Main {
		title = "$STR_TEAM_MAIN";
		key = 6;
		character = 5;
		command = "cmd_team_main";
	};
	class Assign {
		title = "$STR_ASSIGN";
		key = 10;
		character = 9;
		command = -2;
		menu = "RscAssign";
	};
};
class RscAssign: RscSubmenu {
	title = "$STR_ASSIGN";
	items[] = {"AssignRed","AssignGreen","AssignBlue","AssignYellow","AssignMain","Back"};
	class AssignRed {
		title = "$STR_ASSIGN_RED";
		key = 2;
		character = 1;
		command = "cmd_assign_red";
	};
	class AssignGreen {
		title = "$STR_ASSIGN_GREEN";
		key = 3;
		character = 2;
		command = "cmd_assign_green";
	};
	class AssignBlue {
		title = "$STR_ASSIGN_BLUE";
		key = 4;
		character = 3;
		command = "cmd_assign_blue";
	};
	class AssignYellow {
		title = "$STR_ASSIGN_YELLOW";
		key = 5;
		character = 4;
		command = "cmd_assign_yellow";
	};
	class AssignMain {
		title = "$STR_ASSIGN_MAIN";
		key = 6;
		character = 5;
		command = "cmd_assign_main";
	};
};
class RscRadio: RscSubmenu {
	title = "$STR_RADIO";
	items[] = {"Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliet","Back"};
	class Alpha {
		title = "$STR_RADIO_ALPHA";
		key = 2;
		character = 1;
		command = "cmd_radio_alpha";
	};
	class Bravo {
		title = "$STR_RADIO_BRAVO";
		key = 3;
		character = 2;
		command = "cmd_radio_bravo";
	};
	class Charlie {
		title = "$STR_RADIO_CHARLIE";
		key = 4;
		character = 3;
		command = "cmd_radio_charlie";
	};
	class Delta {
		title = "$STR_RADIO_DELTA";
		key = 5;
		character = 4;
		command = "cmd_radio_delta";
	};
	class Echo {
		title = "$STR_RADIO_ECHO";
		key = 6;
		character = 5;
		command = "cmd_radio_echo";
	};
	class Foxtrot {
		title = "$STR_RADIO_FOXTROT";
		key = 7;
		character = 6;
		command = "cmd_radio_foxtrot";
	};
	class Golf {
		title = "$STR_RADIO_GOLF";
		key = 8;
		character = 7;
		command = "cmd_radio_golf";
	};
	class Hotel {
		title = "$STR_RADIO_HOTEL";
		key = 9;
		character = 8;
		command = "cmd_radio_hotel";
	};
	class India {
		title = "$STR_RADIO_INDIA";
		key = 10;
		character = 9;
		command = "cmd_radio_india";
	};
	class Juliet {
		title = "$STR_RADIO_JULIET";
		key = 11;
		character = 0;
		command = "cmd_radio_juliet";
	};
};
class RscUserRadio: RscSubmenu {
	title = "$STR_RADIO_CUSTOM";
	atomic = 1;
	items[] = {"Back"};
};
class RscBackground {
	access = 3;
	type = 0;
	idc = -1;
	style = 80;
	x = 0.15;
	y = 0.15;
	w = 0.7;
	h = 0.7;
	text = "";
	colorBackground[] = {1,1,1,1};
	colorText[] = {0,0,0,0};
	font = "tahomaB24";
	sizeEx = 0;
};
class RscTitle {
	access = 3;
	type = 0;
	idc = -1;
	style = "32 + 					2";
	x = 0.15;
	y = 0.164;
	w = 0.7;
	h = 0.06;
	text = "";
	colorBackground[] = {1,1,1,1};
	colorText[] = {0.08,0.08,0.12,1};
	font = "tahomaB36";
	sizeEx = "1.0714 * 0.03";
};
class RscFrame {
	access = 3;
	type = 0;
	idc = -1;
	style = 64;
	text = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.08,0.08,0.12,0.75};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscGroupBox {
	access = 3;
	type = 0;
	idc = -1;
	style = 96;
	text = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,0};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscGroupBox2 {
	access = 3;
	type = 0;
	idc = -1;
	style = 112;
	text = "";
	colorBackground[] = {1,1,1,0.6};
	colorText[] = {0,0,0,0};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscText {
	access = 3;
	type = 0;
	idc = -1;
	style = 0;
	h = 0.04;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.08,0.08,0.12,0.75};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscPicture {
	access = 3;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "tahomaB24";
	sizeEx = 0;
};
class RscTilePicture {
	access = 3;
	type = 0;
	idc = -1;
	style = 144;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "tahomaB24";
	sizeEx = 0;
};
class RscHTML {
	access = 3;
	type = 9;
	idc = -1;
	style = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,1};
	colorBold[] = {0,0,0.2,1};
	colorLink[] = {0.4,0.4,0.8,1};
	colorLinkActive[] = {0.8,0.35,0.48,1};
	tooltipColorText[] = {0,0,0,1};
	tooltipColorBox[] = {0,0,0,0.5};
	tooltipColorShade[] = {1,1,0.7,1};
	class H1 {
		font = "courierNewB64";
		fontBold = "courierNewB64";
		sizeEx = 0.048;
	};
	class H2 {
		font = "courierNewB64";
		fontBold = "courierNewB64";
		sizeEx = "0.7 * 0.048";
	};
	class H3 {
		font = "courierNewB64";
		fontBold = "courierNewB64";
		sizeEx = "0.5 * 0.048";
	};
	class H4 {
		font = "courierNewB64";
		fontBold = "courierNewB64";
		sizeEx = "0.4 * 0.048";
	};
	class H5 {
		font = "garamond64";
		fontBold = "garamond64";
		sizeEx = "0.6 * 0.048";
	};
	class H6 {
		font = "AudreysHandI48";
		fontBold = "AudreysHandI48";
		sizeEx = "0.7 * 0.045";
	};
	class P {
		font = "courierNewB64";
		fontBold = "courierNewB64";
		sizeEx = "0.47 * 0.048";
	};
};
class RscButton {
	access = 3;
	type = 1;
	style = 2;
	w = 0.16;
	h = 0.06;
	colorText[] = {0.08,0.08,0.12,1};
	font = "tahomaB24";
	sizeEx = 0.02;
	default = 0;
	soundPush[] = {"ui\ui_ok",0.2,1};
	soundClick[] = {"",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
};
class RscButtonMap: RscButton {
	w = 0.12;
};
class RscButtonSmall: RscButton {
	w = 0.12;
};
class RscEdit {
	access = 3;
	type = 2;
	style = 0;
	h = 0.04;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.08,0.08,0.12,0.75};
	colorSelection[] = {1,1,1,0.25};
	font = "tahomaB24";
	sizeEx = 0.02;
	autocomplete = "";
};
class RscCombo {
	access = 3;
	type = 4;
	style = 0;
	h = 0.04;
	wholeHeight = 0.25;
	colorSelect[] = {0.35,0.38,0.36,1};
	colorText[] = {0.08,0.08,0.12,0.75};
	colorBackground[] = {0.35,0.38,0.36,0.75};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscListBox {
	access = 3;
	type = 5;
	style = 0;
	h = 0.25;
	colorSelect[] = {0.35,0.38,0.36,1};
	colorText[] = {0.08,0.08,0.12,0.75};
	font = "tahomaB24";
	sizeEx = 0.02;
	rowHeight = 0;
};
class RscTree {
	access = 3;
	type = 12;
	style = 0;
	colorBackground[] = {0.35,0.38,0.36,1};
	colorSelect[] = {0.08,0.08,0.12,1};
	colorText[] = {0.08,0.08,0.12,0.75};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscSliderH {
	access = 3;
	type = 3;
	style = 1;
	h = 0.028;
	color[] = {0.08,0.08,0.12,0.75};
};
class RscSliderV {
	access = 3;
	type = 3;
	style = 0;
	w = 0.021;
	color[] = {0.08,0.08,0.12,0.75};
};
class RscActiveText {
	access = 3;
	type = 11;
	style = 0;
	color[] = {0,0,0,1};
	colorActive[] = {1,1,1,1};
	font = "SteelfishB64";
	sizeEx = 0.05;
	soundEnter[] = {"ui\ui_over",0.2,1};
	soundPush[] = {"",0.2,1};
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	default = 0;
};
class RscMsgBox {
	access = 3;
	class Background: RscBackground {};
	class SubBackground: RscGroupBox2 {};
	class Text: RscText {
		style = 16;
		lineSpacing = 1;
	};
	class Button: RscButton {
		h = 0.05;
	};
	class ButtonOK: Button {
		idc = 1;
		text = "$STR_DISP_OK";
		soundClick[] = {"ui\ui_ok",0.2,1};
		default = 1;
	};
	class ButtonCancel: Button {
		idc = 2;
		soundClick[] = {"ui\ui_cc",0.2,1};
		text = "$STR_DISP_CANCEL";
		default = 1;
	};
};
class RscNotebookText: RscText {
	access = 3;
	colorText[] = {0.0,0.0,0.0,0.8};
};
class RscNotebookText12: RscNotebookText {
	access = 3;
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscNotebookText10: RscNotebookText {
	access = 3;
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscMapControl {
	access = 3;
	type = 0;
	idc = 51;
	style = 48;
	colorBackground[] = {1,1,1,1};
	colorText[] = {0,0,0,1};
	font = "courierNewB64";
	sizeEx = 0.048;
	colorSea[] = {0.56,0.8,0.98,0.5};
	colorForest[] = {0.6,0.8,0.2,0.5};
	colorCountlines[] = {0.65,0.45,0.27,0.5};
	colorCountlinesWater[] = {0,0.53,1,0.5};
	colorForestBorder[] = {0.4,0.8,0,1};
	colorNames[] = {0,0,0,1};
	colorInactive[] = {1,1,1,0.5};
	fontLabel = "tahomaB24";
	sizeExLabel = 0.02;
	fontGrid = "tahomaB36";
	sizeExGrid = "0.7 * 0.03";
	fontUnits = "tahomaB24";
	sizeExUnits = 0.02;
	fontNames = "courierNewB64";
	sizeExNames = "3.0 * 0.048";
	text = "podmapa.pac";
	class Tree {
		icon = "tree";
		color[] = {0,0,0,1};
		size = 16;
	};
	class SmallTree {
		icon = "small_tree";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Bush {
		icon = "bush";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Church {
		icon = "church";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Chapel {
		icon = "chapel";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Cross {
		icon = "cross";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Rock {
		icon = "rock";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Bunker {
		icon = "bunker";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Fortress {
		icon = "fortress";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Fountain {
		icon = "fountain";
		color[] = {0,0,1,1};
		size = 16;
	};
	class ViewTower {
		icon = "view-tower";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Lighthouse {
		icon = "lighthouse";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Quay {
		icon = "quay";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Fuelstation {
		icon = "fuelstation";
		color[] = {0,0,0,1};
		size = 16;
	};
	class Hospital {
		icon = "hospital";
		color[] = {1,0,0,1};
		size = 16;
	};
	class BusStop {
		icon = "\o\misc\busstop.paa";
		color[] = {0,0,1,1};
		size = 8;
	};
	class Waypoint {
		icon = "waypoint";
		color[] = {0,0,0,1};
		size = 24;
	};
	class WaypointCompleted {
		icon = "waypoint_2";
		color[] = {0,0,0,1};
		size = 24;
	};
};
class RscToolbox {
	access = 3;
	type = 6;
	style = 2;
	colorText[] = {0.0,0.0,0.0,0.4};
	color[] = {0.0,0.0,0.0,0.4};
	colorTextSelect[] = {0.0,0.0,0.0,0.8};
	colorSelect[] = {0.0,0.0,0.0,0.8};
	colorTextDisable[] = {0.0,0.0,0.0,0.2};
	colorDisable[] = {0.0,0.0,0.0,0.2};
	font = "tahomaB24";
	sizeEx = 0.02;
};
class RscNotebook {
	access = 3;
	movingEnable = 0;
	class BackgroundA: RscPicture {
		text = "notasA.pac";
		x = 0;
		y = 0;
		w = 0.4;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BackgroundB: RscPicture {
		text = "notasB.pac";
		x = 0.4;
		y = 0;
		w = 0.4;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BackgroundC: RscPicture {
		text = "notasC.pac";
		x = 0;
		y = 0.5;
		w = 0.4;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BackgroundD: RscPicture {
		text = "notasD.pac";
		x = 0.4;
		y = 0.5;
		w = 0.4;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BackgroundE: RscPicture {
		text = "notasE.pac";
		x = 0.8;
		y = 0;
		w = 0.2;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BackgroundF: RscPicture {
		text = "notasF.pac";
		x = 0.8;
		y = 0.5;
		w = 0.2;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BackgroundF2: RscPicture {
		text = "notasF2.pac";
		x = 0.8;
		y = 0.5;
		w = 0.2;
		h = 0.5;
		colorText[] = {1,1,1,1};
	};
	class BigFrame: RscFrame {
		x = 0.13;
		y = 0.137;
		w = 0.6;
		h = 0.75;
		colorText[] = {0.0,0.0,0.0,0.8};
	};
	class Weather: RscPicture {
		idc = 52;
		text = "bourka.paa";
		x = 0.84;
		y = 0.11;
		w = 0.06;
		h = 0.08;
	};
	class Position: RscNotebookText12 {
		idc = 53;
		style = 2;
		text = "";
		x = 0.9;
		y = 0.11;
		w = 0.058;
		h = 0.08;
	};
	class TimeFrame: RscFrame {
		colorText[] = {0.0,0.0,0.0,0.8};
		x = 0.84;
		y = 0.19;
		w = 0.118;
		h = 0.028;
	};
	class Time: RscNotebookText12 {
		idc = 54;
		style = 2;
		x = 0.84;
		y = 0.19;
		w = 0.118;
		h = 0.028;
		text = "";
	};
	class DateFrame: RscFrame {
		colorText[] = {0.0,0.0,0.0,0.8};
		x = 0.84;
		y = 0.228;
		w = 0.118;
		h = 0.028;
	};
	class Date: RscNotebookText10 {
		idc = 55;
		style = 2;
		x = 0.84;
		y = 0.228;
		w = 0.118;
		h = 0.028;
		text = "";
	};
};
class RscMap: RscNotebook {
	access = 3;
	class Map: RscMapControl {
		moveOnEdges = 0;
		x = 0.044;
		y = 0.1;
		w = 0.706;
		h = 0.858;
	};
};
class RscDisplay {
	access = 3;
};
class RscSkewBackground {
	access = 3;
	type = 10;
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 80;
	color[] = {1,1,1,1};
};
class RscSkewGroupBox {
	access = 3;
	type = 10;
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 96;
	color[] = {1,1,1,1};
};
class RscDisplayGame {
	idd = 1;
	movingEnable = 1;
	controls[] = {"Background","Title","Group","Subtitle","Selector","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.23;
		y = 0.13;
		w = 0.54;
		h = 0.54;
	};
	class Title: RscTitle {
		x = 0.23;
		y = 0.144;
		w = 0.54;
		text = "Testing load";
	};
	class Group: RscGroupBox2 {
		x = 0.27;
		y = 0.22;
		w = 0.45;
		h = 0.32;
	};
	class Subtitle: RscText {
		x = 0.3;
		y = 0.23;
		w = 0.3;
		text = "$STR_DISP_GAME_SELECT";
		sizeEx = 0.016;
	};
	class Selector: RscListBox {
		idc = 301;
		x = 0.3;
		y = 0.28;
		w = 0.4;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.3;
		y = 0.57;
		text = "$STR_DISP_OK";
		soundClick[] = {"ui\ui_ok",0.2,1};
		default = 1;
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.52;
		y = 0.57;
		soundClick[] = {"ui\ui_cc",0.2,1};
		text = "$STR_DISP_CANCEL";
	};
};
class RscDisplaySave {
	idd = 13;
	movingEnable = 1;
	controls[] = {"Background","Title","Group","Subtitle","GameName","ButtonOK"};
	class Background: RscBackground {
		x = 0.28;
		y = 0.2;
		w = 0.46;
		h = 0.35;
	};
	class Title: RscTitle {
		x = 0.28;
		y = 0.214;
		w = 0.46;
		text = "Testing save";
	};
	class Group: RscGroupBox2 {
		x = 0.3;
		y = 0.32;
		w = 0.4;
		h = 0.11;
	};
	class Subtitle: RscText {
		x = 0.32;
		y = 0.35;
		w = 0.2;
		text = "$STR_DISP_GAME_NAME";
	};
	class GameName: RscEdit {
		idc = 101;
		x = 0.4;
		y = 0.35;
		w = 0.25;
		text = "$STR_DISP_SAVE_NAME";
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.4;
		y = 0.45;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayInsertMarker {
	idd = 54;
	movingEnable = 0;
	controls[] = {"Picture","Text","ButtonOK"};
	class Picture: RscPicture {
		idc = 102;
		text = "";
		x = 0;
		y = 0;
		w = 0.05;
		h = "0.05 * 4 / 3";
		colorText[] = {0,0,0,1};
	};
	class Text: RscEdit {
		idc = 101;
		x = 0.04;
		y = 0;
		w = 0.15;
		h = 0.04;
		text = "";
	};
	class ButtonOK: RscActiveText {
		idc = 1;
		x = 0;
		y = 0;
		w = 0;
		h = 0;
		text = "";
		default = 1;
	};
};
class RscDisplayCustomArcade {
	idd = 25;
	movingEnable = 1;
	controls[] = {"Background","SubBackground","Title","Game","ButtonEdit","ButtonDelete","ButtonPlay","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.1;
		w = 0.6;
		h = 0.8;
	};
	class Title: RscTitle {
		x = 0.2;
		y = 0.118;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_MAIN_DESIGN";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.2;
		w = 0.56;
		h = 0.6;
	};
	class Game: RscTree {
		idc = 101;
		style = 2;
		x = 0.24;
		y = 0.22;
		w = 0.52;
		h = 0.56;
	};
	class ButtonEdit: RscButtonSmall {
		idc = 103;
		x = 0.22;
		y = 0.82;
		w = 0.12;
		h = 0.05;
		text = "$STR_DISP_ERROR";
	};
	class ButtonDelete: RscButtonSmall {
		idc = 104;
		x = 0.36;
		y = 0.82;
		w = 0.12;
		h = 0.05;
		text = "$STR_DISP_DELETE";
	};
	class ButtonPlay: RscButtonSmall {
		idc = 102;
		x = 0.52;
		y = 0.82;
		w = 0.12;
		h = 0.05;
		text = "$STR_DISP_CUST_PLAY";
		default = 1;
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.66;
		y = 0.82;
		w = 0.12;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
	};
};
class RscDisplayArcadeMap: RscMap {
	idd = 26;
	controls[] = {"BackgroundA","BackgroundB","BackgroundC","BackgroundD","BackgroundE","BackgroundF","BigFrame","Weather","Position","TimeFrame","Time","DateFrame","Date","Map","ToolboxMode","Difficulty","ButtonIntel","ButtonLoad","ButtonMerge","ButtonSave","ButtonClear","Section","ButtonIds","ButtonTextures","ButtonPreview","ButtonContinue","ButtonCancel"};
	class ToolboxMode: RscToolbox {
		idc = 104;
		x = 0.097;
		y = 0.014;
		w = 0.689;
		h = 0.038;
		strings[] = {"$STR_DISP_ARCMAP_UNITS","$STR_DISP_ARCMAP_GROUPS","$STR_DISP_ARCMAP_SENSORS","$STR_DISP_ARCMAP_WAYPOINTS","$STR_DISP_ARCMAP_SYNCHRONIZE","$STR_DISP_ARCMAP_MARKERS"};
		rows = 1;
		columns = 6;
	};
	class Difficulty: RscActiveText {
		idc = 110;
		style = 2;
		font = "SteelfishB64";
		sizeEx = 0.05;
		x = 0.81;
		y = 0.01;
		w = 0.15;
		h = 0.04;
		text = "$STR_DISP_ERROR";
		color[] = {0.8,0.8,0.8,1};
		colorActive[] = {0.8,0.8,0,1};
	};
	class ButtonIntel: RscActiveText {
		idc = 105;
		x = 0.834;
		y = 0.114;
		w = 0.134;
		h = 0.153;
		text = "";
		color[] = {0.08,0.08,0.12,1};
		colorActive[] = {0.08,0.08,0.12,1};
	};
	class ButtonLoad: RscButtonMap {
		idc = 101;
		x = 0.834;
		y = 0.32;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_LOAD";
	};
	class ButtonMerge: RscButtonMap {
		idc = 106;
		x = 0.834;
		y = 0.38;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_MERGE";
	};
	class ButtonSave: RscButtonMap {
		idc = 102;
		x = 0.834;
		y = 0.44;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_SAVE";
	};
	class ButtonClear: RscButtonMap {
		idc = 103;
		x = 0.834;
		y = 0.5;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_CLEAR";
	};
	class Section: RscCombo {
		idc = 109;
		x = 0.834;
		y = 0.56;
		w = 0.13;
		h = 0.03;
		wholeHeight = 0.12;
		colorText[] = {1,1,1,0.75};
	};
	class ButtonIds: RscButtonMap {
		idc = 111;
		x = 0.834;
		y = 0.62;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ERROR";
	};
	class ButtonTextures: RscButtonMap {
		idc = 112;
		x = 0.834;
		y = 0.68;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ERROR";
	};
	class ButtonPreview: RscButtonMap {
		idc = 107;
		x = 0.834;
		y = 0.755;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_PREVIEW";
		default = 1;
	};
	class ButtonContinue: RscButtonMap {
		idc = 108;
		x = 0.834;
		y = 0.815;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_CONTINUE";
	};
	class ButtonCancel: RscButtonMap {
		idc = 2;
		x = 0.834;
		y = 0.875;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCMAP_EXIT";
	};
};
class RscDisplayArcadeUnit {
	idd = 27;
	movingEnable = 1;
	controls[] = {"Background","Subbackground","Title","TextSide","ValueSide","TextRank","ValueRank","TextClass","ValueClass","TextVehicle","ValueVehicle","TextControl","ValueControl","TextSpecial","ValueSpecial","TextAge","ValueAge","TextText","ValueText","TextLock","ValueLock","TextSkill","ValueSkill","TextInit","ValueInit","Subbackground1","TextAzimut","ValueAzimut","Azimut","SubtitleVisuals","ValueHealth","SubtitleVisuals1","ValueFuel","SubtitleVisuals2","ValueAmmo","TextPresence","ValuePresence","TextPresenceCondition","ValuePresenceCondition","TextPlacement","ValuePlacement","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.05;
		w = 0.56;
		h = 0.91;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.068;
		w = 0.56;
		h = 0.06;
		text = "$STR_DISP_ERROR";
	};
	class TextSide: RscText {
		idc = -1;
		x = 0.23;
		y = 0.16;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_SIDE";
	};
	class ValueSide: RscCombo {
		idc = 102;
		x = 0.3182;
		y = 0.16;
		w = 0.1519;
	};
	class TextRank: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.16;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_RANK";
	};
	class ValueRank: RscCombo {
		idc = 104;
		x = 0.5681;
		y = 0.16;
		w = 0.1519;
	};
	class TextClass: RscText {
		idc = -1;
		x = 0.23;
		y = 0.21;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_CLASS";
	};
	class ValueClass: RscCombo {
		idc = 107;
		x = 0.3182;
		y = 0.21;
		w = 0.1519;
	};
	class TextVehicle: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.21;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_VEHICLE";
	};
	class ValueVehicle: RscCombo {
		idc = 103;
		x = 0.5681;
		y = 0.21;
		w = 0.1519;
	};
	class TextControl: RscText {
		idc = -1;
		x = 0.23;
		y = 0.26;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_CTRL";
	};
	class ValueControl: RscCombo {
		idc = 105;
		x = 0.3182;
		y = 0.26;
		w = 0.1519;
	};
	class TextSpecial: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.26;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_SPECIAL";
	};
	class ValueSpecial: RscCombo {
		idc = 112;
		x = 0.5681;
		y = 0.26;
		w = 0.1519;
	};
	class TextAge: RscText {
		idc = -1;
		x = 0.23;
		y = 0.31;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_AGE";
	};
	class ValueAge: RscCombo {
		idc = 113;
		x = 0.3182;
		y = 0.31;
		w = 0.1519;
	};
	class TextText: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.31;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_TEXT";
	};
	class ValueText: RscEdit {
		idc = 118;
		x = 0.5681;
		y = 0.31;
		w = 0.1519;
		text = "$STR_DISP_ERROR";
	};
	class TextLock: RscText {
		idc = -1;
		x = 0.23;
		y = 0.36;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_LOCK";
	};
	class ValueLock: RscCombo {
		idc = 119;
		x = 0.3182;
		y = 0.36;
		w = 0.1519;
	};
	class TextSkill: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.36;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_SKILL";
	};
	class ValueSkill: RscSliderH {
		idc = 121;
		x = 0.5681;
		y = 0.37;
		w = 0.1519;
	};
	class TextInit: RscText {
		idc = -1;
		x = 0.23;
		y = 0.41;
		w = 0.1225;
		text = "$STR_DISP_ARCUNIT_INIT";
	};
	class ValueInit: RscEdit {
		idc = 120;
		x = 0.3525;
		y = 0.41;
		w = 0.3675;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.15;
		w = 0.515;
		h = 0.31;
	};
	class Azimut: RscPicture {
		idc = 114;
		text = "azimut.paa";
		x = 0.5525;
		y = 0.473;
		w = 0.2;
		h = 0.26;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class TextAzimut: RscText {
		x = 0.595;
		y = 0.575;
		w = 0.15;
		text = "$STR_DISP_ARCUNIT_AZIMUT";
	};
	class ValueAzimut: RscEdit {
		idc = 111;
		x = 0.665;
		y = 0.575;
		w = 0.04;
		text = "$STR_DISP_ERROR";
	};
	class SubtitleVisuals: RscFrame {
		x = 0.235;
		y = 0.485;
		w = 0.335;
		h = 0.07;
		text = "$STR_DISP_ARCUNIT_HEALTH";
	};
	class ValueHealth: RscSliderH {
		idc = 108;
		x = 0.2425;
		y = 0.52;
		w = 0.32;
	};
	class SubtitleVisuals1: RscFrame {
		x = 0.235;
		y = 0.555;
		w = 0.335;
		h = 0.07;
		text = "$STR_DISP_ARCUNIT_FUEL";
	};
	class ValueFuel: RscSliderH {
		idc = 109;
		x = 0.2425;
		y = 0.59;
		w = 0.32;
	};
	class SubtitleVisuals2: RscFrame {
		x = 0.235;
		y = 0.625;
		w = 0.335;
		h = 0.07;
		text = "$STR_DISP_ARCUNIT_AMMO";
	};
	class ValueAmmo: RscSliderH {
		idc = 110;
		x = 0.235;
		y = 0.66;
		w = 0.32;
	};
	class TextPresence: RscText {
		idc = -1;
		x = 0.23;
		y = 0.71;
		w = 0.1862;
		text = "$STR_DISP_ARCUNIT_PRESENCE";
	};
	class ValuePresence: RscSliderH {
		idc = 116;
		x = 0.4162;
		y = 0.72;
		w = 0.3038;
	};
	class TextPresenceCondition: RscText {
		idc = -1;
		x = 0.23;
		y = 0.76;
		w = 0.1862;
		text = "$STR_DISP_ARCUNIT_PRESENCE_COND";
	};
	class ValuePresenceCondition: RscEdit {
		idc = 117;
		x = 0.4162;
		y = 0.76;
		w = 0.3038;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class TextPlacement: RscText {
		idc = -1;
		x = 0.23;
		y = 0.81;
		w = 0.1862;
		text = "$STR_DISP_ARCUNIT_PLACE";
	};
	class ValuePlacement: RscEdit {
		idc = 115;
		x = 0.4162;
		y = 0.81;
		w = 0.3038;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground1: RscGroupBox2 {
		x = 0.22;
		y = 0.48;
		w = 0.515;
		h = 0.38;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.462;
		y = 0.885;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.607;
		y = 0.885;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeUnitSimple {
	idd = 27;
	movingEnable = 1;
	controls[] = {"Background","Subbackground","Title","TextSide","ValueSide","TextClass","ValueClass","TextVehicle","ValueVehicle","TextSkill","ValueSkill","TextControl","ValueControl","Subbackground1","TextAzimut","ValueAzimut","Azimut","SubtitleVisuals","ValueHealth","SubtitleVisuals1","ValueFuel","SubtitleVisuals2","ValueAmmo","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.19;
		w = 0.56;
		h = 0.61;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.208;
		w = 0.56;
		h = 0.06;
		text = "$STR_DISP_ERROR";
	};
	class TextSide: RscText {
		idc = -1;
		x = 0.23;
		y = 0.3;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_SIDE";
	};
	class ValueSide: RscCombo {
		idc = 102;
		x = 0.3182;
		y = 0.3;
		w = 0.1519;
	};
	class TextSkill: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.3;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_SKILL";
	};
	class ValueSkill: RscSliderH {
		idc = 121;
		x = 0.5681;
		y = 0.31;
		w = 0.1519;
	};
	class TextClass: RscText {
		idc = -1;
		x = 0.23;
		y = 0.35;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_CLASS";
	};
	class ValueClass: RscCombo {
		idc = 107;
		x = 0.3182;
		y = 0.35;
		w = 0.1519;
	};
	class TextControl: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.35;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_CTRL";
	};
	class ValueControl: RscCombo {
		idc = 105;
		x = 0.5681;
		y = 0.35;
		w = 0.1519;
	};
	class TextVehicle: RscText {
		idc = -1;
		x = 0.23;
		y = 0.4;
		w = 0.0882;
		text = "$STR_DISP_ARCUNIT_VEHICLE";
	};
	class ValueVehicle: RscCombo {
		idc = 103;
		x = 0.3182;
		y = 0.4;
		w = 0.1519;
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.29;
		w = 0.515;
		h = 0.16;
	};
	class Azimut: RscPicture {
		idc = 114;
		text = "azimut.paa";
		x = 0.5525;
		y = 0.463;
		w = 0.2;
		h = 0.26;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class TextAzimut: RscText {
		x = 0.595;
		y = 0.565;
		w = 0.15;
		text = "$STR_DISP_ARCUNIT_AZIMUT";
	};
	class ValueAzimut: RscEdit {
		idc = 111;
		x = 0.665;
		y = 0.565;
		w = 0.04;
		text = "$STR_DISP_ERROR";
	};
	class SubtitleVisuals: RscFrame {
		x = 0.235;
		y = 0.475;
		w = 0.335;
		h = 0.07;
		text = "$STR_DISP_ARCUNIT_HEALTH";
	};
	class ValueHealth: RscSliderH {
		idc = 108;
		x = 0.2425;
		y = 0.51;
		w = 0.32;
	};
	class SubtitleVisuals1: RscFrame {
		x = 0.235;
		y = 0.545;
		w = 0.335;
		h = 0.07;
		text = "$STR_DISP_ARCUNIT_FUEL";
	};
	class ValueFuel: RscSliderH {
		idc = 109;
		x = 0.2425;
		y = 0.58;
		w = 0.32;
	};
	class SubtitleVisuals2: RscFrame {
		x = 0.235;
		y = 0.615;
		w = 0.335;
		h = 0.07;
		text = "$STR_DISP_ARCUNIT_AMMO";
	};
	class ValueAmmo: RscSliderH {
		idc = 110;
		x = 0.235;
		y = 0.65;
		w = 0.32;
	};
	class SubBackground1: RscGroupBox2 {
		x = 0.22;
		y = 0.47;
		w = 0.515;
		h = 0.23;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.462;
		y = 0.725;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.607;
		y = 0.725;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeGroup {
	idd = 40;
	movingEnable = 1;
	controls[] = {"Background","Title","Subbackground","TextSide","ValueSide","TextType","ValueType","TextName","ValueName","Azimut","TextAzimut","ValueAzimut","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.3;
		w = 0.6;
		h = 0.41;
	};
	class Title: RscTitle {
		idc = -1;
		x = 0.2;
		y = 0.318;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_ARCGRP_TITLE";
	};
	class Azimut: RscPicture {
		idc = 105;
		text = "azimut.paa";
		x = 0.59;
		y = 0.382;
		w = 0.2;
		h = 0.26;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class TextAzimut: RscText {
		x = 0.6325;
		y = 0.484;
		w = 0.15;
		text = "$STR_DISP_ARCUNIT_AZIMUT";
	};
	class ValueAzimut: RscEdit {
		idc = 104;
		x = 0.7025;
		y = 0.484;
		w = 0.04;
		text = "$STR_DISP_ERROR";
	};
	class TextSide: RscText {
		idc = -1;
		x = 0.23;
		y = 0.41;
		w = 0.1325;
		text = "$STR_DISP_ARCGRP_SIDE";
	};
	class ValueSide: RscCombo {
		idc = 101;
		x = 0.3625;
		y = 0.41;
		w = 0.2385;
	};
	class TextType: RscText {
		idc = -1;
		x = 0.23;
		y = 0.46;
		w = 0.1325;
		text = "$STR_DISP_ARCGRP_TYPE";
	};
	class ValueType: RscCombo {
		idc = 102;
		x = 0.3625;
		y = 0.46;
		w = 0.2385;
	};
	class TextName: RscText {
		idc = -1;
		x = 0.23;
		y = 0.51;
		w = 0.1325;
		text = "$STR_DISP_ARCGRP_NAME";
	};
	class ValueName: RscCombo {
		idc = 103;
		x = 0.3625;
		y = 0.51;
		w = 0.2385;
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.4;
		w = 0.555;
		h = 0.21;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.502;
		y = 0.635;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.647;
		y = 0.635;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeMarker {
	idd = 45;
	movingEnable = 1;
	controls[] = {"Background","SubBackground","Title","TextName","ValueName","Marker","TextColorName","ValueColorName","TextType","ValueIcon","ValueFill","TextA","ValueA","TextB","ValueB","TextAngle","ValueAngle","TextText","ValueText","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.2;
		w = 0.6;
		h = 0.46;
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.3;
		w = 0.56;
		h = 0.26;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.218;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_ERROR";
	};
	class TextName: RscText {
		x = 0.23;
		y = 0.32;
		w = 0.07;
		text = "$STR_DISP_ARCMARK_NAME";
	};
	class ValueName: RscEdit {
		idc = 102;
		x = 0.3;
		y = 0.32;
		w = 0.19;
		text = "$STR_DISP_ERROR";
	};
	class Marker: RscToolbox {
		idc = 103;
		x = 0.51;
		y = 0.32;
		w = 0.26;
		h = 0.038;
		strings[] = {"$STR_DISP_ARCMARK_ICON","$STR_DISP_ARCMARK_RECT","$STR_DISP_ARCMARK_ELLIPSE"};
		rows = 1;
		columns = 3;
	};
	class TextColorName: RscText {
		x = 0.23;
		y = 0.38;
		w = 0.07;
		text = "$STR_DISP_ARCMARK_COLOR";
	};
	class ValueColorName: RscCombo {
		idc = 105;
		x = 0.3;
		y = 0.38;
		w = 0.19;
	};
	class TextType: RscText {
		idc = 109;
		x = 0.51;
		y = 0.38;
		w = 0.07;
		text = "$STR_DISP_ERROR";
	};
	class ValueIcon: RscCombo {
		idc = 104;
		x = 0.58;
		y = 0.38;
		w = 0.19;
	};
	class ValueFill: RscCombo {
		idc = 110;
		x = 0.58;
		y = 0.38;
		w = 0.19;
	};
	class TextA: RscText {
		x = 0.23;
		y = 0.44;
		w = 0.07;
		text = "$STR_DISP_ARCMARK_A";
	};
	class ValueA: RscEdit {
		idc = 106;
		x = 0.3;
		y = 0.44;
		w = 0.09;
		text = "$STR_DISP_ERROR";
	};
	class TextB: RscText {
		x = 0.4;
		y = 0.44;
		w = 0.07;
		text = "$STR_DISP_ARCMARK_B";
	};
	class ValueB: RscEdit {
		idc = 107;
		x = 0.47;
		y = 0.44;
		w = 0.09;
		text = "$STR_DISP_ERROR";
	};
	class TextAngle: RscText {
		x = 0.57;
		y = 0.44;
		w = 0.07;
		text = "$STR_DISP_ARCMARK_ANGLE";
	};
	class ValueAngle: RscEdit {
		idc = 108;
		x = 0.64;
		y = 0.44;
		w = 0.09;
		text = "$STR_DISP_ERROR";
	};
	class TextText: RscText {
		x = 0.23;
		y = 0.5;
		w = 0.07;
		text = "$STR_DISP_ARCMARK_TEXT";
	};
	class ValueText: RscEdit {
		idc = 111;
		x = 0.3;
		y = 0.5;
		w = 0.43;
		text = "$STR_DISP_ERROR";
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.5;
		y = 0.585;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.647;
		y = 0.585;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeMarkerSimple {
	idd = 45;
	movingEnable = 1;
	controls[] = {"Background","SubBackground","Title","TextName","ValueName","TextColorName","ValueColorName","TextType","ValueIcon","TextText","ValueText","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.32;
		w = 0.6;
		h = 0.36;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.338;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_ERROR";
	};
	class TextName: RscText {
		idc = -1;
		x = 0.23;
		y = 0.43;
		w = 0.0954;
		text = "$STR_DISP_ARCMARK_NAME";
	};
	class ValueName: RscEdit {
		idc = 102;
		x = 0.3254;
		y = 0.43;
		w = 0.4346;
		text = "$STR_DISP_ERROR";
	};
	class TextColorName: RscText {
		idc = -1;
		x = 0.23;
		y = 0.48;
		w = 0.0954;
		text = "$STR_DISP_ARCMARK_COLOR";
	};
	class ValueColorName: RscCombo {
		idc = 105;
		x = 0.3254;
		y = 0.48;
		w = 0.1643;
	};
	class TextType: RscText {
		idc = 109;
		x = 0.5003;
		y = 0.48;
		w = 0.0954;
		text = "$STR_DISP_ERROR";
	};
	class ValueIcon: RscCombo {
		idc = 104;
		x = 0.5957;
		y = 0.48;
		w = 0.1643;
	};
	class TextText: RscText {
		idc = -1;
		x = 0.23;
		y = 0.53;
		w = 0.0954;
		text = "$STR_DISP_ARCMARK_TEXT";
	};
	class ValueText: RscEdit {
		idc = 111;
		x = 0.3254;
		y = 0.53;
		w = 0.4346;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.42;
		w = 0.555;
		h = 0.16;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.502;
		y = 0.605;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.647;
		y = 0.605;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeSensor {
	idd = 41;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground1","TextA","ValueA","TextB","ValueB","TextAngle","ValueAngle","Rectangular","SubBackground2","TextActivation","ValueActivation","Presence","Repeating","Interruptable","TextTimeoutMin","ValueTimeoutMin","TextTimeoutMax","ValueTimeoutMax","TextTimeoutMid","ValueTimeoutMid","SubBackground3","TextType","ValueType","TextText","ValueText","TextName","ValueName","SubBackground4","TextExpCond","ValueExpCond","TextExpActiv","ValueExpActiv","TextExpDesactiv","ValueExpDesactiv","ButtonEffects","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.1;
		w = 0.56;
		h = 0.86;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.118;
		w = 0.56;
		h = 0.06;
		text = "$STR_DISP_ARCSENS_TITLE";
	};
	class SubBackground1: RscGroupBox2 {
		x = 0.22;
		y = 0.2;
		w = 0.515;
		h = 0.11;
	};
	class TextA: RscText {
		x = 0.23;
		y = 0.21;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_A";
	};
	class ValueA: RscEdit {
		idc = 102;
		x = 0.32;
		y = 0.21;
		w = 0.15;
		text = "$STR_DISP_ERROR";
	};
	class TextB: RscText {
		x = 0.48;
		y = 0.21;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_B";
	};
	class ValueB: RscEdit {
		idc = 103;
		x = 0.57;
		y = 0.21;
		w = 0.15;
		text = "$STR_DISP_ERROR";
	};
	class TextAngle: RscText {
		x = 0.23;
		y = 0.26;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_ANGLE";
	};
	class ValueAngle: RscEdit {
		idc = 104;
		x = 0.32;
		y = 0.26;
		w = 0.15;
		text = "$STR_DISP_ERROR";
	};
	class Rectangular: RscToolbox {
		idc = 120;
		x = 0.48;
		y = 0.26;
		w = 0.24;
		h = 0.038;
		strings[] = {"$STR_DISP_ARCSENS_ELLIPSE","$STR_DISP_ARCSENS_RECT"};
		rows = 1;
		columns = 2;
	};
	class SubBackground2: RscGroupBox2 {
		x = 0.22;
		y = 0.33;
		w = 0.515;
		h = 0.16;
	};
	class TextActivation: RscText {
		x = 0.23;
		y = 0.34;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_ACTIV";
	};
	class ValueActivation: RscCombo {
		idc = 105;
		x = 0.32;
		y = 0.34;
		w = 0.15;
	};
	class Repeating: RscToolbox {
		idc = 107;
		x = 0.48;
		y = 0.34;
		w = 0.24;
		h = 0.038;
		strings[] = {"$STR_DISP_ARCSENS_ONCE","$STR_DISP_ARCSENS_REPEAT"};
		rows = 1;
		columns = 2;
	};
	class Presence: RscToolbox {
		idc = 106;
		x = 0.23;
		y = 0.39;
		w = 0.5;
		h = 0.038;
		strings[] = {"$STR_DISP_ARCSENS_PRESYES","$STR_DISP_ARCSENS_PRESNO","$STR_DISP_ARCSENS_DETWEST","$STR_DISP_ARCSENS_DETEAST","$STR_DISP_ARCSENS_DETGUERRILA","$STR_DISP_ARCSENS_DETCIVILIAN"};
		rows = 2;
		columns = 3;
	};
	class Interruptable: RscToolbox {
		idc = 108;
		x = 0.23;
		y = 0.42;
		w = 0.15;
		h = 0.08;
		strings[] = {"$STR_DISP_ARCSENS_COUNTDOWN","$STR_DISP_ARCSENS_TIMEOUT"};
		rows = 2;
		columns = 1;
	};
	class TextTimeoutMin: RscText {
		x = 0.35;
		y = 0.44;
		w = 0.05;
		text = "$STR_DISP_ARCSENS_TIMEOUT_MIN";
	};
	class ValueTimeoutMin: RscEdit {
		idc = 109;
		x = 0.4;
		y = 0.44;
		w = 0.05;
		text = "$STR_DISP_ERROR";
	};
	class TextTimeoutMax: RscText {
		x = 0.45;
		y = 0.44;
		w = 0.05;
		text = "$STR_DISP_ARCSENS_TIMEOUT_MAX";
	};
	class ValueTimeoutMax: RscEdit {
		idc = 110;
		x = 0.5;
		y = 0.44;
		w = 0.05;
		text = "$STR_DISP_ERROR";
	};
	class TextTimeoutMid: RscText {
		x = 0.55;
		y = 0.44;
		w = 0.05;
		text = "$STR_DISP_ARCSENS_TIMEOUT_MID";
	};
	class ValueTimeoutMid: RscEdit {
		idc = 111;
		x = 0.6;
		y = 0.44;
		w = 0.05;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground3: RscGroupBox2 {
		x = 0.22;
		y = 0.51;
		w = 0.515;
		h = 0.16;
	};
	class TextType: RscText {
		x = 0.23;
		y = 0.52;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_TYPE";
	};
	class ValueType: RscCombo {
		idc = 112;
		x = 0.32;
		y = 0.52;
		w = 0.15;
	};
	class TextText: RscText {
		x = 0.23;
		y = 0.57;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_TEXT";
	};
	class ValueText: RscEdit {
		idc = 114;
		x = 0.32;
		y = 0.57;
		w = 0.15;
		text = "$STR_DISP_ERROR";
	};
	class TextName: RscText {
		x = 0.48;
		y = 0.57;
		w = 0.15;
		text = "$STR_DISP_ARCSENS_NAME";
	};
	class ValueName: RscEdit {
		idc = 121;
		x = 0.57;
		y = 0.57;
		w = 0.15;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground4: RscGroupBox2 {
		x = 0.22;
		y = 0.69;
		w = 0.515;
		h = 0.16;
	};
	class TextExpCond: RscText {
		x = 0.23;
		y = 0.7;
		w = 0.2;
		text = "$STR_DISP_ARCSENS_EXPCOND";
	};
	class ValueExpCond: RscEdit {
		idc = 117;
		x = 0.37;
		y = 0.7;
		w = 0.35;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class TextExpActiv: RscText {
		x = 0.23;
		y = 0.75;
		w = 0.2;
		text = "$STR_DISP_ARCSENS_EXPACTIV";
	};
	class ValueExpActiv: RscEdit {
		idc = 118;
		x = 0.37;
		y = 0.75;
		w = 0.35;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class TextExpDesactiv: RscText {
		x = 0.23;
		y = 0.8;
		w = 0.2;
		text = "$STR_DISP_ARCSENS_EXPDESACTIV";
	};
	class ValueExpDesactiv: RscEdit {
		idc = 119;
		x = 0.37;
		y = 0.8;
		w = 0.35;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class ButtonEffects: RscButtonSmall {
		idc = 116;
		x = 0.22;
		y = 0.885;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCSENS_EFFECTS";
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.46;
		y = 0.885;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.607;
		y = 0.885;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeSensorSimple {
	idd = 41;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground1","TextA","ValueA","TextB","ValueB","SubBackground2","TextActivation","ValueActivation","Presence","SubBackground3","TextType","ValueType","TextText","ValueText","ButtonEffects","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.25;
		w = 0.56;
		h = 0.5;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.268;
		w = 0.56;
		h = 0.06;
		text = "$STR_DISP_ARCSENS_TITLE";
	};
	class TextA: RscText {
		idc = -1;
		x = 0.23;
		y = 0.36;
		w = 0.0882;
		text = "$STR_DISP_ARCSENS_A";
	};
	class ValueA: RscEdit {
		idc = 102;
		x = 0.3182;
		y = 0.36;
		w = 0.1519;
		text = "$STR_DISP_ERROR";
	};
	class TextB: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.36;
		w = 0.0882;
		text = "$STR_DISP_ARCSENS_B";
	};
	class ValueB: RscEdit {
		idc = 103;
		x = 0.5681;
		y = 0.36;
		w = 0.1519;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground1: RscGroupBox2 {
		x = 0.22;
		y = 0.35;
		w = 0.515;
		h = 0.06;
	};
	class TextActivation: RscText {
		idc = -1;
		x = 0.23;
		y = 0.44;
		w = 0.0882;
		text = "$STR_DISP_ARCSENS_ACTIV";
	};
	class ValueActivation: RscCombo {
		idc = 105;
		x = 0.3182;
		y = 0.44;
		w = 0.1519;
	};
	class Presence: RscToolbox {
		idc = 106;
		x = 0.23;
		y = 0.49;
		w = 0.49;
		h = 0.076;
		strings[] = {"$STR_DISP_ARCSENS_PRESYES","$STR_DISP_ARCSENS_PRESNO","$STR_DISP_ARCSENS_DETWEST","$STR_DISP_ARCSENS_DETEAST","$STR_DISP_ARCSENS_DETGUERRILA","$STR_DISP_ARCSENS_DETCIVILIAN"};
		rows = 2;
		columns = 3;
	};
	class SubBackground2: RscGroupBox2 {
		x = 0.22;
		y = 0.43;
		w = 0.515;
		h = 0.135;
	};
	class TextType: RscText {
		idc = -1;
		x = 0.23;
		y = 0.595;
		w = 0.0882;
		text = "$STR_DISP_ARCSENS_TYPE";
	};
	class ValueType: RscCombo {
		idc = 112;
		x = 0.3182;
		y = 0.595;
		w = 0.1519;
	};
	class TextText: RscText {
		idc = -1;
		x = 0.4799;
		y = 0.595;
		w = 0.0882;
		text = "$STR_DISP_ARCSENS_TEXT";
	};
	class ValueText: RscEdit {
		idc = 114;
		x = 0.5681;
		y = 0.595;
		w = 0.1519;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground3: RscGroupBox2 {
		x = 0.22;
		y = 0.585;
		w = 0.515;
		h = 0.06;
	};
	class ButtonEffects: RscButton {
		idc = 116;
		x = 0.22;
		y = 0.675;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCSENS_EFFECTS";
		default = 0;
		soundClick[] = {"",0.2,1};
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.462;
		y = 0.675;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.607;
		y = 0.675;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeEffects {
	idd = 44;
	movingEnable = 1;
	controls[] = {"Background","SubBackground","Title","GroupActivation","Condition","GroupCamera","TextCamEffect","ValueCamEffect","TextCamEffectPos","ValueCamEffectPos","GroupSound","TextSound","ValueSound","TextVoice","ValueVoice","TextSoundEnv","ValueSoundEnv","TextSoundDet","ValueSoundDet","GroupMusic","TextMusic","ValueMusic","GroupTitles","TextTitleType","ValueTitleType","TextTitleEffect","ValueTitleEffect","TextTitle","ValueTitleText","ValueTitleRes","ValueTitleObj","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.2;
		w = 0.6;
		h = 0.72;
	};
	class Title: RscTitle {
		idc = -1;
		x = 0.2;
		y = 0.218;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_ARCEFF_TITLE";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.3;
		w = 0.56;
		h = 0.52;
	};
	class GroupActivation: RscFrame {
		x = 0.235;
		y = 0.32;
		w = 0.53;
		h = 0.07;
		text = "$STR_DISP_ARCEFF_ACTIVATION";
	};
	class Condition: RscEdit {
		idc = 113;
		x = 0.24;
		y = 0.345;
		w = 0.52;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class GroupCamera: RscFrame {
		x = 0.235;
		y = 0.4;
		w = 0.53;
		h = 0.07;
		text = "$STR_DISP_ARCEFF_CAMERA";
	};
	class TextCamEffect: RscText {
		x = 0.24;
		y = 0.42;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_CAMTYPE";
	};
	class ValueCamEffect: RscCombo {
		idc = 101;
		x = 0.33;
		y = 0.42;
		w = 0.15;
	};
	class TextCamEffectPos: RscText {
		x = 0.5;
		y = 0.42;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_CAMPOS";
	};
	class ValueCamEffectPos: RscCombo {
		idc = 102;
		x = 0.59;
		y = 0.42;
		w = 0.15;
	};
	class GroupSound: RscFrame {
		x = 0.235;
		y = 0.48;
		w = 0.53;
		h = 0.12;
		text = "$STR_DISP_ARCEFF_SOUNDS";
	};
	class TextSound: RscText {
		x = 0.24;
		y = 0.5;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_SOUND_ANON";
	};
	class ValueSound: RscCombo {
		idc = 103;
		x = 0.33;
		y = 0.5;
		w = 0.15;
	};
	class TextVoice: RscText {
		x = 0.5;
		y = 0.5;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_VOICE";
	};
	class ValueVoice: RscCombo {
		idc = 104;
		x = 0.59;
		y = 0.5;
		w = 0.15;
	};
	class TextSoundEnv: RscText {
		x = 0.24;
		y = 0.55;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_SOUND_ENV";
	};
	class ValueSoundEnv: RscCombo {
		idc = 105;
		x = 0.33;
		y = 0.55;
		w = 0.15;
	};
	class TextSoundDet: RscText {
		x = 0.5;
		y = 0.55;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_SOUND_DET";
	};
	class ValueSoundDet: RscCombo {
		idc = 106;
		x = 0.59;
		y = 0.55;
		w = 0.15;
	};
	class GroupMusic: RscFrame {
		x = 0.235;
		y = 0.61;
		w = 0.53;
		h = 0.07;
		text = "$STR_DISP_ARCEFF_MUSIC";
	};
	class TextMusic: RscText {
		x = 0.24;
		y = 0.63;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_TRACK";
	};
	class ValueMusic: RscCombo {
		idc = 107;
		x = 0.33;
		y = 0.63;
		w = 0.15;
	};
	class GroupTitles: RscFrame {
		x = 0.235;
		y = 0.69;
		w = 0.53;
		h = 0.12;
		text = "$STR_DISP_ARCEFF_TITLES";
	};
	class TextTitleType: RscText {
		x = 0.24;
		y = 0.71;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_TITTYPE";
	};
	class ValueTitleType: RscCombo {
		idc = 108;
		x = 0.33;
		y = 0.71;
		w = 0.15;
	};
	class TextTitleEffect: RscText {
		x = 0.5;
		y = 0.71;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_TITEFF";
	};
	class ValueTitleEffect: RscCombo {
		idc = 109;
		x = 0.59;
		y = 0.71;
		w = 0.15;
	};
	class TextTitle: RscText {
		idc = 114;
		x = 0.24;
		y = 0.76;
		w = 0.09;
		text = "$STR_DISP_ARCEFF_TITTEXT";
	};
	class ValueTitleText: RscEdit {
		idc = 110;
		x = 0.33;
		y = 0.76;
		w = 0.4;
		text = "$STR_DISP_ERROR";
	};
	class ValueTitleRes: RscCombo {
		idc = 111;
		x = 0.33;
		y = 0.76;
		w = 0.15;
	};
	class ValueTitleObj: RscCombo {
		idc = 112;
		x = 0.33;
		y = 0.76;
		w = 0.15;
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.5;
		y = 0.845;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.647;
		y = 0.845;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeEffectsSimple {
	idd = 44;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground","GroupSound","TextSound","ValueSound","TextSoundDet","ValueSoundDet","GroupMusic","TextMusic","ValueMusic","GroupTitles","TextTitle","ValueTitleText","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.27;
		w = 0.6;
		h = 0.46;
	};
	class Title: RscTitle {
		idc = -1;
		x = 0.2;
		y = 0.288;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_ARCEFF_TITLE";
	};
	class TextSound: RscText {
		idc = -1;
		x = 0.24;
		y = 0.4;
		w = 0.0936;
		text = "$STR_DISP_ARCEFF_SOUND_ANON";
	};
	class ValueSound: RscCombo {
		idc = 103;
		x = 0.3336;
		y = 0.4;
		w = 0.1612;
	};
	class TextSoundDet: RscText {
		idc = -1;
		x = 0.5052;
		y = 0.4;
		w = 0.0936;
		text = "$STR_DISP_ARCEFF_SOUND_DET";
	};
	class ValueSoundDet: RscCombo {
		idc = 106;
		x = 0.5988;
		y = 0.4;
		w = 0.1612;
	};
	class GroupSound: RscFrame {
		x = 0.235;
		y = 0.38;
		w = 0.53;
		h = 0.07;
		text = "$STR_DISP_ARCEFF_SOUNDS";
	};
	class TextMusic: RscText {
		idc = -1;
		x = 0.24;
		y = 0.48;
		w = 0.0936;
		text = "$STR_DISP_ARCEFF_TRACK";
	};
	class ValueMusic: RscCombo {
		idc = 107;
		x = 0.3336;
		y = 0.48;
		w = 0.1612;
	};
	class GroupMusic: RscFrame {
		x = 0.235;
		y = 0.46;
		w = 0.53;
		h = 0.07;
		text = "$STR_DISP_ARCEFF_MUSIC";
	};
	class TextTitle: RscText {
		idc = 114;
		x = 0.24;
		y = 0.56;
		w = 0.0936;
		text = "$STR_DISP_ARCEFF_TITTEXT";
	};
	class ValueTitleText: RscEdit {
		idc = 110;
		x = 0.3336;
		y = 0.56;
		w = 0.4264;
		text = "$STR_DISP_ERROR";
	};
	class GroupTitles: RscFrame {
		x = 0.235;
		y = 0.54;
		w = 0.53;
		h = 0.07;
		text = "$STR_DISP_ARCEFF_TITLES";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.37;
		w = 0.555;
		h = 0.25;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.502;
		y = 0.655;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.647;
		y = 0.655;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeWaypoint {
	idd = 28;
	movingEnable = 1;
	controls[] = {"Background","SubBackground","Title","TextType","ValueType","TextSequence","ValueSequence","TextDescription","ValueDescription","TextCombatMode","ValueCombatMode","TextFormation","ValueFormation","TextSpeed","ValueSpeed","TextCombat","ValueCombat","TextPlacement","ValuePlacement","TextHousePos","ValueHousePos","TextTimeout","TextTimeoutMin","ValueTimeoutMin","TextTimeoutMax","ValueTimeoutMax","TextTimeoutMid","ValueTimeoutMid","TextExpCond","ValueExpCond","TextExpActiv","ValueExpActiv","Show","TextExpScript","ValueExpScript","ButtonEffects","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.1;
		w = 0.6;
		h = 0.8;
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.22;
		w = 0.56;
		h = 0.6;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.114;
		w = 0.6;
		text = "$STR_DISP_ERROR";
	};
	class TextType: RscText {
		x = 0.25;
		y = 0.23;
		w = 0.15;
		text = "$STR_DISP_ARCWP_TYPE";
	};
	class ValueType: RscCombo {
		idc = 102;
		x = 0.4;
		y = 0.23;
		w = 0.35;
	};
	class TextSequence: RscText {
		x = 0.25;
		y = 0.28;
		w = 0.15;
		text = "$STR_DISP_ARCWP_SEQ";
	};
	class ValueSequence: RscCombo {
		idc = 103;
		x = 0.4;
		y = 0.28;
		w = 0.35;
	};
	class TextDescription: RscText {
		x = 0.25;
		y = 0.33;
		w = 0.15;
		text = "$STR_DISP_ARCWP_DESC";
	};
	class ValueDescription: RscEdit {
		idc = 104;
		x = 0.4;
		y = 0.33;
		w = 0.35;
		text = "$STR_DISP_ERROR";
	};
	class TextCombatMode: RscText {
		x = 0.25;
		y = 0.38;
		w = 0.1;
		text = "$STR_DISP_ARCWP_SEMAPHORE";
	};
	class ValueCombatMode: RscCombo {
		idc = 105;
		x = 0.35;
		y = 0.38;
		w = 0.15;
	};
	class TextFormation: RscText {
		x = 0.5;
		y = 0.38;
		w = 0.1;
		text = "$STR_DISP_ARCWP_FORM";
	};
	class ValueFormation: RscCombo {
		idc = 106;
		x = 0.6;
		y = 0.38;
		w = 0.15;
	};
	class TextSpeed: RscText {
		x = 0.25;
		y = 0.43;
		w = 0.1;
		text = "$STR_DISP_ARCWP_SPEED";
	};
	class ValueSpeed: RscCombo {
		idc = 107;
		x = 0.35;
		y = 0.43;
		w = 0.15;
	};
	class TextCombat: RscText {
		x = 0.5;
		y = 0.43;
		w = 0.1;
		text = "$STR_DISP_ARCWP_COMBAT";
	};
	class ValueCombat: RscCombo {
		idc = 108;
		x = 0.6;
		y = 0.43;
		w = 0.15;
	};
	class TextPlacement: RscText {
		x = 0.25;
		y = 0.48;
		w = 0.15;
		text = "$STR_DISP_ARCWP_PLACE";
	};
	class ValuePlacement: RscEdit {
		idc = 109;
		x = 0.4;
		y = 0.48;
		w = 0.1;
		text = "$STR_DISP_ERROR";
	};
	class TextHousePos: RscText {
		idc = 115;
		x = 0.5;
		y = 0.48;
		w = 0.15;
		text = "$STR_DISP_ARCWP_HOUSEPOS";
	};
	class ValueHousePos: RscCombo {
		idc = 114;
		x = 0.65;
		y = 0.48;
		w = 0.1;
	};
	class TextTimeout: RscText {
		x = 0.25;
		y = 0.53;
		w = 0.1;
		text = "$STR_DISP_ARCWP_TIMEOUT";
	};
	class TextTimeoutMin: RscText {
		x = 0.32;
		y = 0.53;
		w = 0.05;
		text = "$STR_DISP_ARCWP_TIMEOUT_MIN";
	};
	class ValueTimeoutMin: RscEdit {
		idc = 111;
		x = 0.37;
		y = 0.53;
		w = 0.08;
		text = "$STR_DISP_ERROR";
	};
	class TextTimeoutMax: RscText {
		x = 0.47;
		y = 0.53;
		w = 0.05;
		text = "$STR_DISP_ARCWP_TIMEOUT_MAX";
	};
	class ValueTimeoutMax: RscEdit {
		idc = 112;
		x = 0.52;
		y = 0.53;
		w = 0.08;
		text = "$STR_DISP_ERROR";
	};
	class TextTimeoutMid: RscText {
		x = 0.62;
		y = 0.53;
		w = 0.05;
		text = "$STR_DISP_ARCWP_TIMEOUT_MID";
	};
	class ValueTimeoutMid: RscEdit {
		idc = 113;
		x = 0.67;
		y = 0.53;
		w = 0.08;
		text = "$STR_DISP_ERROR";
	};
	class TextExpCond: RscText {
		x = 0.25;
		y = 0.58;
		w = 0.15;
		text = "$STR_DISP_ARCWP_EXPCOND";
	};
	class ValueExpCond: RscEdit {
		idc = 118;
		x = 0.4;
		y = 0.58;
		w = 0.35;
		text = "$STR_DISP_ERROR";
	};
	class TextExpActiv: RscText {
		x = 0.25;
		y = 0.63;
		w = 0.15;
		text = "$STR_DISP_ARCWP_EXPACTIV";
	};
	class ValueExpActiv: RscEdit {
		idc = 116;
		x = 0.4;
		y = 0.63;
		w = 0.35;
		text = "$STR_DISP_ERROR";
		autocomplete = "scripting";
	};
	class Show: RscToolbox {
		idc = 117;
		x = 0.25;
		y = 0.68;
		w = 0.5;
		h = 0.038;
		strings[] = {"$STR_DISP_ARCWP_SHOW_NEVER","$STR_DISP_ARCWP_SHOW_EASY","$STR_DISP_ARCWP_SHOW_ALWAYS"};
		rows = 1;
		columns = 3;
	};
	class TextExpScript: RscText {
		x = 0.25;
		y = 0.73;
		w = 0.15;
		text = "$STR_DISP_ARCWP_SCRIPT";
	};
	class ValueExpScript: RscEdit {
		idc = 119;
		x = 0.4;
		y = 0.73;
		w = 0.35;
		text = "$STR_DISP_ERROR";
	};
	class ButtonEffects: RscButtonSmall {
		idc = 110;
		x = 0.22;
		y = 0.81;
		text = "$STR_DISP_ARCWP_EFFECTS";
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.48;
		y = 0.81;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.63;
		y = 0.81;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayArcadeWaypointSimple {
	idd = 28;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground","TextType","ValueType","TextDescription","ValueDescription","TextCombatMode","ValueCombatMode","TextFormation","ValueFormation","TextCombat","ValueCombat","TextHousePos","ButtonEffects","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.3;
		w = 0.6;
		h = 0.41;
	};
	class Title: RscTitle {
		idc = 101;
		x = 0.2;
		y = 0.318;
		w = 0.6;
		h = 0.06;
		text = "$STR_DISP_ARCSENS_TITLE";
	};
	class TextType: RscText {
		idc = -1;
		x = 0.23;
		y = 0.41;
		w = 0.159;
		text = "$STR_DISP_ARCWP_TYPE";
	};
	class ValueType: RscCombo {
		idc = 102;
		x = 0.389;
		y = 0.41;
		w = 0.371;
	};
	class TextDescription: RscText {
		idc = -1;
		x = 0.23;
		y = 0.46;
		w = 0.159;
		text = "$STR_DISP_ARCWP_DESC";
	};
	class ValueDescription: RscEdit {
		idc = 104;
		x = 0.389;
		y = 0.46;
		w = 0.371;
		text = "$STR_DISP_ERROR";
	};
	class TextCombatMode: RscText {
		idc = -1;
		x = 0.23;
		y = 0.51;
		w = 0.106;
		text = "$STR_DISP_ARCWP_SEMAPHORE";
	};
	class ValueCombatMode: RscCombo {
		idc = 105;
		x = 0.336;
		y = 0.51;
		w = 0.1537;
	};
	class TextFormation: RscText {
		idc = -1;
		x = 0.5003;
		y = 0.51;
		w = 0.106;
		text = "$STR_DISP_ARCWP_FORM";
	};
	class ValueFormation: RscCombo {
		idc = 106;
		x = 0.6063;
		y = 0.51;
		w = 0.1537;
	};
	class TextCombat: RscText {
		idc = -1;
		x = 0.23;
		y = 0.56;
		w = 0.106;
		text = "$STR_DISP_ARCWP_COMBAT";
	};
	class ValueCombat: RscCombo {
		idc = 108;
		x = 0.336;
		y = 0.56;
		w = 0.1537;
	};
	class TextHousePos: RscText {
		idc = 115;
		x = 0.5003;
		y = 0.61;
		w = 0.106;
		text = "$STR_DISP_ARCWP_HOUSEPOS";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.4;
		w = 0.555;
		h = 0.21;
	};
	class ButtonEffects: RscButton {
		idc = 110;
		x = 0.22;
		y = 0.635;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_ARCWP_EFFECTS";
		default = 0;
		soundClick[] = {"",0.2,1};
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.502;
		y = 0.635;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.647;
		y = 0.635;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayChannel {
	idd = 63;
	movingEnable = 1;
	controls[] = {"Channel"};
	class Channel: RscText {
		idc = 101;
		x = 0.06;
		y = 0.81;
		w = 0.12;
		h = 0.04;
		style = 2;
		text = "$STR_DISP_ERROR";
		colorBackground[] = {0,0,0,0.75};
	};
};
class RscDisplayChat {
	idd = 24;
	movingEnable = 1;
	controls[] = {"Background","Line"};
	class Background: RscText {
		x = 0.18;
		y = 0.81;
		w = 0.5;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Line: RscEdit {
		idc = 101;
		x = 0.18;
		y = 0.81;
		w = 0.5;
		text = "";
		colorBackground[] = {0,0,0,0.5};
		colorText[] = {1,1,1,1};
		autocomplete = "general";
	};
};
class RscDisplayVoiceChat {
	idd = 55;
	movingEnable = 1;
	controls[] = {"Background","Picture"};
	class Background: RscText {
		x = 0.03;
		y = 0.81;
		w = 0.03;
		h = 0.04;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Picture: RscPicture {
		idc = 101;
		text = "voice3.paa";
		x = 0.03;
		y = 0.81;
		w = 0.03;
		h = 0.04;
		colorText[] = {1,1,1,1};
	};
};
class RscDisplayTemplateSave {
	idd = 29;
	movingEnable = 1;
	controls[] = {"Background","SubBackground","Title","TextName","ValueName","TextMode","ValueMode","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.28;
		y = 0.2;
		w = 0.46;
		h = 0.33;
	};
	class SubBackground: RscGroupBox2 {
		x = 0.3;
		y = 0.3;
		w = 0.42;
		h = 0.13;
	};
	class Title: RscTitle {
		x = 0.28;
		y = 0.218;
		w = 0.46;
		h = 0.06;
		text = "$STR_DISP_TEMPL_SAVE";
	};
	class TextName: RscText {
		x = 0.31;
		y = 0.31;
		w = 0.31;
		text = "$STR_DISP_TEMPL_NAME";
	};
	class ValueName: RscEdit {
		idc = 101;
		x = 0.48;
		y = 0.31;
		w = 0.225;
		text = "$STR_DISP_ERROR";
	};
	class TextMode: RscText {
		x = 0.31;
		y = 0.36;
		w = 0.31;
		text = "$STR_DISP_TEMPL_MODE";
	};
	class ValueMode: RscCombo {
		idc = 103;
		x = 0.48;
		y = 0.36;
		w = 0.225;
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.445;
		y = 0.45;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.591;
		y = 0.45;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayTemplateLoad {
	idd = 30;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground","TextIsland","ValueIsland","TextName","ValueName","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.28;
		y = 0.2;
		w = 0.46;
		h = 0.31;
	};
	class Title: RscTitle {
		idc = 102;
		x = 0.28;
		y = 0.218;
		w = 0.46;
		h = 0.06;
		text = "$STR_DISP_TEMPL_LOAD";
	};
	class TextIsland: RscText {
		idc = -1;
		x = 0.31;
		y = 0.31;
		w = 0.117;
		text = "$STR_DISP_TEMPL_ISLAND";
	};
	class ValueIsland: RscCombo {
		idc = 104;
		x = 0.427;
		y = 0.31;
		w = 0.273;
	};
	class TextName: RscText {
		idc = -1;
		x = 0.31;
		y = 0.36;
		w = 0.117;
		text = "$STR_DISP_TEMPL_NAME";
	};
	class ValueName: RscCombo {
		idc = 101;
		x = 0.427;
		y = 0.36;
		w = 0.273;
	};
	class SubBackground: RscGroupBox2 {
		x = 0.3;
		y = 0.3;
		w = 0.415;
		h = 0.11;
	};
	class ButtonOK: RscButton {
		idc = 1;
		x = 0.442;
		y = 0.435;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButton {
		idc = 2;
		x = 0.587;
		y = 0.435;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		default = 0;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayIntel {
	idd = 32;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground","SubtitleVisuals","TextBriefingName","ValueBriefingName","TextBriefingDescription","ValueBriefingDescription","SubBackground1","TextDate","ValueMonth","ValueDay","TextTime","ValueHour","ValueMinute","SubtitleVisuals1","ValueWeather","Bourka","Jasno","ValueFog","SubtitleVisuals2","ValueWeatherForecast","Bourka2","Jasno2","ValueFogForecast","SubtitleVisuals3","ValueResistance","East","West","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.02;
		w = 0.64;
		h = 0.96;
	};
	class Title: RscTitle {
		x = 0.2;
		y = 0.038;
		w = 0.64;
		h = 0.06;
		text = "$STR_DISP_INTEL_TITLE";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.12;
		w = 0.6;
		h = 0.2;
	};
	class SubtitleVisuals: RscFrame {
		x = 0.235;
		y = 0.125;
		w = 0.57;
		h = 0.18;
		text = "$STR_DISP_INTEL_BRIEFING";
	};
	class TextBriefingName: RscText {
		x = 0.24;
		y = 0.15;
		w = 0.1;
		h = 0.028;
		text = "$STR_DISP_INTEL_NAME";
	};
	class ValueBriefingName: RscEdit {
		idc = 106;
		x = 0.35;
		y = 0.15;
		w = 0.445;
		h = 0.028;
		text = "$STR_DISP_ERROR";
	};
	class TextBriefingDescription: RscText {
		x = 0.24;
		y = 0.19;
		w = 0.11;
		h = 0.028;
		text = "$STR_DISP_INTEL_DESC";
	};
	class ValueBriefingDescription: RscEdit {
		idc = 107;
		style = 16;
		lineSpacing = 1;
		x = 0.35;
		y = 0.19;
		w = 0.445;
		h = 0.102;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground1: RscGroupBox2 {
		x = 0.22;
		y = 0.345;
		w = 0.6;
		h = 0.5325;
	};
	class TextDate: RscText {
		x = 0.23;
		y = 0.355;
		w = 0.05;
		h = 0.028;
		text = "$STR_DISP_INTEL_DATE";
	};
	class ValueMonth: RscCombo {
		idc = 102;
		x = 0.285;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class ValueDay: RscCombo {
		idc = 103;
		x = 0.375;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class TextTime: RscText {
		x = 0.575;
		y = 0.355;
		w = 0.05;
		h = 0.028;
		text = "$STR_DISP_INTEL_TIME";
	};
	class ValueHour: RscCombo {
		idc = 104;
		x = 0.635;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class ValueMinute: RscCombo {
		idc = 105;
		x = 0.725;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class SubtitleVisuals1: RscFrame {
		x = 0.235;
		y = 0.385;
		w = 0.57;
		h = 0.18;
		text = "$STR_DISP_INTEL_WEATHER";
	};
	class ValueWeather: RscSliderH {
		idc = 108;
		x = 0.3025;
		y = 0.43;
		w = 0.44;
	};
	class Bourka: RscPicture {
		text = "bourkasym.paa";
		x = 0.245;
		y = 0.41;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class Jasno: RscPicture {
		text = "jasnosym.paa";
		x = 0.7425;
		y = 0.4075;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class ValueFog: RscSliderH {
		idc = 109;
		x = 0.3025;
		y = 0.51;
		w = 0.44;
	};
	class SubtitleVisuals2: RscFrame {
		x = 0.235;
		y = 0.565;
		w = 0.57;
		h = 0.18;
		text = "$STR_DISP_INTEL_FORECAST";
	};
	class ValueWeatherForecast: RscSliderH {
		idc = 110;
		x = 0.3025;
		y = 0.61;
		w = 0.44;
	};
	class Bourka2: RscPicture {
		text = "bourkasym.paa";
		x = 0.245;
		y = 0.59;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class Jasno2: RscPicture {
		text = "jasnosym.paa";
		x = 0.7425;
		y = 0.5875;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class ValueFogForecast: RscSliderH {
		idc = 111;
		x = 0.3025;
		y = 0.69;
		w = 0.44;
	};
	class SubtitleVisuals3: RscFrame {
		x = 0.235;
		y = 0.745;
		w = 0.57;
		h = 0.1;
		text = "$STR_DISP_INTEL_RESISTANCE";
	};
	class ValueResistance: RscToolbox {
		idc = 101;
		x = 0.3025;
		y = 0.785;
		w = 0.44;
		h = 0.038;
		strings[] = {"$STR_DISP_INTEL_NONE_FRIENDLY","$STR_DISP_INTEL_WEST_FRIENDLY","$STR_DISP_INTEL_EAST_FRIENDLY","$STR_DISP_INTEL_BOTH_FRIENDLY"};
		rows = 1;
		columns = 4;
	};
	class East: RscPicture {
		text = "eastsym.paa";
		x = 0.245;
		y = 0.77;
		w = 0.05;
		h = 0.068;
		colorText[] = {0.08,0.08,0.12,0.7};
	};
	class West: RscPicture {
		text = "westsym.paa";
		x = 0.7475;
		y = 0.77;
		w = 0.05;
		h = 0.068;
		colorText[] = {0.08,0.08,0.12,0.7};
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.535;
		y = 0.88;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.69;
		y = 0.88;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayIntelSimple {
	idd = 32;
	movingEnable = 1;
	controls[] = {"Background","Title","SubBackground","SubtitleVisuals","TextBriefingName","ValueBriefingName","TextBriefingDescription","ValueBriefingDescription","SubBackground1","TextDate","ValueMonth","ValueDay","TextTime","ValueHour","ValueMinute","SubtitleVisuals1","ValueWeather","Bourka","Jasno","SubtitleVisuals2","ValueWeatherForecast","Bourka2","Jasno2","SubtitleVisuals3","ValueResistance","East","West","ButtonOK","ButtonCancel"};
	class Background: RscBackground {
		x = 0.2;
		y = 0.02;
		w = 0.64;
		h = 0.8;
	};
	class Title: RscTitle {
		x = 0.2;
		y = 0.038;
		w = 0.64;
		h = 0.06;
		text = "$STR_DISP_INTEL_TITLE";
	};
	class SubBackground: RscGroupBox2 {
		x = 0.22;
		y = 0.12;
		w = 0.6;
		h = 0.2;
	};
	class SubtitleVisuals: RscFrame {
		x = 0.235;
		y = 0.125;
		w = 0.57;
		h = 0.18;
		text = "$STR_DISP_INTEL_BRIEFING";
	};
	class TextBriefingName: RscText {
		x = 0.24;
		y = 0.15;
		w = 0.1;
		h = 0.028;
		text = "$STR_DISP_INTEL_NAME";
	};
	class ValueBriefingName: RscEdit {
		idc = 106;
		x = 0.35;
		y = 0.15;
		w = 0.445;
		h = 0.028;
		text = "$STR_DISP_ERROR";
	};
	class TextBriefingDescription: RscText {
		x = 0.24;
		y = 0.19;
		w = 0.11;
		h = 0.028;
		text = "$STR_DISP_INTEL_DESC";
	};
	class ValueBriefingDescription: RscEdit {
		idc = 107;
		style = 16;
		lineSpacing = 1;
		x = 0.35;
		y = 0.19;
		w = 0.445;
		h = 0.102;
		text = "$STR_DISP_ERROR";
	};
	class SubBackground1: RscGroupBox2 {
		x = 0.22;
		y = 0.345;
		w = 0.6;
		h = 0.3725;
	};
	class TextDate: RscText {
		x = 0.23;
		y = 0.355;
		w = 0.05;
		h = 0.028;
		text = "$STR_DISP_INTEL_DATE";
	};
	class ValueMonth: RscCombo {
		idc = 102;
		x = 0.285;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class ValueDay: RscCombo {
		idc = 103;
		x = 0.375;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class TextTime: RscText {
		x = 0.575;
		y = 0.355;
		w = 0.05;
		h = 0.028;
		text = "$STR_DISP_INTEL_TIME";
	};
	class ValueHour: RscCombo {
		idc = 104;
		x = 0.635;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class ValueMinute: RscCombo {
		idc = 105;
		x = 0.725;
		y = 0.355;
		w = 0.08;
		h = 0.028;
	};
	class SubtitleVisuals1: RscFrame {
		x = 0.235;
		y = 0.385;
		w = 0.57;
		h = 0.1;
		text = "$STR_DISP_INTEL_WEATHER";
	};
	class ValueWeather: RscSliderH {
		idc = 108;
		x = 0.3025;
		y = 0.43;
		w = 0.44;
	};
	class Bourka: RscPicture {
		text = "bourkasym.paa";
		x = 0.245;
		y = 0.41;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class Jasno: RscPicture {
		text = "jasnosym.paa";
		x = 0.7425;
		y = 0.4075;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class SubtitleVisuals2: RscFrame {
		x = 0.235;
		y = 0.485;
		w = 0.57;
		h = 0.1;
		text = "$STR_DISP_INTEL_FORECAST";
	};
	class ValueWeatherForecast: RscSliderH {
		idc = 110;
		x = 0.3025;
		y = 0.53;
		w = 0.44;
	};
	class Bourka2: RscPicture {
		text = "bourkasym.paa";
		x = 0.245;
		y = 0.51;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class Jasno2: RscPicture {
		text = "jasnosym.paa";
		x = 0.7425;
		y = 0.5075;
		w = 0.06;
		h = 0.08;
		colorText[] = {0.08,0.08,0.12,1};
	};
	class SubtitleVisuals3: RscFrame {
		x = 0.235;
		y = 0.585;
		w = 0.57;
		h = 0.1;
		text = "$STR_DISP_INTEL_RESISTANCE";
	};
	class ValueResistance: RscToolbox {
		idc = 101;
		x = 0.3025;
		y = 0.625;
		w = 0.44;
		h = 0.038;
		strings[] = {"$STR_DISP_INTEL_NONE_FRIENDLY","$STR_DISP_INTEL_WEST_FRIENDLY","$STR_DISP_INTEL_EAST_FRIENDLY","$STR_DISP_INTEL_BOTH_FRIENDLY"};
		rows = 1;
		columns = 4;
	};
	class East: RscPicture {
		text = "eastsym.paa";
		x = 0.245;
		y = 0.61;
		w = 0.05;
		h = 0.068;
		colorText[] = {0.08,0.08,0.12,0.7};
	};
	class West: RscPicture {
		text = "westsym.paa";
		x = 0.7475;
		y = 0.61;
		w = 0.05;
		h = 0.068;
		colorText[] = {0.08,0.08,0.12,0.7};
	};
	class ButtonOK: RscButtonSmall {
		idc = 1;
		x = 0.535;
		y = 0.74;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscButtonSmall {
		idc = 2;
		x = 0.69;
		y = 0.74;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayDebug {
	idd = 56;
	movingEnable = 1;
	class Controls {
		class Background: RscBackground {
			x = 0.2;
			y = 0;
			w = 0.6;
			h = 1.0;
		};
		class SubBackground: RscGroupBox2 {
			x = 0.22;
			y = 0.1;
			w = 0.56;
			h = 0.8;
		};
		class Title: RscTitle {
			idc = -1;
			x = 0.2;
			y = 0.018;
			w = 0.6;
			h = 0.06;
			text = "Debug console";
		};
		class TextExpression: RscText {
			x = 0.23;
			y = 0.12;
			w = 0.1;
			text = "Expression:";
		};
		class ValueExpression: RscEdit {
			idc = 101;
			x = 0.33;
			y = 0.12;
			w = 0.44;
			text = "";
			autocomplete = "scripting";
		};
		class HeaderVar: RscText {
			x = 0.23;
			y = 0.2;
			w = 0.09;
			text = "Variable";
		};
		class HeaderExp: RscText {
			x = 0.32;
			y = 0.2;
			w = 0.15;
			text = "Expression";
		};
		class HeaderRes: RscText {
			x = 0.47;
			y = 0.2;
			w = 0.3;
			text = "Result";
		};
		class TextVar1: RscText {
			x = 0.23;
			y = 0.25;
			w = 0.09;
			text = "debug1";
		};
		class ValueExp1: RscEdit {
			idc = 121;
			x = 0.32;
			y = 0.25;
			w = 0.15;
			text = "";
			autocomplete = "scripting";
		};
		class ValueRes1: RscEdit {
			idc = 141;
			x = 0.47;
			y = 0.25;
			w = 0.3;
			text = "";
			autocomplete = "scripting";
		};
		class TextVar2: RscText {
			x = 0.23;
			y = 0.3;
			w = 0.09;
			text = "debug2";
		};
		class ValueExp2: RscEdit {
			idc = 122;
			x = 0.32;
			y = 0.3;
			w = 0.15;
			text = "";
			autocomplete = "scripting";
		};
		class ValueRes2: RscEdit {
			idc = 142;
			x = 0.47;
			y = 0.3;
			w = 0.3;
			text = "";
			autocomplete = "scripting";
		};
		class TextVar3: RscText {
			x = 0.23;
			y = 0.35;
			w = 0.09;
			text = "debug3";
		};
		class ValueExp3: RscEdit {
			idc = 123;
			x = 0.32;
			y = 0.35;
			w = 0.15;
			text = "";
		};
		class ValueRes3: RscEdit {
			idc = 143;
			x = 0.47;
			y = 0.35;
			w = 0.3;
			text = "";
			autocomplete = "scripting";
		};
		class TextVar4: RscText {
			x = 0.23;
			y = 0.4;
			w = 0.09;
			text = "debug4";
		};
		class ValueExp4: RscEdit {
			idc = 124;
			x = 0.32;
			y = 0.4;
			w = 0.15;
			text = "";
			autocomplete = "scripting";
		};
		class ValueRes4: RscEdit {
			idc = 144;
			x = 0.47;
			y = 0.4;
			w = 0.3;
			text = "";
			autocomplete = "scripting";
		};
		class TextLog: RscText {
			x = 0.23;
			y = 0.72;
			w = 0.1;
			text = "Log:";
		};
		class ValueLog: RscListBox {
			idc = 103;
			x = 0.33;
			y = 0.72;
			w = 0.44;
			h = 0.15;
		};
		class ButtonA1: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.25;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "All";
			action = """all"" diag_enable true";
		};
		class ButtonA2: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.32;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "No";
			action = """all"" diag_enable false";
		};
		class ButtonA3: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.39;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "Combat";
			action = "diag_toggle ""combat""";
		};
		class ButtonA4: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.46;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "Cost";
			action = "diag_toggle ""costmap""";
		};
		class ButtonA5: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.53;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "Transp";
			action = "diag_toggle ""transparent""";
		};
		class ButtonA6: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.6;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "Collis";
			action = "diag_toggle ""collision""";
		};
		class ButtonA7: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.67;
			y = 0.5;
			w = 0.065;
			h = 0.05;
			text = "Path";
			action = "diag_toggle ""path""";
		};
		class ButtonA8: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.25;
			y = 0.55;
			w = 0.065;
			h = 0.05;
			text = "Force";
			action = "diag_toggle ""force""";
		};
		class ButtonA9: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.32;
			y = 0.55;
			w = 0.065;
			h = 0.05;
			text = "Anim";
			action = "diag_toggle ""animation""";
		};
		class ButtonB1: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.25;
			y = 0.6;
			w = 0.065;
			h = 0.05;
			text = "Normal";
			action = "diag_drawmode ""Normal""";
		};
		class ButtonB2: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.32;
			y = 0.6;
			w = 0.065;
			h = 0.05;
			text = "Fire";
			action = "diag_drawmode ""FireGeometry""";
		};
		class ButtonB3: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.39;
			y = 0.6;
			w = 0.065;
			h = 0.05;
			text = "View";
			action = "diag_drawmode ""ViewGeometry""";
		};
		class ButtonB4: RscButtonSmall {
			idc = "IDC_STATIC";
			x = 0.46;
			y = 0.6;
			w = 0.065;
			h = 0.05;
			text = "Geom.";
			action = "diag_drawmode ""Geometry""";
		};
		class ButtonApply: RscButtonSmall {
			idc = 102;
			x = 0.35;
			y = 0.925;
			w = 0.13;
			h = 0.05;
			text = "Apply";
			soundClick[] = {"ui\ui_ok",0.2,1};
		};
		class ButtonOK: RscButtonSmall {
			idc = 1;
			x = 0.5;
			y = 0.925;
			w = 0.13;
			h = 0.05;
			text = "$STR_DISP_OK";
			default = 1;
			soundClick[] = {"ui\ui_ok",0.2,1};
		};
		class ButtonCancel: RscButtonSmall {
			idc = 2;
			x = 0.65;
			y = 0.925;
			w = 0.13;
			h = 0.05;
			text = "$STR_DISP_CANCEL";
			soundClick[] = {"ui\ui_cc",0.2,1};
		};
	};
};
class RscActiveMenu: RscActiveText {
	access = 3;
	color[] = {1,1,1,1};
	colorActive[] = {1,0,0,1};
	font = "SteelfishB64";
	sizeEx = 0.05;
	default = 0;
	soundClick[] = {"ui\ui_ok",0.2,1};
};
class RscTextMenu: RscText {
	access = 3;
	colorText[] = {1,1,1,0.8};
	font = "courierNewB64";
	sizeEx = "0.7 * 0.048";
	h = 0.13;
};
class Rsc3DActiveMenu {
	access = 3;
	type = 21;
	style = 0;
	color[] = {1,1,1,1};
	colorActive[] = {1,0,0,1};
	font = "SteelfishB64";
	angle = 0;
	default = 0;
	soundEnter[] = {"ui\ui_over",0.2,1};
	soundPush[] = {"",0.2,1};
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
};
class Rsc3DTextMenu {
	access = 3;
	type = 20;
	style = 0;
	color[] = {1,1,1,0.8};
	font = "courierNewB64";
	angle = 0;
};
class RscObject {
	access = 3;
	type = 80;
	scale = 1.0;
	direction[] = {0,0,1};
	up[] = {0,1,0};
};
class RscObjNotebookText {
	access = 3;
	type = 20;
	style = 0;
	idc = -1;
	color[] = {0,1,0,1};
	font = "courierNewB64";
	angle = 0;
	selection = "display";
	h = 0.05;
};
class RscObjNotebookEdit {
	access = 3;
	type = 25;
	style = 0;
	colorText[] = {0,1,0,1};
	colorSelection[] = {0,1,0,0.4};
	font = "courierNewB64";
	size = 0.8;
	angle = 0;
	selection = "display";
	autocomplete = "";
	h = 0.05;
	text = "$STR_DISP_ERROR";
};
class RscObjNotebookButton {
	access = 3;
	type = 21;
	style = 0;
	color[] = {0,1,0,0.5};
	colorActive[] = {0,1,0,1};
	font = "courierNewB64";
	angle = 0;
	selection = "display";
	h = 0.05;
	soundEnter[] = {"ui\ui_over",0.2,1};
	soundPush[] = {"",0.2,1};
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	default = 0;
};
class RscObjNotebookListBox {
	access = 3;
	type = 22;
	style = 0;
	selection = "display";
	angle = 0;
	size = 0.8;
	colorSelect[] = {0,1,0,1};
	colorSelectBackground[] = {0,1,0,0.2};
	colorText[] = {0,1,0,0.5};
	font = "courierNewB64";
};
class RscBackgroundStripeTop: RscText {
	access = 3;
	x = -10.0;
	y = -10.0;
	w = 21;
	h = 10.125;
	text = "";
	colorBackground[] = {0,0,0,1};
};
class RscBackgroundStripeBottom: RscText {
	access = 3;
	x = -10.0;
	y = 0.875;
	w = 21;
	h = 10.125;
	text = "";
	colorBackground[] = {0,0,0,1};
};
class RscBackgroundStripeTopAlpha: RscBackgroundStripeTop {
	access = 3;
	colorBackground[] = {0,0,0,0.5};
};
class RscBackgroundStripeBottomAlpha: RscBackgroundStripeBottom {
	access = 3;
	colorBackground[] = {0,0,0,0.5};
};
class RscBackgroundStripeDark: RscText {
	x = -10.0;
	y = 0.125;
	w = 21;
	h = 0.75;
	text = "";
	colorBackground[] = {0,0,0,0.5};
};
class RscDisplayBackgroundStripes {
	access = 3;
	class Background1: RscBackgroundStripeTop {};
	class Background2: RscBackgroundStripeBottom {};
};
class RscDisplayBackgroundStripesDark: RscDisplayBackgroundStripes {
	access = 3;
	class Background3: RscBackgroundStripeDark {};
};
class RscDisplayStripesLayeredBackground {
	access = 3;
	controlsBackground[] = {"Background3","Background4","Background5"};
	class Background1: RscBackgroundStripeTopAlpha {};
	class Background2: RscBackgroundStripeBottomAlpha {};
	class Background3: RscBackgroundStripeDark {};
	class Background4: RscBackgroundStripeTop {};
	class Background5: RscBackgroundStripeBottom {};
};
class RscDisplayStripesBrightLayeredBackground {
	access = 3;
	controlsBackground[] = {"Background4","Background5"};
	class Background1: RscBackgroundStripeTopAlpha {};
	class Background2: RscBackgroundStripeBottomAlpha {};
	class Background4: RscBackgroundStripeTop {};
	class Background5: RscBackgroundStripeBottom {};
};
class RscDisplayMain: RscDisplayBackgroundStripesDark {
	access = 3;
	idd = 0;
	movingEnable = 1;
	controlsBackground[] = {"Background1","Background2","Background3"};
	controls[] = {"CWA","Line1","Line2","Continue","Player","Game","SingleMission","Multiplayer","Custom","Options","Quit","Version","AllMissions","Copy"};
	class copy: RscText {
		style = "16 + 					2 + 				512";
		lineSpacing = 1.0;
		text = "$STR_CREDITS23";
		x = 0.03;
		y = 0.93;
		w = 0.9;
		h = 0.7;
		colorText[] = {1,1,1,0.5};
		font = "tahomaB24";
		sizeEx = 0.016;
	};
	class CWA: RscPicture {
		text = "startup_logo_CWA_ca.paa";
		x = 0.41;
		y = 0.0;
		w = 0.18;
		h = 0.12;
	};
	class Line1: RscText {
		style = 176;
		x = 0.7;
		y = 0.125;
		w = 0;
		h = 0.75;
		text = "";
		colorBackground[] = {1,1,1,1};
		color[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
	};
	class Line2: RscText {
		style = 176;
		x = 0.0;
		y = 0.46;
		w = 1.0;
		h = 0;
		text = "";
		colorBackground[] = {1,1,1,1};
		color[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
	};
	class Continue: RscActiveMenu {
		idc = 114;
		x = 0.05;
		y = 0.155;
		w = 0.0;
		h = 0.0;
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		text = "$STR_DISP_MAIN_CONTINUE";
	};
	class Player: RscActiveMenu {
		idc = 109;
		x = 0.02;
		y = 0.145;
		w = 0.5;
		h = 0.05;
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		text = "$STR_DISP_ERROR";
	};
	class Game: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 101;
		x = 0.72;
		y = 0.145;
		w = 0.25;
		h = 0.05;
		text = "$STR_DISP_MAIN_GAME";
	};
	class SingleMission: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 117;
		x = 0.72;
		y = 0.33;
		w = 0.52;
		h = 0.05;
		text = "$STR_DISP_MAIN_SINGLE";
		default = 1;
	};
	class Multiplayer: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 105;
		x = 0.72;
		y = 0.39;
		w = 0.52;
		h = 0.05;
		text = "$STR_DISP_MAIN_MULTI";
	};
	class Custom: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		style = 1;
		idc = 115;
		x = 0.38;
		y = 0.48;
		w = 0.3;
		h = 0.05;
		text = "$STR_DISP_MAIN_CUSTOM";
	};
	class Options: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 102;
		style = 1;
		x = 0.48;
		y = 0.54;
		w = 0.2;
		h = 0.05;
		text = "$STR_DISP_MAIN_OPTIONS";
	};
	class Quit: RscActiveMenu {
		font = "SteelfishB128";
		idc = 106;
		x = 0.72;
		y = 0.8;
		w = 0.2;
		h = 0.05;
		sizeEx = "0.6 * 0.098";
		text = "$STR_DISP_MAIN_QUIT";
	};
	class Date: RscText {
		idc = 112;
		x = 0.4;
		y = 0.17;
		w = 0.2;
		h = 0.05;
		style = 2;
		font = "tahomaB24";
		sizeEx = 0.02;
		text = "$STR_DISP_ERROR";
		colorText[] = {1,1,1,0.5};
	};
	class Version: RscText {
		idc = 118;
		x = 0.4;
		y = 0.09;
		w = 0.2;
		h = 0.05;
		style = 2;
		font = "tahomaB24";
		sizeEx = 0.016;
		text = "$STR_DISP_ERROR";
		colorText[] = {1,1,1,0.5};
	};
	class AllMissions: RscActiveMenu {
		idc = 104;
		x = 0.4;
		y = 0.935;
		w = 0.52;
		h = 0.03;
		font = "SteelfishB64";
		sizeEx = "0.5 * 0.05";
		colorText[] = {1,1,1,0.25};
		text = "$STR_DISP_MAIN_DESIGN";
	};
};
class RscDisplayMainVBS1: RscDisplayBackgroundStripesDark {
	access = 3;
	idd = 0;
	movingEnable = 1;
	controlsBackground[] = {"Background1","Background2","Background3"};
	controls[] = {"VBS1","Line1","Line2","Continue","Player","Game","SingleMission","Multiplayer","Custom","Options","Quit","Version","AllMissions","Copy"};
	class copy: RscText {
		style = "16 + 					2 + 				512";
		lineSpacing = 1.0;
		text = "$STR_CREDITS23";
		x = 0.03;
		y = 0.93;
		w = 0.9;
		h = 0.7;
		colorText[] = {1,1,1,0.5};
		font = "tahomaB24";
		sizeEx = 0.016;
	};
	class VBS1: RscText {
		style = 2;
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "VBS1";
		font = "SteelfishB128";
		colorText[] = {1,1,1,0.5};
		sizeEx = "0.6 * 0.098";
	};
	class Line1: RscText {
		style = 176;
		x = 0.7;
		y = 0.125;
		w = 0;
		h = 0.75;
		text = "";
		colorBackground[] = {1,1,1,1};
		color[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
	};
	class Line2: RscText {
		style = 176;
		x = 0.0;
		y = 0.46;
		w = 1;
		h = 0;
		text = "";
		colorBackground[] = {1,1,1,1};
		color[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
	};
	class Continue: RscActiveMenu {
		idc = 114;
		x = 0.05;
		y = 0.155;
		w = 0.0;
		h = 0.0;
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		text = "$STR_DISP_MAIN_CONTINUE";
	};
	class Player: RscActiveMenu {
		idc = 109;
		x = 0.02;
		y = 0.145;
		w = 0.5;
		h = 0.05;
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		text = "$STR_DISP_ERROR";
	};
	class Game: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 101;
		x = 0.72;
		y = 0.145;
		w = 0.25;
		h = 0.05;
		text = "$STR_DISP_MAIN_GAME";
	};
	class SingleMission: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 117;
		x = 0.72;
		y = 0.33;
		w = 0.52;
		h = 0.05;
		text = "$STR_DISP_MAIN_SINGLE";
		default = 1;
	};
	class Multiplayer: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 105;
		x = 0.72;
		y = 0.39;
		w = 0.52;
		h = 0.05;
		text = "$STR_DISP_MAIN_MULTI";
	};
	class Custom: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		style = 1;
		idc = 115;
		x = 0.48;
		y = 0.48;
		w = 0.2;
		h = 0.05;
		text = "$STR_DISP_MAIN_CUSTOM";
	};
	class Options: RscActiveMenu {
		font = "SteelfishB128";
		sizeEx = "0.6 * 0.098";
		idc = 102;
		style = 1;
		x = 0.48;
		y = 0.54;
		w = 0.2;
		h = 0.05;
		text = "$STR_DISP_MAIN_OPTIONS";
	};
	class Quit: RscActiveMenu {
		font = "SteelfishB128";
		idc = 106;
		x = 0.72;
		y = 0.8;
		w = 0.2;
		h = 0.05;
		sizeEx = "0.6 * 0.098";
		text = "$STR_DISP_MAIN_QUIT";
	};
	class Date: RscText {
		idc = 112;
		x = 0.4;
		y = 0.17;
		w = 0.2;
		h = 0.05;
		style = 2;
		font = "tahomaB24";
		sizeEx = 0.02;
		text = "$STR_DISP_ERROR";
		colorText[] = {1,1,1,0.5};
	};
	class Version: RscText {
		idc = 118;
		x = 0.4;
		y = 0.09;
		w = 0.2;
		h = 0.05;
		style = 2;
		font = "tahomaB24";
		sizeEx = 0.016;
		text = "$STR_DISP_ERROR";
		colorText[] = {1,1,1,0.5};
	};
	class AllMissions: RscActiveMenu {
		idc = 104;
		x = 0.4;
		y = 0.935;
		w = 0.52;
		h = 0.03;
		font = "SteelfishB64";
		sizeEx = "0.5 * 0.05";
		colorText[] = {1,1,1,0.25};
		text = "$STR_DISP_MAIN_DESIGN";
	};
};
class RscDisplaySingleMission: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 2;
	movingEnable = 1;
	objects[] = {"Notepad"};
	controls[] = {"Background1","Background2","Title","ButtonDifficulty","ButtonLoad","ButtonOK","ButtonCancel"};
	class Notepad: RscObject {
		model = "blok_selmis2.p3d";
		idc = 103;
		type = 83;
		autoOpen = 1;
		autoZoom = 0;
		animSpeed = 1;
		animation = "blok_mis.rtm";
		position[] = {0.2,0.02,1.2};
		direction[] = {0,"-sin 15","cos 15"};
		up[] = {0,"cos 15","sin 15"};
		positionBack[] = {0.3,0.1,1.4};
		inBack = 0;
		enableZoom = 1;
		zoomDuration = 0.5;
		scale = 2;
		controls[] = {"Missions","Overview"};
		class Missions {
			idc = 101;
			type = 22;
			style = 0;
			selection = "papir";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			angle = 0;
			rows = 9;
			size = 0.6;
			colorSelect[] = {0,0,0,1};
			colorSelectBackground[] = {0,0,0,0.2};
			colorText[] = {0.2,0.2,0.2,1};
			font = "courierNewB64";
		};
		class Overview: RscHTML {
			idc = 102;
			type = 23;
			selection = "papir2";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			angle = 0;
			size = 0.3;
			filename = "";
		};
	};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_SINGLE_TITLE";
	};
	class ButtonDifficulty: RscActiveMenu {
		idc = 104;
		x = 0.05;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		text = "$STR_DISP_ERROR";
		soundClick[] = {"",0,1};
	};
	class ButtonLoad: RscActiveMenu {
		idc = 105;
		x = 0.4;
		y = 0.9;
		w = 0.3;
		h = 0.05;
		text = "$STR_DISP_ERROR";
		soundClick[] = {"",0,1};
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_ERROR";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayOptions: RscDisplayStripesBrightLayeredBackground {
	access = 3;
	idd = 3;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonCredits","ButtonClose"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = 105;
		type = 83;
		autoOpen = 1;
		autoZoom = 1;
		animSpeed = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.15,0.3};
		direction[] = {"sin 5","sin 20 * cos 5","cos 20 * cos 5"};
		up[] = {0,"cos 20","-sin 20"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 1;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"Video","Audio","Configure","Difficulty"};
		class Video: RscObjNotebookButton {
			idc = 101;
			style = 2;
			x = 0;
			y = 0.05;
			w = 1;
			h = 0.15;
			text = "$STR_DISP_OPTIONS_VIDEO";
		};
		class Audio: RscObjNotebookButton {
			idc = 102;
			style = 2;
			x = 0;
			y = 0.3;
			w = 1;
			h = 0.15;
			text = "$STR_DISP_OPTIONS_AUDIO";
		};
		class Configure: RscObjNotebookButton {
			idc = 103;
			style = 2;
			x = 0;
			y = 0.55;
			w = 1;
			h = 0.15;
			text = "$STR_DISP_OPTIONS_CONFIGURE";
		};
		class Difficulty: RscObjNotebookButton {
			idc = 104;
			style = 2;
			x = 0;
			y = 0.8;
			w = 1;
			h = 0.15;
			text = "$STR_DISP_OPTIONS_DIFFICULTY";
		};
	};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_OPTIONS_TITLE";
	};
	class ButtonCredits: RscActiveMenu {
		idc = 106;
		x = 0.05;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_MAIN_CREDITS";
	};
	class ButtonClose: RscActiveMenu {
		idc = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_CLOSE";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscOptionText: RscObjNotebookText {
	access = 3;
	style = 1;
	x = 0.5;
	w = 0.3;
};
class RscOptionValue: RscObjNotebookText {
	access = 3;
	style = 1;
	x = 0.8;
	w = 0.1;
	text = "$STR_DISP_ERROR";
};
class RscOptionSlider {
	access = 3;
	type = 24;
	style = 1;
	x = 0.1;
	w = 0.8;
	h = 0.05;
	color[] = {0,1,0,1};
	angle = 0;
	selection = "display";
};
class RscDisplayOptionsVideo: RscDisplayStripesBrightLayeredBackground {
	access = 3;
	idd = 5;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonCancel","ButtonOK"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animPhase = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.15,0.3};
		direction[] = {"sin 5","sin 20 * cos 5","cos 20 * cos 5"};
		up[] = {0,"cos 20","-sin 20"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextResolution","ValueResolution","TextRefresh","ValueRefresh","TextHWTL","ValueHWTL","TextMultitexturing","ValueMultitexturing","TextWBuffer","ValueWBuffer","TextObjectShadows","ValueObjectShadows","TextVehicleShadows","ValueVehicleShadows","TextCloudlets","ValueCloudlets","TextBlood","ValueBlood","TextBrightness","ValueBrightness","SliderBrightness","TextGamma","ValueGamma","SliderGamma","TextFrameRate","ValueFrameRate","SliderFrameRate","TextVisualQuality","ValueVisualQuality","SliderVisualQuality","TextVisibility","ValueVisibility","SliderVisibility","TextTerrain","ValueTerrain"};
		class TextResolution: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = 0.45;
			text = "$STR_DISP_OPT_RESOLUTION";
		};
		class ValueResolution: RscObjNotebookListBox {
			idc = 113;
			x = 0.025;
			y = 0.083;
			w = 0.45;
			h = 0.2;
			rows = 4;
			size = 0.9;
		};
		class TextRefresh: RscObjNotebookText {
			x = 0.025;
			y = 0.283;
			w = 0.45;
			text = "$STR_DISP_OPT_REFRESH";
		};
		class ValueRefresh: RscObjNotebookListBox {
			idc = 114;
			x = 0.025;
			y = 0.333;
			w = 0.45;
			h = 0.2;
			rows = 4.5;
			size = 0.9;
		};
		class TextHWTL: RscObjNotebookText {
			x = 0.025;
			y = 0.567;
			w = 0.3;
			text = "$STR_DISP_OPT_HWTL";
		};
		class ValueHWTL: RscObjNotebookButton {
			idc = 118;
			x = 0.325;
			y = 0.567;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextMultitexturing: RscObjNotebookText {
			x = 0.025;
			y = 0.617;
			w = 0.3;
			text = "$STR_DISP_OPT_MULTITEXTURING";
		};
		class ValueMultitexturing: RscObjNotebookButton {
			idc = 120;
			x = 0.325;
			y = 0.617;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextWBuffer: RscObjNotebookText {
			x = 0.025;
			y = 0.667;
			w = 0.3;
			text = "$STR_DISP_OPT_WBUFFER";
		};
		class ValueWBuffer: RscObjNotebookButton {
			idc = 121;
			x = 0.325;
			y = 0.667;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextObjectShadows: RscObjNotebookText {
			x = 0.025;
			y = 0.733;
			w = 0.3;
			text = "$STR_DISP_OPT_OBJSHADOWS";
		};
		class ValueObjectShadows: RscObjNotebookButton {
			idc = 115;
			x = 0.325;
			y = 0.733;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextVehicleShadows: RscObjNotebookText {
			x = 0.025;
			y = 0.783;
			w = 0.3;
			text = "$STR_DISP_OPT_VEHSHADOWS";
		};
		class ValueVehicleShadows: RscObjNotebookButton {
			idc = 116;
			x = 0.325;
			y = 0.783;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextCloudlets: RscObjNotebookText {
			x = 0.025;
			y = 0.833;
			w = 0.3;
			text = "$STR_DISP_OPT_CLOUDLETS";
		};
		class ValueCloudlets: RscObjNotebookButton {
			idc = 117;
			x = 0.325;
			y = 0.833;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextBlood: RscObjNotebookText {
			idc = 122;
			x = 0.025;
			y = 0.917;
			w = 0.3;
			text = "$STR_DISP_OPT_BLOOD";
		};
		class ValueBlood: RscObjNotebookButton {
			idc = 119;
			x = 0.325;
			y = 0.917;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextBrightness: RscOptionText {
			x = 0.525;
			w = 0.3;
			y = 0.033;
			text = "$STR_DISP_OPT_BRIGHT";
		};
		class ValueBrightness: RscOptionValue {
			idc = 111;
			x = 0.825;
			w = 0.1;
			y = 0.033;
		};
		class SliderBrightness: RscOptionSlider {
			idc = 112;
			x = 0.525;
			w = 0.45;
			y = 0.083;
		};
		class TextGamma: RscOptionText {
			x = 0.525;
			w = 0.3;
			y = 0.173;
			text = "$STR_DISP_OPT_GAMMA";
		};
		class ValueGamma: RscOptionValue {
			idc = 109;
			x = 0.825;
			w = 0.1;
			y = 0.173;
		};
		class SliderGamma: RscOptionSlider {
			idc = 110;
			x = 0.525;
			w = 0.45;
			y = 0.223;
		};
		class TextFrameRate: RscOptionText {
			x = 0.525;
			w = 0.3;
			y = 0.313;
			text = "$STR_DISP_OPT_FRAMERATE";
		};
		class ValueFrameRate: RscOptionValue {
			idc = 105;
			x = 0.825;
			w = 0.1;
			y = 0.313;
		};
		class SliderFrameRate: RscOptionSlider {
			idc = 106;
			x = 0.525;
			w = 0.45;
			y = 0.363;
		};
		class TextVisualQuality: RscOptionText {
			x = 0.525;
			w = 0.3;
			y = 0.453;
			text = "$STR_DISP_OPT_QUALITY";
		};
		class ValueVisualQuality: RscOptionValue {
			idc = 101;
			x = 0.825;
			w = 0.1;
			y = 0.453;
		};
		class SliderVisualQuality: RscOptionSlider {
			idc = 102;
			x = 0.525;
			w = 0.45;
			y = 0.503;
		};
		class TextVisibility: RscOptionText {
			x = 0.525;
			w = 0.3;
			y = 0.593;
			text = "$STR_DISP_OPT_VISIBILITY";
		};
		class ValueVisibility: RscOptionValue {
			idc = 103;
			x = 0.825;
			w = 0.1;
			y = 0.593;
		};
		class SliderVisibility: RscOptionSlider {
			idc = 104;
			x = 0.525;
			w = 0.45;
			y = 0.643;
		};
		class TextTerrain: RscObjNotebookText {
			x = 0.525;
			y = 0.717;
			w = 0.45;
			text = "$STR_DISP_OPT_TERRAIN";
		};
		class ValueTerrain: RscObjNotebookListBox {
			idc = 123;
			x = 0.525;
			y = 0.767;
			w = 0.45;
			h = 0.2;
			rows = 4;
			size = 0.9;
		};
	};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_OPTIONS_VIDEO";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.09;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.6;
		y = 0.9;
		w = 0.13;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayOptionsAudio: RscDisplayStripesBrightLayeredBackground {
	access = 3;
	idd = 6;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonCancel","ButtonOK"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animPhase = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.15,0.3};
		direction[] = {"sin 5","sin 20 * cos 5","cos 20 * cos 5"};
		up[] = {0,"cos 20","-sin 20"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextMusic","ValueMusic","SliderMusic","TextEffects","ValueEffects","SliderEffects","TextVoices","ValueVoices","SliderVoices","TextHWAcc","ValueHWAcc","TextEAX","ValueEAX","TextSingleVoice","ValueSingleVoice"};
		class TextEffects: RscOptionText {
			y = 0.1;
			text = "$STR_DISP_OPT_EFFECTS";
		};
		class ValueEffects: RscOptionValue {
			idc = 103;
			y = 0.1;
		};
		class SliderEffects: RscOptionSlider {
			idc = 104;
			y = 0.15;
		};
		class TextVoices: RscOptionText {
			y = 0.22;
			text = "$STR_DISP_OPT_VOICES";
		};
		class ValueVoices: RscOptionValue {
			idc = 105;
			y = 0.22;
		};
		class SliderVoices: RscOptionSlider {
			idc = 106;
			y = 0.27;
		};
		class TextMusic: RscOptionText {
			y = 0.34;
			text = "$STR_DISP_OPT_MUSIC";
		};
		class ValueMusic: RscOptionValue {
			idc = 101;
			y = 0.34;
		};
		class SliderMusic: RscOptionSlider {
			idc = 102;
			y = 0.39;
		};
		class TextHWAcc: RscObjNotebookText {
			x = 0.22;
			y = 0.55;
			w = 0.4;
			text = "$STR_DISP_OPT_HWACC";
		};
		class ValueHWAcc: RscObjNotebookButton {
			idc = 108;
			x = 0.62;
			y = 0.55;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextEAX: RscObjNotebookText {
			x = 0.22;
			y = 0.6;
			w = 0.4;
			text = "$STR_DISP_OPT_EAX";
		};
		class ValueEAX: RscObjNotebookButton {
			idc = 109;
			x = 0.62;
			y = 0.6;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextSingleVoice: RscObjNotebookText {
			x = 0.22;
			y = 0.65;
			w = 0.4;
			text = "$STR_DISP_OPT_SINGLE_VOICE";
		};
		class ValueSingleVoice: RscObjNotebookButton {
			idc = 110;
			x = 0.62;
			y = 0.65;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
	};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_OPTIONS_AUDIO";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.09;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.6;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayDifficulty: RscDisplayStripesBrightLayeredBackground {
	access = 3;
	idd = 7;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonDefault","ButtonCancel","ButtonOK"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animPhase = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.15,0.3};
		direction[] = {"sin 5","sin 20 * cos 5","cos 20 * cos 5"};
		up[] = {0,"cos 20","-sin 20"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextName","TextCadet","TextVeteran","ValueDifficulties","EnableSubtitles","EnableRadio"};
		class TextName: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = "0.95 * 0.6";
			text = "$STR_DISP_DIFF_NAME";
		};
		class TextCadet: RscObjNotebookText {
			x = "0.025 +  0.95 * 0.6";
			y = 0.033;
			w = "0.95 * 0.2";
			text = "$STR_DISP_DIFF_CADET";
		};
		class TextVeteran: RscObjNotebookText {
			x = "0.025 +  0.95 * 0.8";
			y = 0.033;
			w = "0.95 * 0.2";
			text = "$STR_DISP_DIFF_VETERAN";
		};
		class ValueDifficulties: RscObjNotebookListBox {
			idc = 101;
			x = 0.025;
			y = 0.1;
			w = 0.95;
			h = 0.767;
			rows = "0.767 / 0.05";
			size = 0.9;
		};
		class EnableSubtitles: RscObjNotebookButton {
			idc = 102;
			style = 2;
			x = 0.1;
			y = 0.917;
			w = 0.4;
			text = "$STR_DISP_ERROR";
		};
		class EnableRadio: RscObjNotebookButton {
			idc = 103;
			style = 2;
			x = 0.5;
			y = 0.917;
			w = 0.4;
			text = "$STR_DISP_ERROR";
		};
	};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_OPTIONS_DIFFICULTY";
	};
	class ButtonDefault: RscActiveMenu {
		idc = 104;
		x = 0.05;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_DEFAULT";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.6;
		y = 0.9;
		w = 0.09;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayConfigure: RscDisplayStripesBrightLayeredBackground {
	access = 3;
	idd = 4;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonDefault","ButtonCancel","ButtonOK"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animPhase = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.15,0.3};
		direction[] = {"sin 5","sin 20 * cos 5","cos 20 * cos 5"};
		up[] = {0,"cos 20","-sin 20"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextName","TextKeys","ValueKeys","TextReserved","TextMouseSens","TextXAxis","ValueXAxis","TextYAxis","ValueYAxis","ValueYReversed","TextButtons","ValueButtons","ValueJoystick"};
		class TextName: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = "0.95 * 0.95 * 0.4";
			text = "$STR_DISP_CONF_NAME";
		};
		class TextKeys: RscObjNotebookText {
			x = "0.025 + 0.95 * 0.95 * 0.4";
			y = 0.033;
			w = "0.95 * 0.95 * 0.6";
			text = "$STR_DISP_CONF_KEYS";
		};
		class ValueKeys: RscObjNotebookListBox {
			idc = 102;
			x = 0.025;
			y = 0.1;
			w = 0.95;
			h = 0.567;
			rows = 10.8;
			size = 0.9;
		};
		class TextReserved: RscObjNotebookText {
			x = 0.025;
			y = 0.667;
			w = 0.95;
			text = "$STR_DISP_CONF_RES";
		};
		class TextMouseSens {
			type = 20;
			style = 64;
			idc = -1;
			color[] = {0,1,0,1};
			font = "courierNewB64";
			angle = 0;
			selection = "display";
			x = 0.0;
			y = 0.767;
			w = 0.6;
			h = 0.2;
			h2 = 0.05;
			text = "$STR_DISP_CONF_SENS";
		};
		class TextXAxis: RscObjNotebookText {
			x = 0.05;
			y = 0.817;
			w = 0.15;
			text = "$STR_DISP_CONF_XAXIS";
		};
		class ValueXAxis {
			type = 24;
			idc = 103;
			style = 1;
			x = 0.2;
			y = 0.827;
			w = 0.35;
			h = 0.03;
			color[] = {0,1,0,1};
			angle = 0;
			selection = "display";
		};
		class TextYAxis: RscObjNotebookText {
			x = 0.05;
			y = 0.867;
			w = 0.15;
			text = "$STR_DISP_CONF_YAXIS";
		};
		class ValueYAxis {
			type = 24;
			idc = 104;
			style = 1;
			x = 0.2;
			y = 0.877;
			w = 0.35;
			h = 0.03;
			color[] = {0,1,0,1};
			angle = 0;
			selection = "display";
		};
		class ValueYReversed: RscObjNotebookButton {
			idc = 105;
			style = 2;
			x = 0.6;
			y = 0.767;
			w = 0.35;
			text = "$STR_DISP_ERROR";
		};
		class TextButtons: RscObjNotebookText {
			x = 0.6;
			y = 0.817;
			w = 0.3;
			text = "$STR_DISP_CONF_MOUSE_BUTTON";
		};
		class ValueButtons: RscObjNotebookButton {
			idc = 107;
			style = 2;
			x = 0.9;
			y = 0.817;
			w = 0.075;
			text = "$STR_DISP_ERROR";
		};
		class ValueJoystick: RscObjNotebookButton {
			idc = 106;
			style = 2;
			x = 0.6;
			y = 0.867;
			w = 0.35;
			text = "$STR_DISP_ERROR";
		};
	};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_OPTIONS_CONFIGURE";
	};
	class ButtonDefault: RscActiveMenu {
		idc = 101;
		x = 0.05;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_DEFAULT";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.6;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayMultiplayer: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 8;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","GameSpy","Progress","ButtonCancel","ButtonJoin","ButtonNew"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = 106;
		type = 83;
		autoOpen = 1;
		autoZoom = 1;
		animSpeed = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 1;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"IconServer","ColumnServer","IconMission","ColumnMission","IconState","ColumnState","IconPlayers","ColumnPlayers","IconPing","ColumnPing","FilterServer","FilterMission","FilterPlayers","FilterPing","ValueSessions","ButtonDPlay","ButtonInternet","ButtonRemote","ButtonPassword","ButtonRefresh","ButtonFilter","ButtonPort"};
		class TitleIcon: RscObjNotebookText {
			y = 0.043;
			w = 0.015;
			h = 0.02;
			style = 48;
			text = "\misc\sipkad.paa";
		};
		class TitleColumn: RscObjNotebookButton {
			y = 0.033;
			h = 0.04;
		};
		class FilterColumn: RscObjNotebookText {
			y = 0.073;
			h = 0.04;
			text = "STR_DISP_ERROR";
		};
		class IconServer: TitleIcon {
			idc = 111;
			x = 0.025;
		};
		class ColumnServer: TitleColumn {
			idc = 112;
			text = "$STR_MP_SERVER";
			x = "0.025 + 		0.015";
			w = "0.38 * 	0.9025 - 		0.015";
		};
		class FilterServer: FilterColumn {
			idc = 125;
			x = 0.025;
			w = "0.38 * 	0.9025";
		};
		class IconMission: TitleIcon {
			idc = 113;
			x = "0.025 + 0.38 * 	0.9025";
		};
		class ColumnMission: TitleColumn {
			idc = 114;
			text = "$STR_SECTION_MISSION";
			x = "0.025 + 0.38 * 	0.9025 + 		0.015";
			w = "0.3 * 	0.9025 - 		0.015";
		};
		class FilterMission: FilterColumn {
			idc = 126;
			x = "0.025 + 0.38 * 	0.9025";
			w = "0.3 * 	0.9025";
		};
		class IconState: TitleIcon {
			idc = 115;
			x = "0.025 + 0.68 * 	0.9025";
		};
		class ColumnState: TitleColumn {
			idc = 116;
			text = "$STR_MENU_STATUS";
			x = "0.025 + 0.68 * 	0.9025 + 		0.015";
			w = "0.12 * 	0.9025 - 		0.015";
		};
		class IconPlayers: TitleIcon {
			idc = 117;
			x = "0.025 + 0.8 * 	0.9025";
		};
		class ColumnPlayers: TitleColumn {
			idc = 118;
			text = "$STR_MPTABLE_PLAYERS";
			x = "0.025 + 0.8 * 	0.9025 + 		0.015";
			w = "0.12 * 	0.9025 - 		0.015";
		};
		class FilterPlayers: FilterColumn {
			idc = 127;
			x = "0.025 + 0.8 * 	0.9025";
			w = "0.12 * 	0.9025";
		};
		class IconPing: TitleIcon {
			idc = 119;
			x = "0.025 + 0.92 * 	0.9025";
		};
		class ColumnPing: TitleColumn {
			idc = 120;
			text = "$STR_DISP_MULTI_PING";
			x = "0.025 + 0.92 * 	0.9025 + 		0.015";
			w = "0.08 * 	0.9025 - 		0.015";
		};
		class FilterPing: FilterColumn {
			idc = 128;
			x = "0.025 + 0.92 * 	0.9025";
			w = "0.08 * 	0.9025";
		};
		class ValueSessions: RscObjNotebookListBox {
			idc = 102;
			x = 0.025;
			y = 0.113;
			w = 0.95;
			h = 0.75;
			rows = 9;
		};
		class ButtonDPlay: RscObjNotebookButton {
			idc = 109;
			text = "$STR_DISP_ERROR";
			x = 0.025;
			y = 0.867;
			w = 0.4;
		};
		class ButtonInternet: RscObjNotebookButton {
			idc = 122;
			x = 0.425;
			y = 0.867;
			w = 0.3;
			text = "$STR_DISP_ERROR";
		};
		class ButtonRemote: RscObjNotebookButton {
			idc = 103;
			x = 0.725;
			y = 0.867;
			w = 0.15;
			text = "$STR_MULTI_REMOTE";
		};
		class ButtonPassword: RscObjNotebookButton {
			idc = 107;
			text = "$STR_DISP_ERROR";
			x = 0.025;
			y = 0.917;
			w = 0.4;
		};
		class ButtonRefresh: RscObjNotebookButton {
			idc = 123;
			text = "$STR_DISP_MULTI_REFRESH";
			x = 0.425;
			y = 0.917;
			w = 0.15;
		};
		class ButtonFilter: RscObjNotebookButton {
			idc = 124;
			text = "$STR_DISP_MULTI_FILTER";
			x = 0.575;
			y = 0.917;
			w = 0.15;
		};
		class ButtonPort: RscObjNotebookButton {
			idc = 108;
			text = "$STR_DISP_PORT_TITLE";
			x = 0.725;
			y = 0.917;
			w = 0.25;
		};
	};
	class Title: RscText {
		idc = 101;
		style = 2;
		x = 0.0;
		y = 0.02;
		w = 1.0;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_ERROR";
	};
	class GameSpy: RscPicture {
		idc = 110;
		text = "\misc\GameSpy.pac";
		colorText[] = {1,1,1,1};
		x = 0.05;
		y = 0.9;
		w = 0.16;
		h = 0.053;
	};
	class Progress {
		type = 8;
		style = 0;
		idc = 121;
		x = 0.05;
		y = 0.96;
		w = 0.16;
		h = 0.02;
		colorFrame[] = {1,1,1,1};
		colorBar[] = {1,1,1,0.5};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		style = 2;
		x = 0.55;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class ButtonJoin: RscActiveMenu {
		idc = 105;
		text = "$STR_DISP_MULTI_JOIN";
		style = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonNew: RscActiveMenu {
		idc = 104;
		text = "$STR_DISP_MULTI_NEW";
		style = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayPort: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 69;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonOK","ButtonCancel"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextPort","ValuePort"};
		class TextPort: RscObjNotebookText {
			x = 0.3;
			y = 0.45;
			w = 0.4;
			text = "$STR_DISP_IP_PORT";
		};
		class ValuePort: RscObjNotebookEdit {
			idc = 101;
			x = 0.3;
			y = 0.5;
			w = 0.4;
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_PORT_TITLE";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayPassword: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 64;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonOK","ButtonCancel"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextPassword","ValuePassword"};
		class TextPassword: RscObjNotebookText {
			x = 0.3;
			y = 0.45;
			w = 0.4;
			text = "$STR_DISP_PASSWORD";
		};
		class ValuePassword: RscObjNotebookEdit {
			idc = 101;
			x = 0.3;
			y = 0.5;
			w = 0.4;
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_PASSWORD_TITLE";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayIPAddress: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 19;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonOK","ButtonCancel"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextAddress","ValueAddress","TextPort","ValuePort"};
		class TextAddress: RscObjNotebookText {
			x = 0.3;
			y = 0.4;
			w = 0.4;
			text = "$STR_DISP_IP_ADDRESS";
		};
		class ValueAddress: RscObjNotebookEdit {
			idc = 101;
			x = 0.3;
			y = 0.45;
			w = 0.4;
		};
		class TextPort: RscObjNotebookText {
			x = 0.3;
			y = 0.5;
			w = 0.4;
			text = "$STR_DISP_IP_PORT";
		};
		class ValuePort: RscObjNotebookEdit {
			idc = 102;
			x = 0.3;
			y = 0.55;
			w = 0.4;
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_IP_TITLE";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayFilter: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 71;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonDefault","ButtonOK","ButtonCancel"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextServer","ValueServer","TextMission","ValueMission","TextMaxPing","ValueMaxPing","TextMinPlayers","ValueMinPlayers","TextMaxPlayers","ValueMaxPlayers","FullServers","PasswordedServers"};
		class TextServer: RscObjNotebookText {
			x = 0.025;
			y = 0.1;
			w = 0.275;
			text = "$STR_DISP_FILTER_SERVER";
		};
		class ValueServer: RscObjNotebookEdit {
			idc = 101;
			x = 0.3;
			y = 0.1;
			w = 0.4;
		};
		class TextMission: RscObjNotebookText {
			x = 0.025;
			y = 0.17;
			w = 0.275;
			text = "$STR_DISP_FILTER_MISSION";
		};
		class ValueMission: RscObjNotebookEdit {
			idc = 102;
			x = 0.3;
			y = 0.17;
			w = 0.4;
		};
		class TextMaxPing: RscObjNotebookText {
			x = 0.025;
			y = 0.24;
			w = 0.275;
			text = "$STR_DISP_FILTER_MAXPING";
		};
		class ValueMaxPing: RscObjNotebookEdit {
			idc = 103;
			x = 0.3;
			y = 0.24;
			w = 0.4;
		};
		class TextMinPlayers: RscObjNotebookText {
			x = 0.025;
			y = 0.31;
			w = 0.275;
			text = "$STR_DISP_FILTER_MINPLAYERS";
		};
		class ValueMinPlayers: RscObjNotebookEdit {
			idc = 104;
			x = 0.3;
			y = 0.31;
			w = 0.4;
		};
		class TextMaxPlayers: RscObjNotebookText {
			x = 0.025;
			y = 0.38;
			w = 0.275;
			text = "$STR_DISP_FILTER_MAXPLAYERS";
		};
		class ValueMaxPlayers: RscObjNotebookEdit {
			idc = 105;
			x = 0.3;
			y = 0.38;
			w = 0.4;
		};
		class FullServers: RscObjNotebookButton {
			idc = 106;
			text = "$STR_DISP_ERROR";
			x = 0.025;
			y = 0.5;
			w = 0.5;
		};
		class PasswordedServers: RscObjNotebookButton {
			idc = 107;
			text = "$STR_DISP_ERROR";
			x = 0.025;
			y = 0.57;
			w = 0.5;
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_FILTER_TITLE";
	};
	class ButtonDefault: RscActiveMenu {
		idc = 108;
		text = "$STR_DISP_DEFAULT";
		x = 0.1;
		y = 0.9;
		w = 0.15;
		h = 0.05;
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayServer: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 17;
	movingEnable = 1;
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonDifficulty","ButtonEditor","ButtonCancel","ButtonOK"};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextIslands","ValueIslands","TextMissions","ValueMissions"};
		class TextIslands: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = 0.3;
			text = "$STR_DISP_SERVER_ISLAND";
		};
		class ValueIslands: RscObjNotebookListBox {
			idc = 101;
			x = 0.025;
			y = 0.1;
			w = 0.45;
			h = 0.867;
			rows = 5;
			size = 0.4;
		};
		class TextMissions: RscObjNotebookText {
			x = 0.525;
			y = 0.033;
			w = 0.225;
			text = "$STR_DISP_SERVER_MISSION";
		};
		class ValueMissions: RscObjNotebookListBox {
			idc = 102;
			x = 0.525;
			y = 0.1;
			w = 0.45;
			h = 0.867;
			rows = 10;
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_SERVER_TITLE";
	};
	class ButtonDifficulty: RscActiveMenu {
		idc = 104;
		x = 0.05;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		text = "$STR_DISP_ERROR";
		soundClick[] = {"",0,1};
	};
	class ButtonEditor: RscActiveMenu {
		idc = 103;
		x = 0.45;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_EDIT";
		soundClick[] = {"",0,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayRemoteMissions: RscDisplayServer {
	access = 3;
	controls[] = {"Background1","Background2","Title","PlayersTitleBackground","PlayersTitle","PlayersBackground","Players","ButtonDifficulty","ButtonEditor","ButtonCancel","ButtonOK"};
	class PlayersTitleBackground: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class PlayersTitle: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "$STR_DISP_SRVSETUP_PLAYERS";
		style = "0 + 			160";
	};
	class PlayersBackground: RscText {
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Players: RscListBox {
		idc = 105;
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorSelect[] = {1,1,1,1};
		colorText[] = {1,1,1,0.75};
		rowHeight = 0.025;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_DISCONNECT";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayWizardTemplate: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 67;
	movingEnable = 1;
	controlsBackground[] = {"Background3","Background4","Background5"};
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonCancel","ButtonOK"};
	class Background4: RscBackgroundStripeTop {};
	class Background5: RscBackgroundStripeBottom {};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextTemplates","ValueTemplates","TextOverview","ValueOverview","TextName","ValueName"};
		class TextTemplates: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = 0.3;
			text = "$STR_DISP_MPW_TEMPLATE";
		};
		class ValueTemplates: RscObjNotebookListBox {
			idc = 101;
			x = 0.025;
			y = 0.1;
			w = 0.45;
			h = 0.78;
			rows = 9;
		};
		class TextOverview: RscObjNotebookText {
			x = 0.525;
			y = 0.033;
			w = 0.225;
			text = "$STR_DISP_MPW_DESCRIPTION";
		};
		class ValueOverview: RscHTML {
			idc = 102;
			type = 23;
			selection = "display";
			x = 0.525;
			y = 0.1;
			w = 0.45;
			h = 0.78;
			angle = 0;
			size = 0.35;
			filename = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,1,0,1};
			colorBold[] = {0,1,0,0.5};
			colorLink[] = {0,1,0,1};
			colorLinkActive[] = {0,1,0,1};
		};
		class TextName: RscObjNotebookText {
			x = 0.025;
			y = 0.917;
			w = 0.25;
			text = "$STR_DISP_MPW_NAME";
		};
		class ValueName: RscObjNotebookEdit {
			idc = 103;
			x = 0.275;
			y = 0.917;
			w = 0.7;
			text = "Mission1";
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_MPW_TITLE";
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayWizardMap: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 68;
	movingEnable = 0;
	controlsBackground[] = {"Background","Map"};
	controls[] = {"Background3","Background4","TitleTop","ButtonCancel","ButtonFinish"};
	class Background: RscText {
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Map: RscMapControl {
		moveOnEdges = 1;
		x = 0;
		y = 0.125;
		w = 1;
		h = 0.75;
	};
	class Background3: RscBackgroundStripeTopAlpha {};
	class TitleTop: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		style = 2;
		text = "$STR_DISP_MPW_TITLE";
		font = "SteelfishB128";
		sizeEx = 0.098;
		colorText[] = {1,1,1,1};
	};
	class Background4: RscBackgroundStripeBottomAlpha {};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CANCEL";
	};
	class ButtonFinish: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_MPW_FINISH";
		default = 1;
	};
};
class RscDisplayClient {
	access = 3;
	idd = 18;
	movingEnable = 1;
	controls[] = {"Background","PlayersTitleBackground","PlayersTitle","PlayersBackground","Players"};
	class Background: RscText {
		idc = 101;
		style = 2;
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		text = "$STR_DISP_CLIENT_TEXT";
		font = "SteelfishB128";
		sizeEx = 0.098;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,1};
	};
	class PlayersTitleBackground: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class PlayersTitle: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "$STR_DISP_SRVSETUP_PLAYERS";
		style = "0 + 			160";
	};
	class PlayersBackground: RscText {
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Players: RscListBox {
		idc = 102;
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorSelect[] = {1,1,1,1};
		colorText[] = {1,1,1,0.75};
		rowHeight = 0.025;
	};
};
class RscDisplayMultiplayerSetup: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 70;
	movingEnable = 1;
	controlsBackground[] = {"Background3","Background4","Background5"};
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonKick","ButtonCancel","ButtonOK"};
	class Background4: RscBackgroundStripeTop {};
	class Background5: RscBackgroundStripeBottom {};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"FrameHeader","TextMission","ValueMission","TextIsland","ValueIsland","TextDescription","ValueDescription","TextSide","ButtonWest","ButtonEast","ButtonGuerrila","ButtonCivilian","TextRoles","ValueRoles","TextParam1","ValueParam1","TextParam2","ValueParam2","TextPool","ValuePool","TextMessage","ButtonEnableAll","ButtonLock"};
		class Frame: RscObjNotebookText {
			style = 80;
			colorBackground[] = {0,1,0,0.2};
			text = "";
		};
		class FrameHeader: Frame {
			x = 0.025;
			y = 0.033;
			w = 0.95;
			h = 0.1;
		};
		class TextMission: RscObjNotebookText {
			x = 0.05;
			y = 0.033;
			w = 0.15;
			text = "$STR_DISP_SRVSETUP_NAME";
		};
		class ValueMission: RscObjNotebookText {
			idc = 101;
			x = 0.205;
			y = 0.033;
			w = 0.39;
			text = "$STR_DISP_ERROR";
		};
		class TextIsland: RscObjNotebookText {
			x = 0.6;
			y = 0.033;
			w = 0.12;
			text = "$STR_DISP_SRVSETUP_ISLAND";
		};
		class ValueIsland: RscObjNotebookText {
			idc = 102;
			x = 0.725;
			y = 0.033;
			w = 0.24;
			text = "$STR_DISP_ERROR";
		};
		class TextDescription: RscObjNotebookText {
			x = 0.05;
			y = 0.083;
			w = 0.15;
			h = 0.04;
			text = "$STR_DISP_SRVSETUP_DESC";
		};
		class ValueDescription: RscObjNotebookText {
			idc = 103;
			x = 0.225;
			y = 0.083;
			w = 0.75;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextSide: RscObjNotebookText {
			x = 0.025;
			y = 0.15;
			w = 0.125;
			text = "$STR_DISP_MPSETUP_SIDE";
		};
		class ButtonSide: RscObjNotebookButton {
			style = 2;
			color[] = {0,1,0,0.7};
			colorActive[] = {0,1,0,1};
			colorDisabled[] = {0,1,0,0.4};
			colorShade[] = {0,1,0,0.3};
			pictureWidth = 0.72;
			pictureHeight = 1.0;
			textHeight = 0.3;
			x = 0.025;
			w = 0.125;
			h = 0.12;
		};
		class ButtonWest: ButtonSide {
			idc = 104;
			y = 0.2;
			text = "$STR_WEST";
			picture = "\misc\usa.paa";
		};
		class ButtonEast: ButtonSide {
			idc = 105;
			y = 0.33;
			text = "$STR_EAST";
			picture = "\misc\russia.paa";
		};
		class ButtonGuerrila: ButtonSide {
			idc = 106;
			y = 0.46;
			text = "$STR_GUERRILA";
			picture = "\misc\resist.paa";
		};
		class ButtonCivilian: ButtonSide {
			idc = 107;
			y = 0.59;
			text = "$STR_CIVILIAN";
			picture = "\misc\civil.paa";
		};
		class ButtonEnableAll: RscObjNotebookButton {
			idc = 117;
			style = 48;
			x = 0.025;
			y = 0.772;
			w = 0.05;
			h = 0.067;
			text = "";
		};
		class ButtonLock: RscObjNotebookButton {
			idc = 118;
			style = 48;
			x = 0.075;
			y = 0.772;
			w = 0.05;
			h = 0.067;
			text = "";
		};
		class TextRoles: RscObjNotebookText {
			idc = 108;
			x = 0.15;
			y = 0.15;
			w = 0.5;
			text = "$STR_DISP_ERROR";
		};
		class ValueRoles: RscObjNotebookListBox {
			idc = 109;
			x = 0.15;
			y = 0.2;
			w = 0.5;
			h = 0.51;
			rows = 6;
			colorBackground[] = {0,1,0,0.15};
			colorSelectBackground[] = {0,1,0,0.3};
		};
		class TextParam1: RscObjNotebookText {
			idc = 110;
			x = 0.15;
			y = 0.722;
			w = 0.24;
			text = "$STR_DISP_ERROR";
		};
		class ValueParam1: RscObjNotebookListBox {
			idc = 111;
			x = 0.15;
			y = 0.772;
			w = 0.24;
			h = 0.14;
			rows = 3;
		};
		class TextParam2: RscObjNotebookText {
			idc = 112;
			x = 0.41;
			y = 0.722;
			w = 0.24;
			text = "$STR_DISP_ERROR";
		};
		class ValueParam2: RscObjNotebookListBox {
			idc = 113;
			x = 0.41;
			y = 0.772;
			w = 0.24;
			h = 0.14;
			rows = 3;
		};
		class TextPool: RscObjNotebookText {
			x = 0.675;
			y = 0.15;
			w = 0.3;
			text = "$STR_DISP_SRVSIDE_POOL";
		};
		class ValuePool: RscObjNotebookListBox {
			idc = 114;
			x = 0.675;
			y = 0.2;
			w = 0.3;
			h = 0.712;
			rows = 15;
		};
		class TextMessage: Frame {
			idc = 115;
			style = "80 + 					2";
			x = 0.025;
			y = 0.925;
			w = 0.95;
			text = "$STR_DISP_ERROR";
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_MPSETUP_TITLE";
	};
	class ButtonKick: RscActiveMenu {
		idc = 116;
		text = "$STR_DISP_MP_KICKOFF";
		x = 0.05;
		y = 0.9;
		w = 0.15;
		h = 0.05;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.65;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayMPPlayers: RscDisplayStripesLayeredBackground {
	access = 3;
	idd = 65;
	movingEnable = 1;
	controlsBackground[] = {"Background3","Background4","Background5"};
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonKickOff","ButtonBan","ButtonCancel"};
	class Background4: RscBackgroundStripeTop {};
	class Background5: RscBackgroundStripeBottom {};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 1;
		animation = "notebook.rtm";
		animPhase = 1;
		position[] = {0,-0.175,0.25};
		positionBack[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextMission","ValueMission","TextIsland","ValueIsland","TextTime","ValueTime","ValueRest","TextPlayers","ValuePlayers","TextPlayer","ValuePlayer","TextPlayerName","ValuePlayerName","TextPlayerMail","ValuePlayerMail","TextPlayerICQ","ValuePlayerICQ","TextPlayerRemark","ValuePlayerRemark","TextSquad","ValueSquad","TextSquadName","ValueSquadName","TextSquadId","ValueSquadId","TextSquadMail","ValueSquadMail","TextSquadWeb","ValueSquadWeb","TextSquadPicture","ValueSquadPicture","TextSquadTitle","ValueSquadTitle","PingTitle","PingMinValue","PingAvgValue","PingMaxValue","BandwidthTitle","BandwidthMinValue","BandwidthAvgValue","BandwidthMaxValue","DesyncTitle","DesyncValue"};
		class TextNormal: RscObjNotebookText {};
		class TextSmall: RscObjNotebookText {};
		class TextMission: TextNormal {
			x = 0.025;
			y = 0.033;
			w = 0.12;
			text = "$STR_DISP_SRVSETUP_NAME";
		};
		class ValueMission: TextNormal {
			idc = 116;
			x = 0.145;
			y = 0.033;
			w = 0.23;
			text = "$STR_DISP_ERROR";
		};
		class TextIsland: TextNormal {
			x = 0.4;
			y = 0.033;
			w = 0.1;
			text = "$STR_DISP_SRVSETUP_ISLAND";
		};
		class ValueIsland: TextNormal {
			idc = 117;
			x = 0.5;
			y = 0.033;
			w = 0.2;
			text = "$STR_DISP_ERROR";
		};
		class TextTime: TextNormal {
			x = 0.625;
			y = 0.033;
			w = 0.1;
			text = "$STR_DISP_MP_PL_TIME";
		};
		class ValueTime: TextNormal {
			idc = 118;
			x = 0.725;
			y = 0.033;
			w = 0.1;
			text = "$STR_DISP_ERROR";
		};
		class ValueRest: TextNormal {
			idc = 126;
			x = 0.825;
			y = 0.033;
			w = 0.15;
			text = "$STR_DISP_ERROR";
		};
		class TextPlayers: TextNormal {
			x = 0.025;
			y = 0.083;
			w = 0.25;
			h = 0.04;
			text = "$STR_DISP_MP_PLAYERS";
		};
		class ValuePlayers: RscObjNotebookListBox {
			idc = 101;
			x = 0.025;
			y = 0.133;
			w = 0.25;
			h = 0.833;
			size = 0.9;
			rows = 18.5;
		};
		class TextPlayer: TextNormal {
			x = 0.3;
			y = 0.083;
			w = 0.15;
			h = 0.06;
			text = "$STR_DISP_MP_PL";
		};
		class ValuePlayer: TextNormal {
			idc = 102;
			x = 0.45;
			y = 0.083;
			w = 0.525;
			h = 0.06;
			text = "$STR_DISP_ERROR";
		};
		class TextPlayerName: TextNormal {
			x = 0.325;
			y = 0.153;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_PL_NAME";
		};
		class ValuePlayerName: TextNormal {
			idc = 103;
			x = 0.45;
			y = 0.153;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextPlayerMail: TextNormal {
			x = 0.325;
			y = 0.203;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_PL_MAIL";
		};
		class ValuePlayerMail: TextNormal {
			idc = 104;
			x = 0.45;
			y = 0.203;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextPlayerICQ: TextNormal {
			x = 0.325;
			y = 0.253;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_PL_ICQ";
		};
		class ValuePlayerICQ: TextNormal {
			idc = 105;
			x = 0.45;
			y = 0.253;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextPlayerRemark: TextSmall {
			x = 0.325;
			y = 0.303;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_PL_REMARK";
		};
		class ValuePlayerRemark: TextSmall {
			idc = 106;
			x = 0.45;
			y = 0.303;
			w = 0.525;
			h = 0.2;
			text = "$STR_DISP_ERROR";
			style = 16;
			lines = 5;
		};
		class TextSquad: TextNormal {
			x = 0.3;
			y = 0.513;
			w = 0.15;
			h = 0.06;
			text = "$STR_DISP_MP_SQ";
		};
		class ValueSquad: TextNormal {
			idc = 107;
			x = 0.45;
			y = 0.513;
			w = 0.525;
			h = 0.06;
			text = "$STR_DISP_ERROR";
		};
		class TextSquadName: TextNormal {
			x = 0.325;
			y = 0.583;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_SQ_NAME";
		};
		class ValueSquadName: TextNormal {
			idc = 108;
			x = 0.45;
			y = 0.583;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextSquadId: TextNormal {
			x = 0.325;
			y = 0.633;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_SQ_ID";
		};
		class ValueSquadId: TextNormal {
			idc = 109;
			x = 0.45;
			y = 0.633;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextSquadMail: TextNormal {
			x = 0.325;
			y = 0.683;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_SQ_MAIL";
		};
		class ValueSquadMail: TextNormal {
			idc = 110;
			x = 0.45;
			y = 0.683;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextSquadWeb: TextNormal {
			x = 0.325;
			y = 0.733;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_SQ_WEB";
		};
		class ValueSquadWeb: TextNormal {
			idc = 111;
			x = 0.45;
			y = 0.733;
			w = 0.525;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class TextSquadPicture: TextNormal {
			x = 0.325;
			y = 0.783;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_SQ_PICTURE";
		};
		class ValueSquadPicture: TextNormal {
			idc = 112;
			style = 48;
			x = 0.45;
			w = 0.093;
			y = 0.783;
			h = 0.124;
			text = "";
			color[] = {1,1,1,1};
		};
		class TextSquadTitle: TextNormal {
			x = 0.325;
			y = 0.917;
			w = 0.125;
			h = 0.04;
			text = "$STR_DISP_MP_SQ_TITLE";
		};
		class ValueSquadTitle: TextNormal {
			idc = 113;
			x = 0.45;
			w = 0.525;
			y = 0.917;
			h = 0.04;
			text = "$STR_DISP_ERROR";
		};
		class PingTitle: TextNormal {
			x = 0.325;
			w = 0.15;
			y = 0.35;
			h = 0.04;
			text = "$STR_DISP_MP_PING";
		};
		class PingMinValue: TextNormal {
			y = 0.35;
			h = 0.04;
			x = 0.48;
			w = 0.05;
			idc = 119;
			text = "$STR_DISP_ERROR";
		};
		class PingAvgValue: TextNormal {
			idc = 120;
			y = 0.35;
			h = 0.04;
			x = 0.58;
			w = 0.05;
			text = "$STR_DISP_ERROR";
		};
		class PingMaxValue: TextNormal {
			y = 0.35;
			h = 0.04;
			x = 0.68;
			w = 0.05;
			idc = 121;
			text = "$STR_DISP_ERROR";
		};
		class BandwidthTitle: TextNormal {
			x = 0.325;
			w = 0.15;
			y = 0.4;
			h = 0.04;
			text = "$STR_DISP_MP_BANDWIDTH";
		};
		class BandwidthMinValue: TextNormal {
			idc = 122;
			y = 0.4;
			h = 0.04;
			x = 0.48;
			w = 0.05;
			text = "$STR_DISP_ERROR";
		};
		class BandwidthAvgValue: TextNormal {
			idc = 123;
			y = 0.4;
			h = 0.04;
			x = 0.58;
			w = 0.05;
			text = "$STR_DISP_ERROR";
		};
		class BandwidthMaxValue: TextNormal {
			idc = 124;
			y = 0.4;
			h = 0.04;
			x = 0.68;
			w = 0.05;
			text = "$STR_DISP_ERROR";
		};
		class DesyncTitle: TextNormal {
			x = 0.325;
			w = 0.15;
			y = 0.45;
			h = 0.04;
			text = "$STR_DISP_MP_DESYNC";
		};
		class DesyncValue: TextNormal {
			idc = 125;
			y = 0.45;
			h = 0.04;
			x = 0.48;
			w = 0.1;
			text = "$STR_DISP_ERROR";
		};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_MP_PLAYERS_TITLE";
	};
	class ButtonKickOff: RscActiveMenu {
		idc = 114;
		text = "$STR_DISP_MP_KICKOFF";
		x = 0.0;
		y = 0.9;
		w = 0.25;
		h = 0.05;
	};
	class ButtonBan: RscActiveMenu {
		idc = 115;
		text = "$STR_DISP_MP_BAN";
		x = 0.25;
		y = 0.9;
		w = 0.25;
		h = 0.05;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CLOSE";
		x = 0.85;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayClientWait: RscDisplayMPPlayers {
	access = 3;
	idd = 22;
	class Title: RscText {
		idc = 130;
		style = 2;
		x = 0;
		y = 0.02;
		w = 1;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_CLIENT_WAIT_TEXT";
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.85;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayMainMap {
	access = 3;
	idd = 12;
	movingEnable = 0;
	controlsBackground[] = {"Background","Map"};
	objects[] = {"Watch","Compass","WalkieTalkie","Notepad","Warrant","GPS"};
	controls[] = {};
	class Background: RscText {
		x = -10;
		y = -10;
		w = 21;
		h = 21;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Map: RscMapControl {
		moveOnEdges = 1;
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		class Command {
			icon = "order";
			color[] = {0,0,0,1};
			size = 12;
		};
		class ActiveMarker {
			color[] = {0.9,0.0,0.0,1};
			size = 50;
		};
	};
	class Watch: RscObject {
		idc = 101;
		type = 81;
		model = "kosei.p3d";
		position[] = {0.079,0.044,0.21};
		positionBack[] = {0.238,0.158,0.525};
		inBack = 1;
		enableZoom = 1;
		zoomDuration = 0.5;
	};
	class Compass: RscObject {
		idc = 102;
		type = 81;
		model = "kompas.p3d";
		position[] = {0.026,0.047,0.2};
		direction[] = {0,1,0};
		up[] = {0,0,-1};
		positionBack[] = {0.178,0.145,0.5};
		inBack = 1;
		enableZoom = 1;
		zoomDuration = 0.5;
	};
	class WalkieTalkie: RscObject {
		idc = 103;
		type = 82;
		model = "vysilacka.p3d";
		position[] = {0.094,-0.043,0.25};
		scale = 1.3;
		direction[] = {0,1,0};
		up[] = {0,0,-1};
		positionBack[] = {0.28,-0.155,0.625};
		inBack = 1;
		enableZoom = 1;
		zoomDuration = 0.5;
		controls[] = {"RadioAlpha","RadioBravo","RadioCharlie","RadioDelta","RadioEcho","RadioFoxtrot","RadioGolf","RadioHotel","RadioIndia","RadioJuliet"};
		class RscRadioText: RscActiveText {
			color[] = {0.5,0.5,0.5,1};
			colorActive[] = {0,0,0,1};
			font = "SteelfishB64";
			sizeEx = "0.6 * 0.05";
			x = 0;
			w = 1;
			h = 0.1;
			selection = "papir";
			text = "$STR_DISP_ERROR";
		};
		class RadioAlpha: RscRadioText {
			idc = 63;
			y = 0;
		};
		class RadioBravo: RscRadioText {
			idc = 64;
			y = 0.1;
		};
		class RadioCharlie: RscRadioText {
			idc = 65;
			y = 0.2;
		};
		class RadioDelta: RscRadioText {
			idc = 66;
			y = 0.3;
		};
		class RadioEcho: RscRadioText {
			idc = 67;
			y = 0.4;
		};
		class RadioFoxtrot: RscRadioText {
			idc = 68;
			y = 0.5;
		};
		class RadioGolf: RscRadioText {
			idc = 69;
			y = 0.6;
		};
		class RadioHotel: RscRadioText {
			idc = 70;
			y = 0.7;
		};
		class RadioIndia: RscRadioText {
			idc = 71;
			y = 0.8;
		};
		class RadioJuliet: RscRadioText {
			idc = 72;
			y = 0.9;
		};
	};
	class Notepad: RscObject {
		idc = 104;
		type = 82;
		model = "blok.p3d";
		position[] = {-0.114,-0.0103,0.32};
		scale = 0.75;
		positionBack[] = {-0.325,0.197,0.8};
		inBack = 0;
		enableZoom = 1;
		zoomDuration = 0.5;
		controls[] = {"Name","Bookmark1","Bookmark2","Bookmark3","Bookmark4","Briefing"};
		class Name: RscText {
			idc = 73;
			style = 2;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			selection = "jmeno mise";
			text = "$STR_DISP_ERROR";
			colorText[] = {0,0,0,1};
			font = "courierNewB64";
			sizeEx = "0.8 * 0.048";
		};
		class RscBookmarkText: RscActiveText {
			style = 2;
			color[] = {0,0,0,1};
			colorActive[] = {1,1,1,1};
			font = "courierNewB64";
			sizeEx = "0.5 * 0.048";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		class Bookmark1: RscBookmarkText {
			idc = 58;
			selection = "zalozka1";
			text = "$STR_MAP_PLAN";
		};
		class Bookmark2: RscBookmarkText {
			idc = 57;
			selection = "zalozka2";
			text = "$STR_MAP_NOTES";
		};
		class Bookmark3: RscBookmarkText {
			idc = 59;
			selection = "zalozka3";
			text = "$STR_MAP_GEAR";
		};
		class Bookmark4: RscBookmarkText {
			idc = 60;
			selection = "zalozka4";
			text = "$STR_MAP_GROUP";
		};
		class Briefing: RscHTML {
			idc = 56;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			selection = "papir";
			filename = "";
		};
	};
	class Warrant: RscObject {
		idc = 105;
		type = 82;
		model = "karta.p3d";
		position[] = {0.073,-0.025,0.4};
		scale = 0.7;
		positionBack[] = {0.368,0.193,1.0};
		inBack = 1;
		enableZoom = 1;
		zoomDuration = 0.5;
		controls[] = {"Warrant"};
		class Warrant {
			type = 99;
			style = 0;
			idc = 74;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			selection = "karta";
			font = "courierNewB64";
			sizeEx = "0.5 * 0.048";
			color[] = {0,0,0,1};
		};
	};
	class GPS: RscObject {
		idc = 106;
		type = 82;
		model = "gps.p3d";
		position[] = {0,0,0.45};
		scale = 2.0;
		direction[] = {0,1,0};
		up[] = {0,0,-1};
		positionBack[] = {0,0,1.125};
		inBack = 0;
		enableZoom = 1;
		zoomDuration = 0.5;
		controls[] = {"GPS"};
		class GPS: RscText {
			style = 2;
			idc = 75;
			selection = "display";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			font = "courierNewB64";
			sizeEx = "0.8 * 0.048";
			colorText[] = {0.33,0.52,0.43,1};
			text = "";
		};
	};
};
class RscDisplayGetReady: RscDisplayMainMap {
	access = 3;
	idd = 37;
	controlsBackground[] = {"Background","Map2"};
	controls[] = {"Background3","Background4","TitleTop","ButtonContinue","ButtonCancel"};
	class Map2: Map {
		y = 0.125;
		h = 0.75;
	};
	class Background3: RscBackgroundStripeTopAlpha {};
	class TitleTop: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		idc = 114;
		style = 2;
		text = "$STR_DISP_ERROR";
		font = "SteelfishB128";
		sizeEx = 0.098;
		colorText[] = {1,1,1,1};
	};
	class Background4: RscBackgroundStripeBottomAlpha {};
	class ButtonContinue: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CONTINUE";
		default = 1;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CANCEL";
	};
};
class RscDisplayServerGetReady: RscDisplayGetReady {
	access = 3;
	idd = 52;
	controls[] = {"Background3","Background4","TitleTop","PlayersTitleBackground","PlayersTitle","PlayersBackground","Players","ButtonContinue","ButtonCancel"};
	class PlayersTitleBackground: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class PlayersTitle: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "$STR_DISP_SRVSETUP_PLAYERS";
		style = "0 + 			160";
	};
	class PlayersBackground: RscText {
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Players: RscListBox {
		idc = 110;
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorSelect[] = {1,1,1,1};
		colorText[] = {1,1,1,0.75};
		rowHeight = 0.025;
	};
	class ButtonContinue: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_SERVER_READY";
		default = 1;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CANCEL";
	};
};
class RscDisplayClientGetReady: RscDisplayGetReady {
	access = 3;
	idd = 53;
	controls[] = {"Background3","Background4","TitleTop","PlayersTitleBackground","PlayersTitle","PlayersBackground","Players","ButtonContinue","ButtonCancel"};
	class PlayersTitleBackground: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class PlayersTitle: RscText {
		x = 0.7;
		y = 0.7;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "$STR_DISP_SRVSETUP_PLAYERS";
		style = "0 + 			160";
	};
	class PlayersBackground: RscText {
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Players: RscListBox {
		idc = 110;
		x = 0.7;
		y = 0.725;
		w = 0.25;
		h = 0.125;
		colorSelect[] = {1,1,1,1};
		colorText[] = {1,1,1,0.75};
		rowHeight = 0.025;
	};
	class ButtonContinue: RscActiveMenu {
		default = 1;
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CLIENT_READY";
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_DISCONNECT";
	};
};
class RscDisplayDebriefing: RscDisplayBackgroundStripes {
	access = 3;
	idd = 50;
	movingEnable = 0;
	objects[] = {"Notepad","Statistics"};
	controlsBackground[] = {"Background1","Background2"};
	controls[] = {"Background3","Background4","TitleTop","PlayersTitleBackground","PlayersTitle","PlayersBackground","Players","ButtonRestart","ButtonContinue"};
	class Notepad: RscObject {
		model = "blok_selmis2.p3d";
		idc = -1;
		type = 83;
		autoOpen = 1;
		autoZoom = 0;
		animSpeed = 1;
		animation = "blok_mis.rtm";
		position[] = {0.2,0.02,1.2};
		direction[] = {0,"-sin 15","cos 15"};
		up[] = {0,"cos 15","sin 15"};
		positionBack[] = {0.3,0.1,1.4};
		inBack = 0;
		enableZoom = 1;
		zoomDuration = 0.5;
		scale = 2;
		controls[] = {"Left","Right"};
		class Left: RscHTML {
			idc = 101;
			type = 23;
			selection = "papir";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			angle = 0;
			size = 0.35;
			filename = "";
			colorLink[] = {0,0,0,1};
			colorLinkActive[] = {0,0,0,1};
		};
		class Right: RscHTML {
			idc = 102;
			type = 23;
			selection = "papir2";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			angle = 0;
			size = 0.35;
			filename = "";
			colorLink[] = {0.2,0.2,0.4,1};
			colorLinkActive[] = {0.4,0.17,0.24,1};
		};
	};
	class Statistics: RscObject {
		model = "desky.p3d";
		idc = 105;
		type = 82;
		position[] = {-0.275,0.024,1.1};
		direction[] = {0,-0.259,0.966};
		up[] = {0,0.966,0.259};
		positionBack[] = {-0.275,0.024,1.1};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 0.5;
		scale = 2;
		controls[] = {"Statistics"};
		class Statistics: RscHTML {
			idc = 103;
			type = 23;
			selection = "papir";
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			angle = 0;
			size = 0.34;
			filename = "";
			colorLink[] = {0.2,0.2,0.4,1};
			colorLinkActive[] = {0.4,0.17,0.24,1};
		};
	};
	class Background3: RscBackgroundStripeTopAlpha {};
	class TitleTop: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		style = 2;
		text = "$STR_DISP_DEBRIEFING";
		font = "SteelfishB128";
		sizeEx = 0.098;
		colorText[] = {1,1,1,1};
	};
	class Background4: RscBackgroundStripeBottomAlpha {};
	class PlayersTitleBackground: RscText {
		idc = 106;
		x = 0.0;
		y = 0.825;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class PlayersTitle: RscText {
		idc = 107;
		x = 0.0;
		y = 0.825;
		w = 0.25;
		h = 0.025;
		colorBackground[] = {1,1,1,0.75};
		colorText[] = {0,0,0,1};
		text = "$STR_DISP_SRVSETUP_PLAYERS";
		style = "0 + 			160";
	};
	class PlayersBackground: RscText {
		idc = 108;
		x = 0.0;
		y = 0.85;
		w = 0.25;
		h = 0.125;
		colorBackground[] = {0,0,0,0.75};
		colorText[] = {0,0,0,1};
		text = "";
	};
	class Players: RscListBox {
		idc = 109;
		x = 0.0;
		y = 0.85;
		w = 0.25;
		h = 0.125;
		colorSelect[] = {1,1,1,1};
		colorText[] = {1,1,1,0.75};
		rowHeight = 0.025;
	};
	class ButtonRestart: RscActiveMenu {
		idc = 104;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_DEBRIEFING_RESTART";
	};
	class ButtonContinue: RscActiveMenu {
		idc = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CONTINUE";
		default = 1;
	};
};
class RscDisplaySelectIsland {
	access = 3;
	idd = 51;
	movingEnable = 1;
	controlsBackground[] = {"Background3","Background4","Background5"};
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonWizard","ButtonCancel","ButtonOK"};
	class Background3: RscBackgroundStripeDark {};
	class Background4: RscBackgroundStripeTop {};
	class Background5: RscBackgroundStripeBottom {};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = 102;
		type = 83;
		autoOpen = 1;
		autoZoom = 1;
		animSpeed = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.08,0.6};
		direction[] = {"sin 10","sin 20 * cos 10","cos 20 * cos 10"};
		up[] = {0,"cos 20","-sin 20"};
		positionBack[] = {0,-0.04,0.7};
		inBack = 1;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"Islands"};
		class Islands: RscObjNotebookListBox {
			idc = 101;
			x = 0.025;
			y = 0.033;
			w = 0.95;
			h = 0.933;
			rows = 5;
			size = 0.7;
		};
	};
	class Background1: RscBackgroundStripeTopAlpha {};
	class Background2: RscBackgroundStripeBottomAlpha {};
	class Title: RscText {
		idc = -1;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_SELECT_ISLAND";
	};
	class ButtonWizard: RscActiveMenu {
		idc = 103;
		text = "$STR_DISP_MPW_TITLE";
		x = 0.05;
		y = 0.9;
		w = 0.35;
		h = 0.05;
		soundClick[] = {"",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		x = 0.6;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_OK";
		default = 1;
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
};
class RscDisplayLogin {
	access = 3;
	idd = 31;
	movingEnable = 1;
	controlsBackground[] = {"Background3","Background4","Background5"};
	objects[] = {"Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonOK","ButtonCancel"};
	class Background3: RscText {
		x = 0.0;
		y = 0.125;
		w = 1;
		h = 0.75;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Background4: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Background5: RscText {
		x = 0.0;
		y = 0.875;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = 105;
		type = 83;
		autoOpen = 1;
		autoZoom = 1;
		animSpeed = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 1;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextUser","ValueUser","ButtonNew","ButtonEdit","ButtonDelete"};
		class TextUser: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = 0.45;
			text = "$STR_DISP_LOGIN_USER";
		};
		class ValueUser: RscObjNotebookListBox {
			idc = 101;
			x = 0.025;
			y = 0.1;
			w = 0.45;
			h = 0.867;
			rows = 10;
		};
		class ButtonNew: RscObjNotebookButton {
			idc = 102;
			x = 0.525;
			y = 0.1;
			w = 0.45;
			h = 0.08;
			text = "$STR_DISP_NEW";
		};
		class ButtonEdit: RscObjNotebookButton {
			idc = 104;
			x = 0.525;
			y = 0.2;
			w = 0.45;
			h = 0.08;
			text = "$STR_DISP_EDIT";
		};
		class ButtonDelete: RscObjNotebookButton {
			idc = 103;
			x = 0.525;
			y = 0.3;
			w = 0.45;
			h = 0.08;
			text = "$STR_DISP_DELETE";
		};
	};
	class Background1: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Background2: RscText {
		x = 0.0;
		y = 0.875;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_LOGIN_TITLE";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		style = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_ok",0.2,1};
		default = 1;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		style = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayNewUser {
	access = 3;
	idd = 42;
	movingEnable = 1;
	controlsBackground[] = {"Background3","Background4","Background5"};
	objects[] = {"Head","Notebook"};
	controls[] = {"Background1","Background2","Title","ButtonOK","ButtonCancel"};
	class Background3: RscText {
		x = 0.0;
		y = 0.125;
		w = 1;
		h = 0.75;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Background4: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Background5: RscText {
		x = 0.0;
		y = 0.875;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Head: RscObject {
		model = "hlavaw.p3d";
		modelWoman = "\o\char\civilistka_head.p3d";
		idc = 106;
		type = 80;
		position[] = {-0.021,-0.006,0.15};
		direction[] = {0,0,0};
		up[] = {0,0,0};
		scale = 0.19;
	};
	class Notebook: RscObject {
		model = "notebook.p3d";
		idc = 108;
		type = 83;
		autoOpen = 0;
		autoZoom = 1;
		animSpeed = 1;
		animPhase = 1;
		animation = "notebook.rtm";
		position[] = {0,-0.175,0.25};
		direction[] = {0,"sin 30","cos 30"};
		up[] = {0,"cos 30","-sin 30"};
		positionBack[] = {0,-0.04,0.6};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1;
		scale = 1;
		controls[] = {"TextName","ValueName","ValueId","HeadArea","TextFace","ValueFace","TextGlasses","ValueGlasses","TextSpeaker","ValueSpeaker","TextPitch","ValuePitch","TextSquad","ValueSquad"};
		class TextName: RscObjNotebookText {
			x = 0.025;
			y = 0.033;
			w = 0.45;
			text = "$STR_DISP_NEW_USER_NAME";
		};
		class ValueName: RscObjNotebookEdit {
			idc = 101;
			x = 0.025;
			y = 0.083;
			w = 0.45;
			h = 0.06;
		};
		class ValueId: RscObjNotebookText {
			idc = 110;
			x = 0.025;
			y = 0.143;
			w = 0.45;
			text = "STR_DISP_ERROR";
		};
		class HeadArea: RscObjNotebookText {
			idc = 109;
			x = 0.025;
			y = 0.143;
			w = 0.45;
			h = "0.967 - 0.143";
			text = "";
		};
		class TextFace: RscObjNotebookText {
			x = 0.525;
			y = 0.033;
			w = 0.45;
			text = "$STR_DISP_NEW_USER_FACE";
		};
		class ValueFace: RscObjNotebookListBox {
			idc = 102;
			x = 0.525;
			y = 0.083;
			w = 0.45;
			h = 0.18;
			rows = 3;
		};
		class TextGlasses: RscObjNotebookText {
			x = 0.525;
			y = 0.283;
			w = 0.45;
			text = "$STR_DISP_NEW_USER_GLASSES";
		};
		class ValueGlasses: RscObjNotebookListBox {
			idc = 107;
			x = 0.525;
			y = 0.333;
			w = 0.45;
			h = 0.12;
			rows = 2;
		};
		class TextSpeaker: RscObjNotebookText {
			x = 0.525;
			y = 0.473;
			w = 0.45;
			text = "$STR_DISP_NEW_USER_SPEAKER";
		};
		class ValueSpeaker: RscObjNotebookListBox {
			idc = 103;
			x = 0.525;
			y = 0.523;
			w = 0.45;
			h = 0.12;
			rows = 2;
		};
		class TextPitch: RscObjNotebookText {
			x = 0.525;
			y = 0.663;
			w = 0.45;
			text = "$STR_DISP_NEW_USER_PITCH";
		};
		class ValuePitch {
			type = 24;
			idc = 104;
			style = 1;
			x = 0.525;
			y = 0.713;
			w = 0.45;
			h = 0.05;
			color[] = {0,1,0,1};
			angle = 0;
			selection = "display";
		};
		class TextSquad: RscObjNotebookText {
			idc = 112;
			x = 0.525;
			y = 0.866;
			w = 0.45;
			text = "$STR_DISP_NEW_USER_SQUAD";
		};
		class ValueSquad: RscObjNotebookEdit {
			idc = 111;
			x = 0.525;
			y = 0.916;
			w = 0.45;
			h = 0.06;
		};
	};
	class Background1: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Background2: RscText {
		x = 0.0;
		y = 0.875;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Title: RscText {
		idc = 105;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_ERROR";
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		text = "$STR_DISP_OK";
		style = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_ok",0.2,1};
		default = 1;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		text = "$STR_DISP_CANCEL";
		style = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscDisplayCampaignLoad {
	access = 3;
	idd = 43;
	movingEnable = 0;
	controls[] = {"ButtonCancel","ButtonOK","ButtonReplay","ButtonDifficulty"};
	controlsBackground[] = {"Background1","Background2","Background3"};
	objects[] = {"Book"};
	class ButtonDifficulty: RscActiveMenu {
		idc = 110;
		x = 0.05;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		text = "$STR_DISP_ERROR";
		soundClick[] = {"",0,1};
	};
	class ButtonReplay: RscActiveMenu {
		idc = 109;
		x = 0.45;
		y = 0.9;
		w = 0.25;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CAMPAIGN_REPLAY";
		soundClick[] = {"ui\ui_ok",0.2,1};
		default = 1;
	};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_ERROR";
		soundClick[] = {"ui\ui_ok",0.2,1};
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class Background1: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Background2: RscText {
		x = 0.0;
		y = 0.875;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Background3: RscText {
		x = 0.0;
		y = 0.125;
		w = 1;
		h = 0.75;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Book: RscObject {
		model = "kniha6.p3d";
		animation = "kniha2.rtm";
		idc = 104;
		type = 83;
		autoOpen = 1;
		autoZoom = 1;
		animSpeed = 0.5;
		positionBack[] = {-0.5,0.3,1.5};
		position[] = {0.1,0.0,0.8};
		direction[] = {0,"-sin 15","cos 15"};
		up[] = {0,"cos 15","sin 15"};
		inBack = 1;
		enableZoom = 0;
		zoomDuration = 1.0;
		scale = 1.0;
		controls[] = {"Title1","Title","Prev","Campaign","Next","Contents","History","Mission","Description","Date","Score","Duration","Casualties","KillsTitle","EnemyRow","FriendlyRow","CivilianRow","InfantryColumn","SoftColumn","ArmoredColumn","AircraftColumn","TotalColumn","EInf","ESoft","EArm","EAir","ETot","FInf","FSoft","FArm","FAir","FTot","CInf","CSoft","CArm","CAir","CTot"};
		class Title1: Rsc3DTextMenu {
			color[] = {0.95,0.85,0.3,0.7};
			font = "garamond64";
			idc = -1;
			selection = "cover";
			x = 0.0;
			y = 0.2;
			w = 1.0;
			h = 0.15;
			text = "$STR_DISP_CAMPAIGN_FLASHPOINT";
			style = 2;
		};
		class Title: Rsc3DTextMenu {
			color[] = {0,0,0,1};
			font = "garamond64";
			idc = -1;
			selection = "1.strana";
			x = 0.0;
			y = 0.2;
			w = 1.0;
			h = 0.12;
			text = "$STR_DISP_CAMPAIGN_FLASHPOINT";
			style = 2;
		};
		class Campaign: Rsc3DTextMenu {
			idc = 105;
			color[] = {0,0,0,1};
			font = "garamond64";
			selection = "2.strana";
			x = 0.1;
			y = 0.0;
			w = 0.8;
			h = 0.08;
			text = "$STR_DISP_ERROR";
			style = 2;
		};
		class Prev: Rsc3DActiveMenu {
			idc = 106;
			color[] = {1,1,1,0.6};
			colorActive[] = {1,1,1,1};
			font = "garamond64";
			selection = "2.strana";
			x = 0.0;
			y = 0.0;
			w = 0.1;
			h = 0.08;
			text = "sipka_left.paa";
			style = 48;
		};
		class Next: Rsc3DActiveMenu {
			idc = 107;
			color[] = {1,1,1,0.6};
			colorActive[] = {1,1,1,1};
			font = "garamond64";
			selection = "2.strana";
			x = 0.9;
			y = 0.0;
			w = 0.1;
			h = 0.08;
			text = "sipka_right.paa";
			style = 48;
		};
		class Contents: Rsc3DTextMenu {
			idc = -1;
			color[] = {0,0,0,1};
			font = "garamond64";
			selection = "2.strana";
			x = 0.02;
			y = 0.1;
			w = 0.96;
			h = 0.06;
			text = "$STR_DISP_CAMPAIGN_CONTENTS";
			style = 0;
		};
		class History {
			type = 22;
			idc = 101;
			style = 0;
			selection = "2.strana";
			x = 0.02;
			y = 0.16;
			w = 0.96;
			h = 0.84;
			angle = 0;
			rows = 14;
			size = 1;
			colorSelect[] = {0,0,0,1};
			colorSelectBackground[] = {0,0,0,0.2};
			colorText[] = {0.2,0.2,0.2,1};
			font = "garamond64";
		};
		class Mission: Rsc3DTextMenu {
			idc = 111;
			color[] = {0,0,0,1};
			font = "garamond64";
			selection = "3.strana";
			x = 0.0;
			y = 0.0;
			w = 1.0;
			h = 0.08;
			text = "$STR_DISP_ERROR";
			style = 2;
		};
		class Description: RscHTML {
			type = 23;
			idc = 108;
			selection = "3.strana";
			x = 0;
			y = 0.1;
			w = 1;
			h = 0.4;
			angle = 0;
			size = 0.54;
			filename = "";
			colorLink[] = {0.2,0.2,0.4,1};
			colorLinkActive[] = {0.4,0.17,0.24,1};
		};
		class BookText: Rsc3DTextMenu {
			idc = -1;
			color[] = {0,0,0,1};
			font = "garamond64";
			selection = "3.strana";
			x = 0.05;
			h = 0.04;
			w = 0.9;
			text = "";
			style = 0;
		};
		class Date: BookText {
			idc = 112;
			y = 0.64;
			text = "$STR_DISP_ERROR";
		};
		class Score: BookText {
			idc = 113;
			y = 0.68;
			text = "$STR_DISP_ERROR";
		};
		class Duration: BookText {
			idc = 114;
			y = 0.72;
			text = "$STR_DISP_ERROR";
		};
		class Casualties: BookText {
			idc = 115;
			y = 0.76;
			text = "$STR_DISP_ERROR";
		};
		class BookTableRowTitle: BookText {
			x = 0.05;
			w = 0.15;
			style = "2 + 			160";
		};
		class BookTableItem: BookText {
			w = 0.15;
			style = "2 + 			160";
		};
		class KillsTitle: BookTableRowTitle {
			idc = 116;
			y = 0.84;
			text = "$STR_CAMPAIGN_KILLS";
		};
		class EnemyRow: BookTableRowTitle {
			idc = 117;
			y = 0.88;
			text = "$STR_DISP_CAMPAIGN_ENEMY";
		};
		class FriendlyRow: BookTableRowTitle {
			idc = 118;
			y = 0.92;
			text = "$STR_DISP_CAMPAIGN_FRIENDLY";
		};
		class CivilianRow: BookTableRowTitle {
			idc = 119;
			y = 0.96;
			text = "$STR_DISP_CAMPAIGN_CIVILIAN";
		};
		class InfantryColumn: BookTableItem {
			idc = 120;
			x = 0.2;
			y = 0.84;
			text = "$STR_MPTABLE_INFANTRY";
		};
		class SoftColumn: BookTableItem {
			idc = 121;
			x = 0.35;
			y = 0.84;
			text = "$STR_MPTABLE_SOFT";
		};
		class ArmoredColumn: BookTableItem {
			idc = 122;
			x = 0.5;
			y = 0.84;
			text = "$STR_MPTABLE_ARMORED";
		};
		class AircraftColumn: BookTableItem {
			idc = 123;
			x = 0.65;
			y = 0.84;
			text = "$STR_MPTABLE_AIR";
		};
		class TotalColumn: BookTableItem {
			idc = 124;
			x = 0.8;
			y = 0.84;
			text = "$STR_MPTABLE_TOTAL";
		};
		class EInf: BookTableItem {
			idc = 125;
			x = 0.2;
			y = 0.88;
			text = "$STR_DISP_ERROR";
		};
		class ESoft: BookTableItem {
			idc = 126;
			x = 0.35;
			y = 0.88;
			text = "$STR_DISP_ERROR";
		};
		class EArm: BookTableItem {
			idc = 127;
			x = 0.5;
			y = 0.88;
			text = "$STR_DISP_ERROR";
		};
		class EAir: BookTableItem {
			idc = 128;
			x = 0.65;
			y = 0.88;
			text = "$STR_DISP_ERROR";
		};
		class ETot: BookTableItem {
			idc = 129;
			x = 0.8;
			y = 0.88;
			text = "$STR_DISP_ERROR";
		};
		class FInf: BookTableItem {
			idc = 130;
			x = 0.2;
			y = 0.92;
			text = "$STR_DISP_ERROR";
		};
		class FSoft: BookTableItem {
			idc = 131;
			x = 0.35;
			y = 0.92;
			text = "$STR_DISP_ERROR";
		};
		class FArm: BookTableItem {
			idc = 132;
			x = 0.5;
			y = 0.92;
			text = "$STR_DISP_ERROR";
		};
		class FAir: BookTableItem {
			idc = 133;
			x = 0.65;
			y = 0.92;
			text = "$STR_DISP_ERROR";
		};
		class FTot: BookTableItem {
			idc = 134;
			x = 0.8;
			y = 0.92;
			text = "$STR_DISP_ERROR";
		};
		class CInf: BookTableItem {
			idc = 135;
			x = 0.2;
			y = 0.96;
			text = "$STR_DISP_ERROR";
		};
		class CSoft: BookTableItem {
			idc = 136;
			x = 0.35;
			y = 0.96;
			text = "$STR_DISP_ERROR";
		};
		class CArm: BookTableItem {
			idc = 137;
			x = 0.5;
			y = 0.96;
			text = "$STR_DISP_ERROR";
		};
		class CAir: BookTableItem {
			idc = 138;
			x = 0.65;
			y = 0.96;
			text = "$STR_DISP_ERROR";
		};
		class CTot: BookTableItem {
			idc = 139;
			x = 0.8;
			y = 0.96;
			text = "$STR_DISP_ERROR";
		};
	};
};
class RscDisplayRevert {
	access = 3;
	idd = 66;
	movingEnable = 0;
	controls[] = {"ButtonOK","ButtonCancel"};
	controlsBackground[] = {"Background1","Background2","Background3"};
	objects[] = {"Book"};
	class ButtonOK: RscActiveMenu {
		idc = 1;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_OK";
		soundClick[] = {"ui\ui_ok",0.2,1};
		default = 1;
	};
	class ButtonCancel: RscActiveMenu {
		idc = 2;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		color[] = {1,1,1,1};
		colorBackground = "{0, 0, 0, 0.5}";
		colorActive[] = {1,0,0,1};
		text = "$STR_DISP_CANCEL";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class Background1: RscText {
		x = 0.0;
		y = 0.0;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Background2: RscText {
		x = 0.0;
		y = 0.875;
		w = 1;
		h = 0.125;
		text = "";
		colorBackground[] = {0,0,0,1};
	};
	class Background3: RscText {
		x = 0.0;
		y = 0.125;
		w = 1;
		h = 0.75;
		text = "";
		colorBackground[] = {0,0,0,0.5};
	};
	class Book: RscObject {
		model = "kniha6.p3d";
		animation = "kniha2.rtm";
		idc = 101;
		type = 83;
		autoOpen = 0;
		autoZoom = 0;
		animSpeed = 0.5;
		animPhase = 0.6;
		positionBack[] = {-0.5,0.3,1.5};
		position[] = {0.1,0.0,0.8};
		direction[] = {0,"-sin 15","cos 15"};
		up[] = {0,"cos 15","sin 15"};
		inBack = 0;
		enableZoom = 0;
		zoomDuration = 1.0;
		scale = 1.0;
		controls[] = {"Title","Question"};
		class Title: Rsc3DTextMenu {
			idc = 102;
			color[] = {0,0,0,1};
			font = "garamond64";
			selection = "3.strana";
			x = 0.0;
			y = 0.0;
			w = 1.0;
			h = 0.08;
			text = "$STR_SURE";
			style = 2;
		};
		class Question: Rsc3DTextMenu {
			idc = 103;
			style = 16;
			color[] = {0,0,0,1};
			font = "garamond64";
			selection = "3.strana";
			x = 0;
			y = 0.1;
			w = 1;
			h = 0.9;
			text = "$STR_DISP_REVERT_QUESTION";
			lines = 18;
		};
	};
};
class RscDisplayEmpty {
	access = 3;
	movingEnable = 0;
	controls[] = {};
};
class RscDisplayCampaign: RscDisplayEmpty {
	access = 3;
	idd = 33;
};
class RscDisplayMission: RscDisplayEmpty {
	access = 3;
	idd = 46;
	objects[] = {"Compass","Watch"};
	class Compass: RscObject {
		idc = 102;
		type = 81;
		model = "kompas.p3d";
		position[] = {0.026,0.047,0.2};
		direction[] = {0,1,1.1};
		up[] = {0,0,-1};
		positionBack[] = {0.0,-0.05,0.22};
		inBack = 1;
		enableZoom = 1;
		zoomDuration = 0.5;
	};
	class Watch: RscObject {
		idc = 101;
		type = 81;
		model = "kosei.p3d";
		position[] = {0.026,0.047,0.2};
		positionBack[] = {0.05,-0.05,0.22};
		inBack = 1;
		enableZoom = 1;
		zoomDuration = 0.5;
	};
};
class RscDisplayIntro: RscDisplayEmpty {
	access = 3;
	idd = 47;
};
class RscDisplayOutro: RscDisplayEmpty {
	access = 3;
	idd = 48;
};
class RscDisplayAward: RscDisplayEmpty {
	access = 3;
	idd = 62;
};
class RscDisplayInterrupt: RscDisplayBackgroundStripesDark {
	access = 3;
	idd = 49;
	movingEnable = 0;
	controls[] = {"Background1","Background2","Background3","Title","ButtonOptions","ButtonLoad","ButtonSave","ButtonRetry","ButtonAbort","ButtonContinue"};
	class Title: RscText {
		idc = 106;
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,1,1,1};
		sizeEx = 0.098;
		text = "$STR_DISP_ERROR";
	};
	class ButtonOptions: RscActiveMenu {
		idc = 101;
		x = 0.05;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_INT_OPTIONS";
	};
	class ButtonLoad: RscActiveMenu {
		idc = 102;
		x = 0.2;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_INT_LOAD";
	};
	class ButtonSave: RscActiveMenu {
		idc = 103;
		x = 0.2;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_INT_SAVE";
	};
	class ButtonRetry: RscActiveMenu {
		idc = 105;
		x = 0.55;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_INT_RETRY";
	};
	class ButtonAbort: RscActiveMenu {
		idc = 104;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_INT_ABORT";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
	class ButtonContinue: RscActiveMenu {
		idc = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_INT_CONTINUE";
		default = 1;
	};
};
class RscDisplayMissionEnd: RscDisplayBackgroundStripesDark {
	access = 3;
	idd = 58;
	movingEnable = 1;
	controls[] = {"Background1","Background2","Background3","Title","Subtitle","Quotation","Author","ButtonLoad","ButtonRetry","ButtonAbort"};
	class Title: RscText {
		style = 2;
		x = 0.2;
		y = 0.02;
		w = 0.6;
		h = 0.1;
		font = "SteelfishB128";
		colorText[] = {1,0,0,1};
		sizeEx = 0.098;
		text = "$STR_MISSION_KILLED";
	};
	class Subtitle: RscText {
		idc = 101;
		style = 1;
		x = 0.69;
		y = 0.07;
		w = 0.3;
		h = 0.05;
		font = "SteelfishB64";
		colorText[] = {1,1,1,1};
		sizeEx = "1.6 * 0.05";
		text = "$STR_DISP_ERROR";
	};
	class Quotation: RscText {
		idc = 102;
		style = 16;
		lineSpacing = 1;
		x = 0.15;
		y = "0.88 - 0.125";
		w = 0.6;
		h = 0.12;
		font = "SteelfishB64";
		sizeEx = "0.8 * 0.05";
		colorText[] = {1,1,1,1};
		text = "$STR_DISP_ERROR";
	};
	class Author: RscText {
		idc = 103;
		style = 1;
		x = 0.2;
		y = "0.92 - 0.125";
		w = 0.7;
		h = 0.1;
		font = "SteelfishB64";
		sizeEx = "0.8 * 0.05";
		colorText[] = {1,1,1,1};
		text = "$STR_DISP_ERROR";
	};
	class ButtonLoad: RscActiveMenu {
		idc = 105;
		x = 0.05;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_ME_LOAD";
	};
	class ButtonRetry: RscActiveMenu {
		idc = 104;
		x = 0.7;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_ME_RETRY";
		default = 1;
	};
	class ButtonAbort: RscActiveMenu {
		idc = 2;
		x = 0.85;
		y = 0.9;
		w = 0.15;
		h = 0.05;
		text = "$STR_DISP_ME_ABORT";
		soundClick[] = {"ui\ui_cc",0.2,1};
	};
};
class RscTitlesText {
	access = 3;
	fontBasic = "SteelfishB64";
	sizeExBasic = "0.9 * 0.05";
	fontDown = "SteelfishB64";
	sizeExDown = "0.9 * 0.05";
};
class RscIGText: RscText {
	access = 3;
	h = 0.02;
	colorText[] = {0.8,0.8,0.8,1};
	font = "tahomaB24";
	sizeEx = 0.02;
	style = "0 + 					256";
};
class RscIGProgress {
	access = 3;
	type = 8;
	style = 0;
	idc = -1;
	h = 0.018;
	colorFrame[] = {0.8,0.8,0.8,0.75};
	colorBar[] = {0.8,0.8,0.8,0.5};
};
class RscDisplayHintC {
	access = 3;
	idd = 57;
	movingEnable = 0;
	controls[] = {"Background","Hint","Continue"};
	class Background {
		type = 0;
		idc = 101;
		style = 128;
		x = 0.35;
		y = 0.4;
		w = 0.3;
		h = 0.06;
		text = "";
		colorBackground[] = {0,0,0,0.8};
		colorText[] = {0,0,0,0};
		font = "tahomaB24";
		sizeEx = 0;
	};
	class Hint: RscIGText {
		idc = 102;
		style = "16 + 					256";
		lineSpacing = 1;
		x = 0.36;
		y = 0.41;
		w = 0.28;
		text = "STR_DISP_ERROR";
	};
	class Continue: RscActiveText {
		idc = 2;
		style = 1;
		font = "tahomaB24";
		sizeEx = 0.02;
		x = 0.5;
		y = 0.43;
		w = 0.14;
		h = 0.02;
		text = "$STR_DISP_HINTC_CONTINUE";
		color[] = {0.8,0.8,0.8,1};
		colorActive[] = {0.8,0.8,0,1};
	};
};
class RscInGameUI {
	access = 3;
	unitInfoTypes[] = {
		"RscUnitInfoSoldier","RscUnitInfoTank","RscUnitInfo","RscUnitInfo","RscUnitInfoAir","RscUnitInfoAir", 
		"RscUnitInfoSoldier", // bind holder. It seems 6 is a preserved value and will cause game crash.
		"RscUnitInfoSoldier_TZK","RscUnitInfoTank_TZK"};
	class RscUnitInfoSoldier {
		idd = 100;
		movingEnable = 0;
		controls[] = {"Background","Weapon","Ammo"};
		class Background {
			type = 0;
			idc = 124;
			style = 128;
			x = 0.02;
			y = 0.02;
			w = 0.2;
			h = 0.04;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {0,0,0,0};
			font = "tahomaB24";
			sizeEx = 0;
		};
		class Time: RscIGText {
			idc = 101;
			x = 0.025;
			y = 0.025;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Date: RscIGText {
			idc = 102;
			style = "1 + 					256";
			x = 0.025;
			y = 0.025;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Name: RscIGText {
			idc = 103;
			x = 0.025;
			y = 0.055;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Unit: RscIGText {
			idc = 104;
			x = 0.025;
			y = 0.075;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Weapon: RscIGText {
			idc = 118;
			x = 0.025;
			y = 0.033;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Ammo: RscIGText {
			idc = 119;
			style = "1 + 					256";
			x = 0.025;
			y = 0.033;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
	};
	class RscUnitInfoTank {
		idd = 100;
		movingEnable = 0;
		controls[] = {"Background","Weapon","Ammo"};
		class Background {
			type = 0;
			idc = 124;
			style = 128;
			x = 0.02;
			y = 0.02;
			w = 0.2;
			h = 0.195;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {0,0,0,0};
			font = "tahomaB24";
			sizeEx = 0;
		};
		class Weapon: RscIGText {
			idc = 118;
			x = 0.025;
			y = 0.185;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Ammo: RscIGText {
			idc = 119;
			style = "1 + 					256";
			x = 0.025;
			y = 0.185;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
	};
	class RscUnitInfo {
		idd = 100;
		movingEnable = 0;
		controls[] = {"Background","ValueArmor","ValueFuel","Speed","Alt","TextArmor","TextFuel","Weapon","Ammo"};
		class Background {
			type = 0;
			idc = 124;
			style = 128;
			x = 0.02;
			y = 0.02;
			w = 0.2;
			h = 0.115;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {0,0,0,0};
			font = "tahomaB24";
			sizeEx = 0;
		};
		class Speed: RscIGText {
			idc = 121;
			x = 0.025;
			y = 0.025;
			w = 0.09;
			text = "$STR_DISP_ERROR";
		};
		class Alt: RscIGText {
			idc = 122;
			x = 0.125;
			y = 0.025;
			w = 0.09;
			text = "$STR_DISP_ERROR";
		};
		class TextArmor: RscIGText {
			x = 0.025;
			y = 0.055;
			w = 0.19;
			text = "$STR_UI_ABAR";
		};
		class ValueArmor: RscIGProgress {
			idc = 111;
			x = 0.115;
			y = 0.056;
			w = 0.1;
		};
		class TextFuel: RscIGText {
			x = 0.025;
			y = 0.075;
			w = 0.19;
			text = "$STR_UI_FBAR";
		};
		class ValueFuel: RscIGProgress {
			idc = 113;
			x = 0.115;
			y = 0.076;
			w = 0.1;
		};
		class Weapon: RscIGText {
			idc = 118;
			x = 0.025;
			y = 0.105;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
		class Ammo: RscIGText {
			idc = 119;
			style = "1 + 					256";
			x = 0.025;
			y = 0.105;
			w = 0.19;
			text = "$STR_DISP_ERROR";
		};
	};
	class RscUnitInfoAir: RscUnitInfo {};
	class RscHint {
		idd = 101;
		movingEnable = 0;
		controls[] = {"Background","Hint"};
		class Background {
			type = 0;
			idc = 101;
			style = 128;
			x = 0.02;
			y = 0.02;
			w = 0.2;
			h = 0.04;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {0,0,0,0};
			font = "tahomaB24";
			sizeEx = 0;
		};
		class Hint: RscIGText {
			idc = 102;
			style = "16 + 					256";
			lineSpacing = 1;
			x = 0.025;
			y = 0.033;
			w = 0.19;
			text = "STR_DISP_ERROR";
		};
	};
	// Extra definitions
	class RscUnitInfoSoldier_TZK: RscUnitInfoSoldier {
		controls[] = {"Background","Weapon","Ammo", "TextArmor","ValueArmor"};
		class Background {
			type = 0;
			idc = 124;
			style = 128;
			x = 0.02;
			y = 0.02;
			w = 0.2;
			h = 0.09;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {0,0,0,0};
			font = "tahomaB24";
			sizeEx = 0;
		};
		class TextArmor: RscIGText {
			x = 0.025;
			y = 0.070;
			w = 0.19;
			text = "$STR_UI_HBAR";
		};
		class ValueArmor: RscIGProgress {
			idc = 111;
			x = 0.115;
			y = 0.071;
			w = 0.1;
		};
	};
	class RscUnitInfoTank_TZK: RscUnitInfoTank {
		controls[] = {"Background","Weapon","Ammo", "Speed","ValueArmor","ValueFuel","TextArmor","TextFuel"};
		class Background {
			type = 0;
			idc = 124;
			style = 128;
			x = 0.02;
			y = 0.02;
			w = 0.2;
			h = 0.295;
			text = "";
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {0,0,0,0};
			font = "tahomaB24";
			sizeEx = 0;
		};
		class Speed: RscIGText {
			idc = 121;
			x = 0.025;
			y = 0.225;
			w = 0.09;
			text = "$STR_DISP_ERROR";
		};
		class TextArmor: RscIGText {
			x = 0.025;
			y = 0.255;
			w = 0.19;
			text = "$STR_UI_ABAR";
		};
		class ValueArmor: RscIGProgress {
			idc = 111;
			x = 0.115;
			y = 0.256;
			w = 0.1;
		};
		class TextFuel: RscIGText {
			x = 0.025;
			y = 0.275;
			w = 0.19;
			text = "$STR_UI_FBAR";
		};
		class ValueFuel: RscIGProgress {
			idc = 113;
			x = 0.115;
			y = 0.276;
			w = 0.1;
		};
	};
};
class RscTitles {
	class Default {
		idd = -1;
		movingEnable = 0;
		duration = 4;
	};
	class DefPic: Default {
		type = 0;
		idc = -1;
		style = 48;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "tahomaB24";
		sizeEx = 0;
	};
	class BIS {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "BI Studio";
		controls[] = {"Background","BI_NEW","WWW"};
		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.2;
			y = 0.23;
			w = 0.6;
			h = 0.4;
		};
		class WWW: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "w w w . b i s t u d i o . c o m";
			x = 0.05;
			y = 0.67;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "tahomaB36";
			sizeEx = 0.03;
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class Codemasters {
		idd = -1;
		movingEnable = 0;
		duration = 1;
		name = "Codemasters";
		controls[] = {"Background"};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class LegalScreen {
		idd = -1;
		movingEnable = 0;
		duration = 6;
		name = "Copyrights";
		controls[] = {"Background","BI_NEW","CopText","InfoText"};
		class CopText: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.5;
			text = "?2011 Bohemia Interactive. \nAll rights reserved. \nDeveloped by Bohemia Interactive. Published by Bohemia Interactive. \nAll other copyrights or trademarks are the property of their respective owners.";
			x = 0.05;
			y = 0.3;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "tahomaB36";
			sizeEx = "0.8 * 0.03";
		};
		class InfoText: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.5;
			text = "Counterfeit copying or trading in counterfeit copies is illegal.\nArma: Cold War Assault is protected from unauthorized copying by a unique system. In counterfeit copies, the gameplay will degrade after a period of time to a point where the game is no longer playable. This does not happen to genuine software. if you are any doubt about the authenticity of your Arma: Cold War Assault disc, make sure you have original packaging and a printed silver disc. \nCOUNTERFEIT SOFTWARE IS NOT WORTH PURCHASING.";
			x = 0.05;
			y = 0.6;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,0.5,1};
			font = "tahomaB36";
			sizeEx = "0.8 * 0.03";
		};
		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.4;
			y = 0.1;
			w = 0.2;
			h = 0.13333;
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class Features1 {
		idd = -1;
		movingEnable = 0;
		duration = 6;
		name = "Features";
		controls[] = {"Background","Back","FP1","FP2","FP3","Text1","Text2"};
		class Text1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "?The best of cold war military equipment: battling on foot, in armor and in the sky\n\n?30+ playable vehicles, 20+ different infantry weapons: guns, missiles, explosives\n\n?Leadership of up to 12 units in the squad: simple point and click interface \n\n?Over 50 missions on 3 huge islands: featuring a campaign with exciting storyline\n\n?Intuitive mission editor: players can create own missions and campaigns \n\n?Multiplayer combat over LAN or Internet: including Voice Over Net";
			x = 0.0;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64";
			sizeEx = "0.8 * 0.05";
		};
		class Back: RscText {
			x = 0.0;
			y = 0.24;
			w = 1.0;
			h = 0.6;
			text = "";
			colorBackground[] = {0.12,0.15,0.04,1};
		};
		class Text2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "OUT NOW!";
			x = 0.05;
			y = 0.89;
			w = 0.9;
			h = 0.5;
			colorText[] = {0.23,0.3,0.08,0.5};
			font = "SteelfishB64";
			sizeEx = 0.05;
		};
		class FP1: RscPicture {
			colorText[] = {0.23,0.3,0.08,0.5};
			text = "OFPlogo1.paa";
			x = 0.32;
			y = 0.07;
			w = 0.12;
			h = 0.133;
		};
		class FP2: RscPicture {
			colorText[] = {0.23,0.3,0.08,0.5};
			text = "OFPlogo2.paa";
			x = 0.44;
			y = 0.07;
			w = 0.12;
			h = 0.133;
		};
		class FP3: RscPicture {
			colorText[] = {0.23,0.3,0.08,0.5};
			text = "OFPlogo3.paa";
			x = 0.56;
			y = 0.07;
			w = 0.12;
			h = 0.133;
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class Features {
		idd = -1;
		movingEnable = 0;
		duration = 6;
		name = "Features";
		controls[] = {"CGW1","CGW2","CGW3","CGW4"};
		class CGW1: RscPicture {
			colorText[] = {1,1,1,1};
			text = "\img\CGW1.jpg";
			x = 0;
			y = 0;
			w = 0.5;
			h = 0.666;
		};
		class CGW2: RscPicture {
			colorText[] = {1,1,1,1};
			text = "\img\CGW2.jpg";
			x = 0.5;
			y = 0;
			w = 0.5;
			h = 0.666;
		};
		class CGW3: RscPicture {
			colorText[] = {1,1,1,1};
			text = "\img\CGW3.jpg";
			x = 0;
			y = 0.666;
			w = 0.5;
			h = 0.333;
		};
		class CGW4: RscPicture {
			colorText[] = {1,1,1,1};
			text = "\img\CGW4.jpg";
			x = 0.5;
			y = 0.666;
			w = 0.5;
			h = 0.333;
		};
	};
	class Flashpoint {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "Operation Flashpoint";
		controls[] = {"Background","CWA"};
		class CWA: RscPicture {
			text = "startup_logo_CWA_ca.paa";
			x = 0.2;
			y = 0.23;
			w = 0.6;
			h = 0.4;
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class resistance {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "Resistance logo";
		controls[] = {"Background","RE1","RE2","RE3"};
		class RE1: RscPicture {
			text = "\o\misc\OFPRlogo01.paa";
			x = 0.05;
			y = 0.32;
			w = 0.3;
			h = 0.33;
		};
		class RE2: RscPicture {
			text = "\o\misc\OFPRlogo02.paa";
			x = 0.35;
			y = 0.32;
			w = 0.3;
			h = 0.33;
		};
		class RE3: RscPicture {
			text = "\o\misc\OFPRlogo03.paa";
			x = 0.65;
			y = 0.32;
			w = 0.3;
			h = 0.33;
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class creditsback {
		idd = -1;
		movingEnable = 0;
		duration = 10000;
		name = "Creditsback";
		controls[] = {"Back","background"};
		class Back: RscText {
			x = 0.72;
			y = 0.0;
			w = 0.5;
			h = 1.0;
			text = "";
			colorBackground[] = {0.0,0.0,0.0,1};
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class creditsbackBIS {
		idd = -1;
		movingEnable = 0;
		duration = 10000;
		name = "CreditsbackBIS";
		controls[] = {"Back","background","web","BI_NEW","dev"};
		class Back: RscText {
			x = 0.72;
			y = 0.0;
			w = 0.5;
			h = 1.0;
			text = "";
			colorBackground[] = {0.0,0.0,0.0,1};
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class web: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "www.bistudio.com";
			x = 0.41;
			y = 0.95;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "\fonts\tahomaB36";
			sizeEx = "0.7 * 0.03";
		};
		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.76;
			y = 0.04;
			w = 0.2;
			h = 0.12;
		};
		class dev: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS12a";
			x = 0.41;
			y = 0.02;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "\fonts\tahomaB36";
			sizeEx = "0.6 * 0.03";
		};
	};
	class BISleader: creditsbackBIS {
		name = "BISleader";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS01";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN01";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "1.1 * 0.05";
		};
	};
	class BISprogram: creditsbackBIS {
		name = "BISprogrammer";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS02";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN02";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
	};
	class BISart: creditsbackBIS {
		name = "BISart";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS03";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN03";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
	};
	class BISdesign: creditsbackBIS {
		name = "BISdesign";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS04";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN04";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
	};
	class BISother1: creditsbackBIS {
		name = "BISother1";
		controls[] = {"Back","background","web","BI_NEW","work1","work2","work3","name1","name2","name3","dev"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS05";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN05";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
		class work2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS06";
			x = 0.36;
			y = 0.45;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN06";
			x = 0.36;
			y = 0.5;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
		class work3: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS07";
			x = 0.36;
			y = 0.6;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name3: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN07";
			x = 0.36;
			y = 0.65;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
	};
	class BISmusic: creditsbackBIS {
		name = "BISmusic";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","name2","name3","name4","dev"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS09";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN09";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN09a";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.5 * 0.05";
		};
		class name3: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN09b";
			x = 0.36;
			y = 0.6;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.5 * 0.05";
		};
		class name4: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN09c";
			x = 0.36;
			y = 0.63;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
	};
	class BISsfx: creditsbackBIS {
		name = "BISsfx";
		controls[] = {"Back","background","web","BI_NEW","work1","work2","name1","name2","dev","copy"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS10";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.98;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN10";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.98;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.8 * 0.05";
		};
		class work2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS08";
			x = 0.36;
			y = 0.55;
			w = 1.0;
			h = 0.98;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN08";
			x = 0.36;
			y = 0.6;
			w = 1.0;
			h = 0.98;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.9 * 0.05";
		};
		class copy: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_COPY";
			x = 0.36;
			y = 0.7;
			w = 1.0;
			h = 0.98;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
	};
	class BISthx: creditsbackBIS {
		name = "BISthx";
		controls[] = {"Back","background","web","BI_NEW","work2","name2","dev"};
		class work2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS11";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN11";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "SteelfishB64CE";
			sizeEx = "0.8 * 0.05";
		};
	};
	class creditsbackCM {
		idd = -1;
		movingEnable = 0;
		duration = 10000;
		name = "CreditsbackCM";
		controls[] = {"Back","background","web","BI_NEW","pub"};
		class Back: RscText {
			x = 0.72;
			y = 0.0;
			w = 0.5;
			h = 1.0;
			text = "";
			colorBackground[] = {0.0,0.0,0.0,1};
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class CM1: RscPicture {
			text = "CM1fit.paa";
			x = 0.74;
			y = 0.03;
			w = 0.08;
			h = 0.1;
		};
		class CM2: RscPicture {
			text = "CM2fit.paa";
			x = 0.82;
			y = 0.03;
			w = 0.08;
			h = 0.1;
		};
		class CM3: RscPicture {
			text = "CM3fit.paa";
			x = 0.9;
			y = 0.03;
			w = 0.08;
			h = 0.1;
		};
		class CM4: RscPicture {
			text = "CMsign.paa";
			x = 0.9;
			y = 0.03;
			w = 0.08;
			h = 0.1;
		};
		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.76;
			y = 0.04;
			w = 0.2;
			h = 0.12;
		};
		class pub: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS12";
			x = 0.41;
			y = 0.015;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "\fonts\tahomaB36";
			sizeEx = "0.6 * 0.03";
		};
		class web: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "www.bistudio.com";
			x = 0.41;
			y = 0.95;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "\fonts\tahomaB36";
			sizeEx = "0.7 * 0.03";
		};
	};
	class CMProducer: creditsbackCM {
		name = "CMproducer";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS13";
			x = 0.36;
			y = 0.4;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN13";
			x = 0.36;
			y = 0.45;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
	};
	class CMdesign: creditsbackCM {
		name = "CMdesign";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS14";
			x = 0.36;
			y = 0.3;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN14";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
	};
	class CMQA: creditsbackCM {
		name = "CMQA";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS15";
			x = 0.36;
			y = 0.2;
			w = 1.0;
			h = 0.93;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN15";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.93;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
	};
	class CMMrkev: creditsbackCM {
		name = "CMMrkev";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS16";
			x = 0.36;
			y = 0.2;
			w = 1.0;
			h = 0.93;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN16";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.93;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.8 * 0.05";
		};
	};
	class CMVoice: creditsbackCM {
		name = "CMVoice";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","work2","name2","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS17";
			x = 0.36;
			y = 0.2;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN17";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
		class work2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS18";
			x = 0.36;
			y = 0.45;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN18";
			x = 0.36;
			y = 0.5;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
	};
	class CMlocal: creditsbackCM {
		name = "CMlocal";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","work2","name2","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS19";
			x = 0.36;
			y = 0.2;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN19";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
		class work2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS20";
			x = 0.36;
			y = 0.35;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN20";
			x = 0.36;
			y = 0.4;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
	};
	class CMlegal: creditsbackCM {
		name = "CMlegal";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","work2","name2","name1"};
		class work1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS21";
			x = 0.36;
			y = 0.2;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN21";
			x = 0.36;
			y = 0.25;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
		class work2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS22";
			x = 0.36;
			y = 0.45;
			w = 1.0;
			h = 0.73;
			colorText[] = {0.75,0.75,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.6 * 0.05";
		};
		class name2: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITSN22";
			x = 0.36;
			y = 0.5;
			w = 1.0;
			h = 0.53;
			colorText[] = {1.0,1.0,1.0,1};
			font = "\fonts\SteelfishB64";
			sizeEx = "0.9 * 0.05";
		};
	};
	class Endof {
		idd = -1;
		movingEnable = 0;
		duration = 10000;
		name = "Endof";
		controls[] = {"Back2","background","copy"};
		class Back2: RscText {
			x = 0.0;
			y = 0.95;
			w = 1.0;
			h = 1.0;
			text = "";
			colorBackground[] = {0.0,0.0,0.0,0.5};
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class copy: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS23";
			x = 0.03;
			y = 0.96;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "\fonts\tahomaB36";
			sizeEx = "0.7 * 0.03";
		};
	};
	class foto {
		idd = -1;
		movingEnable = 0;
		duration = 10000;
		name = "foto";
		fadein = 0;
		controls[] = {"background","copy","up","down","right","left"};
		class up: RscText {
			x = 0.0;
			y = 0.0;
			w = 1.0;
			h = 0.02;
			text = "";
			colorBackground[] = {0.9,0.9,0.9,1.0};
		};
		class down: RscText {
			x = 0.0;
			y = 0.98;
			w = 1.0;
			h = 1.0;
			text = "";
			colorBackground[] = {0.9,0.9,0.9,1.0};
		};
		class left: RscText {
			x = 0.0;
			y = 0.0;
			w = 0.02;
			h = 1.0;
			text = "";
			colorBackground[] = {0.9,0.9,0.9,1.0};
		};
		class right: RscText {
			x = 0.98;
			y = 0.0;
			w = 1.0;
			h = 1.0;
			text = "";
			colorBackground[] = {0.9,0.9,0.9,1.0};
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class copy: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS23";
			x = 0.03;
			y = 0.9;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "\fonts\tahomaB36";
			sizeEx = "0.7 * 0.03";
		};
	};
	class Endof2 {
		idd = -1;
		movingEnable = 0;
		duration = 10000;
		name = "Endof2";
		controls[] = {"Back2","background","copy"};
		class Back2: RscText {
			x = 0.0;
			y = 0.0;
			w = 1.0;
			h = 1.0;
			text = "";
			colorBackground[] = {0.0,0.0,0.0,0.7};
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class copy: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_CREDITS24";
			x = 0.03;
			y = 0.5;
			w = 0.9;
			h = 0.7;
			colorText[] = {1,1,1,1};
			font = "SteelfishB64CE";
			sizeEx = "0.7 * 0.05";
		};
	};
	class maintitles1 {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "maintitles1";
		controls[] = {"Background","maintitles_01","maintitles_02"};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class maintitles_01: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_MAINTITLES_01";
			x = -0.02;
			y = 0.487;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "\fonts\SteelfishB128";
			sizeEx = 0.098;
		};
		class maintitles_02: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_MAINTITLES_02";
			x = 0.16;
			y = 0.52;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "\fonts\SteelfishB128";
			sizeEx = "0.6 * 0.098";
		};
	};
	class maintitles2 {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "maintitles2";
		controls[] = {"Background","maintitles_03","maintitles_04","maintitles_05"};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class maintitles_03: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_MAINTITLES_03";
			x = -0.19;
			y = 0.52;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "\fonts\SteelfishB128";
			sizeEx = "0.6 * 0.098";
		};
		class maintitles_04: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_MAINTITLES_04";
			x = 0.01;
			y = 0.487;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "\fonts\SteelfishB128";
			sizeEx = "1.0 * 0.098";
		};
		class maintitles_05: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_MAINTITLES_05";
			x = 0.26;
			y = 0.52;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "\fonts\SteelfishB128";
			sizeEx = "0.6 * 0.098";
		};
	};
	class maintitles3 {
		idd = -1;
		movingEnable = 0;
		duration = 6;
		name = "maintitles3";
		controls[] = {"Background","maintitles_06"};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class maintitles_06: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1.0;
			text = "$STR_MAINTITLES_06";
			x = 0.045;
			y = 0.47;
			w = 0.9;
			h = 0.5;
			colorText[] = {1,1,1,1};
			font = "\fonts\SteelfishB128";
			sizeEx = "1.4 * 0.098";
		};
	};
	class binocular {
		idd = -1;
		movingEnable = 0;
		duration = 1000;
		name = "binocular";
		objects[] = {"binocular"};
		class binocular: RscObject {
			model = "optika_dalekohled.p3d";
			idc = -1;
			position[] = {0,0,0.063};
			direction[] = {"sin 0","sin 180 * cos 0","cos 180 * cos 0"};
			up[] = {0,"cos 180","-sin 180"};
		};
	};
	class reslogo {
		idd = -1;
		movingEnable = 0;
		duration = 1000;
		name = "reslogo";
		objects[] = {"binocular"};
		class binocular: RscObject {
			model = "\o\misc\Resistance_logo.p3d";
			idc = -1;
			position[] = {0,0,3.5};
			direction[] = {"sin 0","sin 180 * cos 0","cos 180 * cos 0"};
			up[] = {0,"cos 0","-sin 180"};
		};
	};
	class Demo1 {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "Demo 1";
		controls[] = {"Text"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "Your transport is down. \nYou're about to ditch in hostile territory.";
			x = 0.05;
			y = 0.4;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB128";
			sizeEx = "0.6 * 0.098";
		};
	};
	class Demo2 {
		idd = -1;
		movingEnable = 0;
		duration = 2;
		name = "Demo 2 - Think fast";
		controls[] = {"Text"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "Think fast, what are your options?";
			x = 0.05;
			y = 0.4;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB128";
			sizeEx = "0.6 * 0.098";
		};
	};
	class Demo3 {
		idd = -1;
		movingEnable = 0;
		duration = 1;
		name = "Demo 3 - Hide";
		controls[] = {"Text"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "Hide?";
			x = 0.05;
			y = 0.4;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB128";
			sizeEx = 0.098;
		};
	};
	class Demo4 {
		idd = -1;
		movingEnable = 0;
		duration = 1;
		name = "Demo 4 - Fight";
		controls[] = {"Text"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "Fight?";
			x = 0.05;
			y = 0.4;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB128";
			sizeEx = "1.0 * 0.098";
		};
	};
	class Demo5 {
		idd = -1;
		movingEnable = 0;
		duration = 1;
		name = "Demo 5 - Surrender";
		controls[] = {"Text"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "Surrender?";
			x = 0.05;
			y = 0.4;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB128";
			sizeEx = 0.098;
		};
	};
	class Demo6 {
		idd = -1;
		movingEnable = 0;
		duration = 1;
		name = "Demo 6 - OFP your call";
		controls[] = {"Background","FP1","FP2","FP3","Text"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "YOUR CALL.";
			x = 0.05;
			y = 0.5;
			w = 0.9;
			h = 0.3;
			colorText[] = {1.0,1.0,1.0,0.5};
			font = "SteelfishB128";
			sizeEx = 0.098;
		};
		class FP1: RscPicture {
			colorText[] = {0.23,0.3,0.08,0.3};
			text = "OFPlogo1.paa";
			x = 0.05;
			y = 0.2;
			w = 0.3;
			h = 0.33;
		};
		class FP2: RscPicture {
			colorText[] = {0.23,0.3,0.08,0.3};
			text = "OFPlogo2.paa";
			x = 0.35;
			y = 0.2;
			w = 0.3;
			h = 0.33;
		};
		class FP3: RscPicture {
			colorText[] = {0.23,0.3,0.08,0.3};
			text = "OFPlogo3.paa";
			x = 0.65;
			y = 0.2;
			w = 0.3;
			h = 0.33;
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
	class Demo7 {
		idd = -1;
		movingEnable = 0;
		duration = 1;
		name = "Demo 7 TBC";
		controls[] = {"Background","Text","Text1"};
		class Text: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "JOIN NOW!";
			x = 0.05;
			y = 0.45;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB128";
			sizeEx = "0.6 * 0.098";
		};
		class Text1: RscText {
			style = "16 + 					2 + 				512";
			lineSpacing = 1;
			text = "The ultimate test of your combat skills on PC CD-ROM.";
			x = 0.05;
			y = 0.55;
			w = 0.9;
			h = 0.5;
			colorText[] = {1.0,1.0,1.0,1.0};
			font = "SteelfishB64";
			sizeEx = "0.8 * 0.05";
		};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
	};
};
class RscDisplayLoadMission {
	access = 3;
	idd = -1;
	movingEnable = 0;
	controls[] = {"Name","Date"};
	class Name: RscText {
		idc = 101;
		text = "$STR_DISP_ERROR";
		style = 2;
		colorText[] = {1,1,1,1};
		font = "SteelfishB64";
		sizeEx = "1.0 * 0.05";
		x = 0;
		y = 0.45;
		w = 1;
		h = 0.05;
	};
	class Date: RscText {
		idc = 102;
		text = "$STR_DISP_ERROR";
		style = 2;
		colorText[] = {1,1,1,1};
		font = "SteelfishB64";
		sizeEx = "0.8 * 0.05";
		x = 0;
		y = 0.5;
		w = 1;
		h = 0.05;
	};
};
//};