// args: none
// use a global array to index script path
// Can't use them before initialization (like in mission.sqm)

TzkScripts = [];

private [{_i}, {_capacity}];
_i = 0; _capacity = 256;
TzkScripts resize _capicity;

_f = {
	if (_i >= _capacity) then {
		_capacity = _capacity * 2;
		TzkScripts resize _capacity;
	};
	TzkScripts set [_i, _this];
	_i = _i + 1;
};

// All exist item's index and their order CAN'T BE CHANGED
"\TZK_Scripts_4_0_4\Player\Action\SelfMedic.sqs" call _f; // 000
"\TZK_Config_4_0_6\Scripts\BREM1\Crane.sqs" call _f; // 001
"\TZK_Config_4_0_6\Scripts\M88\Crane.sqs" call _f; // 002
"Server\BuyUnit\NewOrder.sqs" call _f; // 003
"Server\Init\LeaderAI.sqs" call _f; // 004
"\TZK_Scripts_4_0_4\Server\EquipGroupLeaderAI.sqs" call _f; // 005
"Server\AI_Stop.sqs" call _f; // 006
"\TZK_Patch4_4_0_6\s\Server\AICO\CheckBuyUnit.sqs" call _f; // 007
"\TZK_Patch4_4_0_6\s\Server\AICO\CheckSupport.sqs" call _f; // 008
"Util\LandHeli.sqs" call _f; // 009

"Util\Deploy\M109A6G.sqs" call _f; // 010
"Util\Deploy\PLZ05.sqs" call _f; // 011
"Util\Deploy\TOS1.sqs" call _f; // 012
"\TZK_Scripts_4_0_6\Common\Init\CustomWeaponVehicleInfo.sqf" call _f; // 013
"\TZK_Patch4_4_0_6\s\UI\AIGroupOrders.sqs" call _f; // 014
"\TZK_Scripts_4_0_6\Player\Dialog\AiGrpOrder_Init.sqf" call _f; // 015
"\TZK_Patch4_4_0_6\s\UI\BuyUnits_Available.sqf" call _f; // 016
"\TZK_Patch4_4_0_6\s\UI\AttachVehicle.sqs" call _f; // 017
"Debug\Console.sqs" call _f; // 018
"\TZK_Patch4_4_0_6\s\UI\Equipment.sqs" call _f; // 019

"Rts\Dialog\PplGrpOrder.sqs" call _f; // 020
"Player\Dialog\Query.sqs" call _f; // 021
"\TZK_Scripts_4_0_4\Player\Dialog\SetFlightAltitude.sqs" call _f; // 022
"\TZK_Patch4_4_0_6\s\UI\ShownGroups.sqs" call _f; // 023
"\TZK_Patch4_4_0_6\s\UI\Spectator.sqs" call _f; // 024
"Player\Dialog\TZK_Mission_Setting_1_Wrap.sqs" call _f; // 025
"Player\Dialog\TZK_Mission_Setting_2.sqs" call _f; // 026
"\TZK_Patch4_4_0_6\s\UI\UnitCam.sqs" call _f; // 027
"Rts\Dialog\Waypoints.sqs" call _f; // 028
"\TZK_Patch4_4_0_6\s\Player\Effect\AB.sqs" call _f; // 029

"Player\Effect\T80Drum.sqs" call _f; // 030
"Player\Effect\Fired_Artillery_Impact.sqs" call _f; // 031
"\TZK_Scripts_4_0_4\Player\Effect\Fired_COC_Tracer.sqs" call _f; // 032
"\TZK_Patch4_4_0_6\s\Player\Effect\Fired_FFUR_Cannon.sqs" call _f; // 033
"Common\EH\Fired_TrackShell.sqs" call _f; // 034
"\TZK_Patch4_4_0_6\s\EhInit\RedirectableM109a6g.sqs" call _f; // 035
"\TZK_Patch4_4_0_6\s\EhInit\RedirectablePlz05.sqs" call _f; // 036
"\TZK_Patch4_4_0_6\s\EhInit\RedirectableTos1.sqs" call _f; // 037
"\TZK_Patch4_4_0_6\s\Server\Event\Add_StructHit.sqs" call _f; // 038
"Common\Event\Add_Killed_Infantry.sqs" call _f; // 039

"\TZK_Config_4_0_6\Scripts\CSLA_UH60A\GetOut_EH.sqs" call _f; // 040
"Common\Event\AutoDestroyBadlyHurtVehicle.sqs" call _f; // 041
"Common\Event\AutoDestroyDisabledVehicle.sqs" call _f; // 042
"Common\Event\VehicleHit.sqs" call _f; // 043
"\TZK_Patch4_4_0_6\s\Server\Event\StructHit.sqs" call _f; // 044
"\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs" call _f; // 045
"\TZK_Config_4_0_6\Scripts\texture\AMX10RC.sqs" call _f; // 046
"\TZK_Config_4_0_6\Scripts\texture\BMP1.sqs" call _f; // 047
"\TZK_Config_4_0_6\Scripts\texture\BMP2.sqs" call _f; // 048
"\TZK_Config_4_0_6\Scripts\texture\BMPAmbu.sqs" call _f; // 049

"\TZK_Config_4_0_6\Scripts\BREM1\Init.sqs" call _f; // 050
"\TZK_Objects\Scripts\texture\GUER.sqs" call _f; // 051
"\TZK_Objects\Scripts\texture\Leo2A6.sqs" call _f; // 052
"\TZK_Config_4_0_6\Scripts\texture\M1A1.sqs" call _f; // 053
"\TZK_Config_4_0_6\Scripts\texture\M88.sqs" call _f; // 054
"\TZK_Patch4_4_0_6\s\EhInit\4064TexM109.sqs" call _f; // 055
"\TZK_Patch4_4_0_6\s\EhInit\4064TexPlz05.sqs" call _f; // 056
"\TZK_Objects\Scripts\texture\RSC_Numbers.sqs" call _f; // 057
"\TZK_Objects\Scripts\texture\T80.sqs" call _f; // 058
"059" call _f; // 059

"\TZK_Patch4_4_0_6\s\Common\Event\MHQDestroyed.sqs" call _f; // 060
"\TZK_Scripts_4_0_4\Server\Event_DefenceTowerDestroyed.sqs" call _f; // 061
"\TZK_Patch4_4_0_6\s\Server\Event\StructPrimDestroyed.sqs" call _f; // 062
"\TZK_Scripts_4_0_4\Server\Event_StructSecDestroyed.sqs" call _f; // 063
"\TZK_Patch4_4_0_6\s\Common\Equip\GeneralSoldier.sqs" call _f; // 064
"\TZK_Patch4_4_0_6\s\Common\Equip\GeneralVehicle.sqs" call _f; // 065
"\TZK_Patch4_4_0_6\s\Common\Equip\GeneralTownVeh.sqs" call _f; // 066
"\TZK_Scripts_4_0_4\Common\Equip\CargoCar.sqs" call _f; // 067
"\TZK_Scripts_4_0_4\Common\Equip\CargoCar2.sqs" call _f; // 068
"\TZK_Scripts_4_0_4\Common\Equip\CargoTruck.sqs" call _f; // 069
"\TZK_Patch4_4_0_6\s\Common\Equip\TownVehicles.sqs" call _f; // 070

"\TZK_Patch4_4_0_6\s\Common\EditEquipRearmData.sqs" call _f; // 071
"\TZK_Scripts_4_0_4\Common\AddRearmData.sqs" call _f; // 072
"\TZK_Scripts_4_0_4\Common\EditRearmdata.sqs" call _f; // 073
"Player\Action\AttachDetachVehicle.sqs" call _f; // 074
"Server\BuyUnit\Factory.sqs" call _f; // 075
"\TZK_Scripts_4_0_4\Player\CleanupGround.sqs" call _f; // 076
"Player\DisplayGameInfo.sqs" call _f; // 077
"Network\sEjectAllCargo.sqs" call _f; // 078
"Network\sEjectOneCargo.sqs" call _f; // 079
"Network\sEjectAiCargo.sqs" call _f; // 080

"Rts\Order\fakeMoveWP.sqs" call _f; // 081
"\TZK_Scripts_4_0_4\Player\Order\PatrolPos.sqs" call _f; // 082
"\TZK_Scripts_4_0_4\Player\Order\PatrolWP.sqs" call _f; // 083
"Player\Order\PatrolWPs.sqs" call _f; // 084
"\TZK_Patch4_4_0_6\s\Player\Order\TransportDuty.sqs" call _f; // 085
"\TZK_Scripts_4_0_4\Player\Order\DisableMines.sqs" call _f; // 086
"Player\Order\MinePos.sqs" call _f; // 087
"Player\Order\MineWP.sqs" call _f; // 088
"Player\Order\MineWPtoWP.sqs" call _f; // 089
"Player\Order\SatchelPos.sqs" call _f; // 090
"Player\Order\SatchelWP.sqs" call _f; // 091
"Player\Order\MineFlag.sqs" call _f; // 092
"\TZK_Scripts_4_0_4\Player\Order\HoldTown.sqs" call _f; // 093
"Player\Order\BoardVehicle.sqs" call _f; // 094
"Player\Order\Support OptRearm.sqs" call _f; // 095
"\TZK_Patch4_4_0_6\s\Player\Order\TransportDuty Air.sqs" call _f; // 096
"\TZK_Patch4_4_0_6\s\Player\Order\TransportDuty Ground.sqs" call _f; // 097
"098" call _f; // 098
"099" call _f; // 099

"Server\Order\TakeTowns.sqs" call _f; // 100
"Server\Order\TakeHoldTowns.sqs" call _f; // 101
"Server\Order\HoldTown.sqs" call _f; // 102
"Server\Order\GuardArea.sqs" call _f; // 103
"Server\Order\GuardLine.sqs" call _f; // 104
"Server\Order\PatrolArea.sqs" call _f; // 105
"Server\Order\PatrolLine.sqs" call _f; // 106
"Server\Order\Advance.sqs" call _f; // 107
"Server\Order\TransportDuty.sqs" call _f; // 108
"Server\Order\MineLine.sqs" call _f; // 109
"Server\Order\DisableMines.sqs" call _f; // 110
"Server\Order\Halt.sqs" call _f; // 111
"112" call _f; // 112
"113" call _f; // 113
"114" call _f; // 114
"115" call _f; // 115
"116" call _f; // 116
"117" call _f; // 117
"118" call _f; // 118
"119" call _f; // 119

"\TZK_Patch4_4_0_6\s\Player\Effect\EquipCarMG.sqs" call _f; // 120
"\TZK_Patch4_4_0_6\s\Player\Effect\EquipTankMissile.sqs" call _f; // 121

"\TZK_Scripts_4_0_4\Common\SQF\GetUnitMarker.sqf" call _f; // 122
"\TZK_Scripts_4_0_4\Common\KeepTempLeaderAlive.sqs" call _f; // 123

"Net\sLockVehicle.sqs" call _f; // 124

// for LST
"125" call _f; // 125
"126" call _f; // 126
"127" call _f; // 127

"\TZK_Scripts_4_0_4\Player\Marker\HideSpectator.sqf" call _f; // 128
"\TZK_Scripts_4_0_4\Player\AddToStructMatrix.sqs" call _f; // 129

"\TZK_Scripts_4_0_4\Player\Action\SwitchToDriver.sqs" call _f; // 130
"\TZK_Scripts_4_0_4\Player\Action\SwitchToGunner.sqs" call _f; // 131

"Common\ReEquip\SwitchMagPreset.sqs" call _f; // 132
"Player\Marker\MapClickPlayer.sqf" call _f; // 133
"\TZK_Scripts_4_0_6\Player\SQF\StringWithoutVersion.sqf" call _f; // 134
"Net\sUndoBuild.sqs" call _f; // 135
"Player\SetWaypointSmart.sqs" call _f; // 136
"Server\AddWorker.sqs" call _f; // 137
"\TZK_Patch4_4_0_6\s\Server\CheckWinTowns.sqs" call _f; // 138
"\TZK_Patch4_4_0_6\s\Server\UndoStructure.sqs" call _f; // 139

"\TZK_Patch4_4_0_6\s\InfoSvr\GroupIsAI.sqs" call _f; // 140
"\TZK_Patch4_4_0_6\s\InfoSvr\CmdChange.sqs" call _f; // 141
"\TZK_Patch4_4_0_6\s\InfoSvr\DestructionCompleted.sqs" call _f; // 142
"\TZK_Patch4_4_0_6\s\InfoSvr\MHQRepaired.sqs" call _f; // 143
"\TZK_Patch4_4_0_6\s\InfoSvr\NoMoneyForStructRepair.sqs" call _f; // 144
"\TZK_Patch4_4_0_6\s\InfoSvr\ScoreMoney.sqs" call _f; // 145
"\TZK_Patch4_4_0_6\s\InfoSvr\StructDestroyed.sqs" call _f; // 146
"\TZK_Patch4_4_0_6\s\InfoSvr\StructReady.sqs" call _f; // 147
"\TZK_Patch4_4_0_6\s\InfoSvr\StructRepaired.sqs" call _f; // 148
"\TZK_Patch4_4_0_6\s\InfoSvr\StructUndone.sqs" call _f; // 149
"\TZK_Patch4_4_0_6\s\InfoSvr\TempAACreated.sqs" call _f; // 150
"\TZK_Patch4_4_0_6\s\InfoSvr\TempAADeleted.sqs" call _f; // 151
"\TZK_Patch4_4_0_6\s\InfoSvr\TimeUntilTownWin.sqs" call _f; // 152
"\TZK_Patch4_4_0_6\s\InfoSvr\TownGroupHibernate.sqs" call _f; // 153
"\TZK_Patch4_4_0_6\s\InfoSvr\TownGroupLoss.sqs" call _f; // 154
"\TZK_Patch4_4_0_6\s\InfoSvr\TownGroupSpawn.sqs" call _f; // 155
"\TZK_Patch4_4_0_6\s\InfoSvr\UnitBuilding.sqs" call _f; // 156
"\TZK_Patch4_4_0_6\s\InfoSvr\WorkerStuck.sqs" call _f; // 157
"\TZK_Patch4_4_0_6\s\InfoSvr\GroupFull.sqs" call _f; // 158
"\TZK_Patch4_4_0_6\s\InfoSvr\NoMoneyUnit.sqs" call _f; // 159
"\TZK_Patch4_4_0_6\s\InfoSvr\TimeLimitRemind.sqs" call _f; // 160

"\TZK_Scripts_4_0_6\Player\Marker\SpectatorMarker.sqs" call _f; // 161
"\TZK_Patch4_4_0_6\s\Marker\struct.sqs" call _f; // 162
"163" call _f; // 163
"164" call _f; // 164
"165" call _f; // 165

"Server\Money\Add.sqs" call _f; // 166
"Server\Money\Spend.sqs" call _f; // 167
"Server\Money\Transfer.sqs" call _f; // 168
"169" call _f; // 169
"170" call _f; // 170

"Network\sAiGrpOrder.sqf" call _f; // 171
"Network\sAiGrpSetting.sqf" call _f; // 172
"\TZK_Patch4_4_0_6\s\Common\Msg\sMHQKilled.sqs" call _f; // 173
"Net\sScore.sqs" call _f; // 174
"Common\Msg\sTransportTurnOn.sqs" call _f; // 175
"Common\Msg\sTransportTurnOff.sqs" call _f; // 176
"Net\sUpgrade.sqs" call _f; // 177
"\TZK_Patch4_4_0_6\s\Player\Msg\sBlockedByClient.sqs" call _f; // 178
"Net\sInfo.sqs" call _f; // 179
"Net\sTownSideChange.sqs" call _f; // 180

"\TZK_Config_4_0_6\Scripts\recoilByTex\grkpbv.sqs" call _f; // 181
"\TZK_Config_4_0_6\Scripts\recoilByTex\m109a6.sqs" call _f; // 182
"\TZK_Config_4_0_6\Scripts\recoilByTex\plz05.sqs" call _f; // 183
"\TZK_Config_4_0_6\Scripts\recoilByTex\plz89.sqs" call _f; // 184

"Network\sBuyWorker.sqs" call _f; // 185
"Network\sRearmVehGeneral.sqs" call _f; // 186
"Network\sVehMagsRemove.sqs" call _f; // 187

"Common\DeleteUnitAfterDelay.sqs" call _f; // 188
"Client\FiredEffect.sqf" call _f; // 189
"\TZK_Patch4_4_0_6\s\Player\Effect\EquipVirtualWeapon.sqs" call _f; // 190

"\TZK_Patch4_4_0_6\s\UI\PlayGameOverSequence.sqs" call _f; // 191
"\TZK_Patch4_4_0_6\s\Player\Init\DialogChnLanguage.sqf" call _f; // 192
"\TZK_Patch4_4_0_6\s\Player\Init\StructureEventHandler.sqs" call _f; // 193

"\TZK_Patch4_4_0_6\s\Player\Loop\VehState.sqs" call _f; // 194

"Player\Radio\entrance.sqs" call _f; // 195
"Player\Radio\update_veh_common.sqf" call _f; // 196
"197" call _f; // 197
"\TZK_Patch4_4_0_6\s\Radio\update_veh_parachute.sqf" call _f; // 198
"Player\Radio\Graduation.sqs" call _f; // 199
"\TZK_Patch4_4_0_6\s\Radio\list_spec_return.sqs" call _f; // 200
"Rts\Ui\SwitchMapMode.sqs" call _f; // 201
"\TZK_Scripts_4_0_4\Player\Radio\RadioList_Struct_ResetUp.sqs" call _f; // 202
"\TZK_Patch4_4_0_6\s\Radio\update_struct_mortar.sqf" call _f; // 203
"\TZK_Patch4_4_0_6\s\Radio\update_veh_howitzer.sqs" call _f; // 204
"\TZK_Patch4_4_0_6\s\Radio\update_veh_tos1.sqs" call _f; // 205
"\TZK_Patch4_4_0_6\s\Radio\update_struct_howitzer.sqs" call _f; // 206
"\TZK_Patch4_4_0_6\s\Radio\update_veh_m270.sqs" call _f; // 207
"208" call _f; // 208
"209" call _f; // 209

"Server\SQF\BuildStruct.sqf" call _f; // 210
"Server\Destruction.sqs" call _f; // 211
"\TZK_Patch4_4_0_6\s\Server\RepairMHQ.sqs" call _f; // 212
"\TZK_Patch4_4_0_6\s\Server\RepairMCV.sqs" call _f; // 213
"Server\ResetStructureUp.sqs" call _f; // 214

"\TZK_Patch4_4_0_6\s\Server\Init\DefTowerStruct.sqs" call _f; // 215
"Server\Init\PrimaryStruct.sqs" call _f; // 216
"\TZK_Patch4_4_0_6\s\Server\Init\SecondaryStruct.sqs" call _f; // 217

"\TZK_Patch4_4_0_6\s\Server\Start\KnowsAbout.sqs" call _f; // 218
"Server\Loop\KnowsAboutG.sqs" call _f; // 219
"Server\Loop\KnowsAboutR.sqs" call _f; // 220

"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup1.sqs" call _f; // 221
"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup2.sqs" call _f; // 222
"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup3.sqs" call _f; // 223
"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup4.sqs" call _f; // 224
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup1.sqs" call _f; // 225
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup2.sqs" call _f; // 226
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup3.sqs" call _f; // 227
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup4.sqs" call _f; // 228

"\TZK_Patch4_4_0_6\s\Common\TriggerGameEnd.sqs" call _f; // 229
"\TZK_Scripts_4_0_6\Server\Dynamic\TriggerGameEnd.sqs" call _f; // 230
"Server\Loop\TownTrigger.sqs" call _f; // 231

"\TZK_Patch4_4_0_6\s\UI\AIGrpOrder_OnNewGroupSelected.sqf" call _f; // 232
"\TZK_Patch4_4_0_6\s\UI\AiGrpOrder_RefreshOrder.sqf" call _f; // 233
"\TZK_Patch4_4_0_6\s\UI\AIGrpOrder_SendSetting.sqf" call _f; // 234
"\TZK_Patch4_4_0_6\s\UI\AiGrpOrder_Update4OneGroup.sqf" call _f; // 235
"\TZK_Patch4_4_0_6\s\UI\AIGrpOrder_UpdateControls.sqf" call _f; // 236
"\TZK_Patch4_4_0_6\s\UI\AttachVehicle_List.sqf" call _f; // 237
"\TZK_Patch4_4_0_6\s\UI\AttachVehicle_Vehicles.sqf" call _f; // 238
"\TZK_Patch4_4_0_6\s\UI\AutoBuy_CheckModifyCombobox.sqf" call _f; // 239
"\TZK_Patch4_4_0_6\s\UI\VoteMenu.sqs" call _f; // 240
"\TZK_Patch4_4_0_6\s\UI\VoteMenu_Init.sqf" call _f; // 241
"\TZK_Patch4_4_0_6\s\UI\Stats.sqs" call _f; // 242
"\TZK_Patch4_4_0_6\s\UI\GameOverUpdate.sqs" call _f; // 243
"\TZK_Patch4_4_0_6\s\UI\Options_Init.sqf" call _f; // 244
"\TZK_Patch4_4_0_6\s\UI\StartPos.sqs" call _f; // 245
"\TZK_Patch4_4_0_6\s\UI\SatCamPreprocess.sqf" call _f; // 246
"\TZK_Patch4_4_0_6\s\UI\SatCam.sqs" call _f; // 247
"\TZK_Patch4_4_0_6\s\UI\SatCamExit.sqf" call _f; // 248
"\TZK_Patch4_4_0_6\s\UI\RRV_PlaneCheck.sqf" call _f; // 249
"\TZK_Patch4_4_0_6\s\UI\RepairRearmVehicle.sqs" call _f; // 250
"\TZK_Patch4_4_0_6\s\UI\pUpdateGrpOrders.sqf" call _f; // 251
"\TZK_Patch4_4_0_6\s\UI\pAbUpdateTypeImage.sqf" call _f; // 252
"\TZK_Patch4_4_0_6\s\UI\pAbUpdateFactoryImage.sqf" call _f; // 253
"\TZK_Patch4_4_0_6\s\UI\pAbUpdateCombobox.sqf" call _f; // 254
"\TZK_Patch4_4_0_6\s\UI\AutoBuy_UpdateFactories.sqf" call _f; // 255
"\TZK_Patch4_4_0_6\s\UI\BuildMenu2.sqs" call _f; // 256
"\TZK_Patch4_4_0_6\s\UI\BuyUnits.sqs" call _f; // 257
"\TZK_Patch4_4_0_6\s\UI\BU_CmdRule.sqf" call _f; // 258
"\TZK_Patch4_4_0_6\s\UI\BU_CmdRule2.sqf" call _f; // 259
"\TZK_Patch4_4_0_6\s\UI\BU_GetQueueLen.sqf" call _f; // 260
"\TZK_Patch4_4_0_6\s\UI\BuyUnits_Factory.sqf" call _f; // 261
"\TZK_Patch4_4_0_6\s\UI\BuyUnits_OptionalEquipmentCost.sqf" call _f; // 262
"\TZK_Patch4_4_0_6\s\UI\BuyUnits_OptionalEquipmentList.sqf" call _f; // 263
"\TZK_Patch4_4_0_6\s\UI\BuyUnits_Queue.sqf" call _f; // 264
"\TZK_Patch4_4_0_6\s\UI\BuyUnitsAvailFactories.sqf" call _f; // 265
"\TZK_Patch4_4_0_6\s\UI\ConcurrentRts.sqs" call _f; // 266
"\TZK_Patch4_4_0_6\s\UI\CustomInitAttribute.sqs" call _f; // 267
"\TZK_Patch4_4_0_6\s\UI\Leaderboard.sqs" call _f; // 268
"\TZK_Patch4_4_0_6\s\UI\Options.sqs" call _f; // 269
"\TZK_Patch4_4_0_6\s\UI\Options_Update.sqf" call _f; // 270
"\TZK_Patch4_4_0_6\s\UI\OrderBoard.sqs" call _f; // 271
"\TZK_Scripts_4_0_4\Player\Dialog\BoardVehicle_list.sqf" call _f; // 272
"\TZK_Patch4_4_0_6\s\UI\SpecCam.sqs" call _f; // 273
"274" call _f; // 274
"275" call _f; // 275
"276" call _f; // 276
"277" call _f; // 277
"278" call _f; // 278
"279" call _f; // 279

"\TZK_Patch4_4_0_6\s\Player\EquipPlayerRespawn.sqs" call _f; // 280
"\TZK_Patch4_4_0_6\s\Player\EquipCalcCost.sqf" call _f; // 281
"\TZK_Patch4_4_0_6\s\Player\EquipRecordPurchase.sqf" call _f; // 282
"\TZK_Patch4_4_0_6\s\Player\EquipRecordRespawn.sqf" call _f; // 283
"\TZK_Patch4_4_0_6\s\Player\EquipRespawnAmmo.sqf" call _f; // 284
"\TZK_Patch4_4_0_6\s\Player\EquipRespawnWeapon.sqf" call _f; // 285
"\TZK_Patch4_4_0_6\s\Player\EquipUpdateImage.sqf" call _f; // 286
"287" call _f; // 287
"288" call _f; // 288
"289" call _f; // 289

"\TZK_Patch4_4_0_6\s\Action\HealRepair.sqs" call _f; // 290
"\TZK_Patch4_4_0_6\s\Action\Rearm.sqs" call _f; // 291
"\TZK_Patch4_4_0_6\s\Common\InitAmmocrate.sqs" call _f; // 292

"\TZK_Patch4_4_0_6\s\Player\Effect\LimitWeaponRangePlayer.sqs" call _f; // 293
"\TZK_Patch4_4_0_6\s\Player\Loop\Weather.sqs" call _f; // 294

"\TZK_Patch4_4_0_6\s\Server\AI\CheckSupport.sqs" call _f; // 295
"\TZK_Patch4_4_0_6\s\Server\AICO\MainLoop.sqs" call _f; // 296
"\TZK_Patch4_4_0_6\s\Server\AICO\CheckPlayerIncome.sqs" call _f; // 297
"\TZK_Patch4_4_0_6\s\Server\AI\LeaderLoop.sqs" call _f; // 298
"\TZK_Patch4_4_0_6\s\Server\AI\UnitStart.sqs" call _f; // 299
"\TZK_Patch4_4_0_6\s\Server\AI\LeaderStart.sqs" call _f; // 300
"\TZK_Patch4_4_0_6\s\Server\AI\PlaceSup.sqs" call _f; // 301
"\TZK_Patch4_4_0_6\s\Server\AI\RallyPoint.sqs" call _f; // 302
"\TZK_Patch4_4_0_6\s\Server\AI\CheckBoard.sqs" call _f; // 303

"\TZK_Patch4_4_0_6\s\Server\AI\CheckDisableMines.sqs" call _f; // 304
"\TZK_Patch4_4_0_6\s\Server\AI\AutoBuyExec.sqf" call _f; // 305
"\TZK_Patch4_4_0_6\s\Server\AI\GetAbType.sqf" call _f; // 306

"\TZK_Patch4_4_0_6\s\Server\Loop\Income.sqf" call _f; // 307
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroupRes1.sqs" call _f; // 308

"\TZK_Scripts_4_0_4\Common\AddUnit.sqs" call _f; // 309
"Init\pplCmdUnit.sqs" call _f; // 310
"\TZK_Patch4_4_0_6\s\Init\svrStartVehs.sqs" call _f; // 311

"\TZK_Scripts_4_0_4\Server\CheckWinDestruction.sqs" call _f; // 312
"\TZK_Patch4_4_0_6\s\Server\CheckSupportVehicle.sqs" call _f; // 313
"\TZK_Patch4_4_0_6\s\Server\CheckWinSurrender.sqf" call _f; // 314
"\TZK_Patch4_4_0_6\s\Server\Loop\Weather.sqs" call _f; // 315

"\TZK_Patch4_4_0_6\s\Init\pplMarkerEagerCreate.sqs" call _f; // 316
"\TZK_Patch4_4_0_6\s\Init\PplMarkerLazyDeclare.sqs" call _f; // 317
"\TZK_Patch4_4_0_6\s\Init\PplMarkerLazyInit.sqs" call _f; // 318
"\TZK_Patch4_4_0_6\s\Marker\struct.sqf" call _f; // 319
"\TZK_Patch4_4_0_6\s\Radio\001_RtsMapMode.sqf" call _f; // 320

"\TZK_Patch4_4_0_6\s\Radio\fArtMagPage1.sqf" call _f; // 321
"\TZK_Patch4_4_0_6\s\Radio\fArtMagSlow.sqf" call _f; // 322
"\TZK_Patch4_4_0_6\s\Radio\fArtMLRSPage2.sqf" call _f; // 323
"\TZK_Patch4_4_0_6\s\Radio\fArtHowitzerPage2.sqf" call _f; // 324
"\TZK_Patch4_4_0_6\s\Radio\page_art_next.sqf" call _f; // 325
"\TZK_Patch4_4_0_6\s\Radio\fArtRadioStatement.sqf" call _f; // 326
"327" call _f; // 327
"328" call _f; // 328
"329" call _f; // 329

"\TZK_Patch4_4_0_6\s\Radio\update_veh_ship.sqs" call _f; // 330
"\TZK_Patch4_4_0_6\s\Radio\update_veh_gunship.sqs" call _f; // 331
"\TZK_Patch4_4_0_6\s\Radio\update_veh_plane.sqs" call _f; // 332
"\TZK_Patch4_4_0_6\s\Radio\update_veh_supLand.sqs" call _f; // 333
"\TZK_Patch4_4_0_6\s\Radio\update_veh_transpLand.sqs" call _f; // 334
"\TZK_Patch4_4_0_6\s\Radio\update_struct_common.sqf" call _f; // 335
"Player\Radio\update_veh_onfoot.sqs" call _f; // 336
"\TZK_Patch4_4_0_6\s\Radio\update_veh_mineCar.sqs" call _f; // 337
"\TZK_Patch4_4_0_6\s\Radio\update_veh_customCar.sqs" call _f; // 338
"\TZK_Patch4_4_0_6\s\Radio\update_veh_customShip.sqs" call _f; // 339
"\TZK_Patch4_4_0_6\s\Radio\update_veh_transpAir.sqs" call _f; // 340
"\TZK_Patch4_4_0_6\s\Radio\update_veh_spec.sqf" call _f; // 341

"\TZK_Patch4_4_0_6\s\Radio\list_inf_rearmNVG.sqf" call _f; // 342
"\TZK_Patch4_4_0_6\s\Radio\list_inf_rearmAA.sqf" call _f; // 343
"\TZK_Patch4_4_0_6\s\Radio\list_inf_rearmAT.sqf" call _f; // 344
"\TZK_Patch4_4_0_6\s\Radio\list_inf_rearmRPG.sqf" call _f; // 345

"\TZK_Patch4_4_0_6\s\Common\InitSpawnPlaneGeneral.sqs" call _f; // 346
"\TZK_Patch4_4_0_6\s\Common\InitSpawnPlaneCwv.sqs" call _f; // 347
"\TZK_Scripts_4_0_4\Common\InitSpawnPlaneRes.sqs" call _f; // 348

"\TZK_Patch4_4_0_6\s\InfoCli\tgHibernate.sqs" call _f; // 349
"\TZK_Patch4_4_0_6\s\InfoCli\tgLoss.sqs" call _f; // 350
"\TZK_Patch4_4_0_6\s\InfoCli\tgSpawn.sqs" call _f; // 351

"352" call _f; // 352
"353" call _f; // 353
"354" call _f; // 354
"355" call _f; // 355
"356" call _f; // 356
"357" call _f; // 357
"358" call _f; // 358
"359" call _f; // 359

"Rts\Util\CalcCentral.sqf" call _f; // 360
"Rts\Ui\AreaDraw.sqf" call _f; // 361
"Rts\Ui\Selection.sqf" call _f; // 362
"Rts\Ui\SetRtsMouse.sqs" call _f; // 363
"Rts\Ui\ResetGuideLines.sqf" call _f; // 364
"Rts\Ui\SetGuideLines.sqf" call _f; // 365
"Rts\Ui\MapCtrl.sqf" call _f; // 366
"Rts\Ui\AreaSetDir.sqf" call _f; // 367
"Rts\Ui\RemoveDeadSelectedUnit.sqf" call _f; // 368
"Rts\Ui\HandleDialogAzimut.sqf" call _f; // 369
"Rts\Ui\CurSelUnitStack.sqf" call _f; // 370
"Rts\Ui\CurSelUnitArray.sqf" call _f; // 371
"372" call _f; // 372
"Rts\Build\fCanBuildObstruct.sqf" call _f; // 373
"Rts\Build\procObstruct.sqs" call _f; // 374
"Rts\Build\fDeployObstruct.sqf" call _f; // 375
"Rts\Build\procAreaRoof.sqs" call _f; // 376
"Rts\Build\fDeployAreaRoof.sqf" call _f; // 377
"Rts\Build\fCanWallMhq.sqf" call _f; // 378
"Rts\Build\sDeployBaseMg.sqs" call _f; // 379
"Rts\Build\fDeployBaseMg.sqf" call _f; // 380
"Rts\Build\sWallMhq.sqs" call _f; // 381
"Rts\Build\sBaGuaZhen.sqs" call _f; // 382
"Rts\Build\hBaGuaZhen.sqs" call _f; // 383
"Rts\Build\hDeployBaseMg.sqf" call _f; // 384
"Rts\Build\hWallMhq.sqs" call _f; // 385
"Rts\Util\DestPos.sqf" call _f; // 386
"Rts\AI\EnterOrder.sqf" call _f; // 387
"Rts\AI\SetStatus.sqf" call _f; // 388
"389" call _f; // 389
"Rts\AI\ClearStatus.sqf" call _f; // 390
"391" call _f; // 391
"392" call _f; // 392
"393" call _f; // 393
"394" call _f; // 394
"395" call _f; // 395
"396" call _f; // 396
"397" call _f; // 397
"398" call _f; // 398
"399" call _f; // 399

"Rts\Marker\unitFlash.sqf" call _f; // 400

// script count check. Check index with last literal value
if (_i != 400 + 1) then {
	player globalChat "Script count mismatch!";
};

// free extra memory
TzkScripts resize _i;