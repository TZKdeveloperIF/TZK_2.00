comment "Make objects build-able. Adjust their udFactoryType to legal value.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stBarracks]" forEach [_javW, _javE];
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight]" forEach [_jeepMGW, _uazMGE,  _hummerWG, _hummerWAA, _brdmEAT, _brdmEAA];

"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight + 2^stHeavy]" forEach [_AMX10W];
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stShip]" forEach [_zodiacHW, _patrolboatW, _patrolshipW,  _zodiacHE, _patrolboatE, _patrolshipE];


comment "Allow Light Factory Build Transport Helicopter. Try new accuracy side trick helicopters here.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight + 2^stAir]" forEach [_irNO_uh60, _irNO_mi17];
"_entry = unitDefs select _x; _entry set [udFactoryType, -1]" forEach [_irNO_mh6, _irNO_mi2];
_entry = unitDefs select _irNO_uh60; _entry set [udName, "UH60 (Tug)"]; _entry set [udCost, [3000, 6000] select PricingMode]; _entry set [udModel, "UH60_irNo_CSLA_xj400"];
_entry = unitDefs select _irNO_mi17; _entry set [udName, "Mi17 (Tug)"]; _entry set [udCost, [3000, 6000] select PricingMode]; _entry set [udModel, "Mi17_irNo_owp_TZK_xj400"];

comment "Adjust TD (and Art TD) udModel here.";
_entry = unitDefs select _m109artW; _entry set [udModel, "M109_CoC_Art_xj400"]; _entry set [udImage, "\TZK_Objects\Texture\Paladin.paa"];
comment "    _entry = unitDefs select _tdW    ";
comment "    _entry = unitDefs select _tdE    ";
comment "    _entry = unitDefs select _plz05artE    ";
types_SE_td = [_tdW, _tdE, _m109artW, _plz05artE];

comment "Adjust the build-able vehicles.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stHeavy]" forEach [_tankHyperW01, _tankHyperE01, _m109artW, _plz05artE, _warrior80W, _bmp3, _tdW, _tdE];
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stAir]" forEach [_Mi24E3, _mi26E, _ch47W];
"_entry = unitDefs select _x; _entry set [udFactoryType, -1]" forEach [_tankHeavyW02, _m2a2d, _tankLightW02, _bmp2d, _tankLightE02, _tankHeavyE03, _uh60W, _mi17E, _m109W, _plz05E, _brdmE3];

comment "Add the Action EntrenchTank to all units built from Heavy Factory.";
{;
	_entry = _x; _factoryType = _entry select udFactoryType;
	_factoryType = _factoryType % (2*2^stHeavy);
	if (_factoryType >= 2^stHeavy) then {;
		_crews = _entry select udCrew; _scripts = _entry select udScripts;
		if (count _crews > 0 && !("Extra\ppl\Action EntrenchTank.sqs" in _scripts)) then {_scripts set [count _scripts, "Extra\ppl\Action EntrenchTank.sqs"]};
	};
} forEach unitDefs;
comment "Add the Action EntrenchTank to some units assigned in SE.";
{ _scripts = unitDefs select _x select udScripts; if !("Extra\ppl\Action EntrenchTank.sqs" in _scripts) then {_scripts set [count _scripts, "Extra\ppl\Action EntrenchTank.sqs"]} } forEach [jeepaW, _hummerWG, _hummerWAT, _hummerWAA, uazaE, _brdmEG, _brdmEAT, _brdmEAA, utMCVW, utMHQ0, utMCVE, utMHQ1];
comment "Adjust the udName, udModel and udImage of planes.";
{;
	_entry = unitDefs select _x;
	_name = _entry select udName; _name = "F15" + substr [_name, sizeofstr "A10", sizeofstr _name]; _entry set [udName, _name];
	_entry set [udModel, "RKTF15C_Grey"];
	_entry set [udImage, "\rktf15c\modpic.paa"];
} forEach [_a10LGB4, _a10bombs, _a10];
{;
	_entry = unitDefs select _x;
	_name = _entry select udName; _name = "F22" + substr [_name, sizeofstr "A10", sizeofstr _name]; _entry set [udName, _name];
	_entry set [udModel, "F22"];
	_entry set [udImage, "\rktf15c\modpic.paa"];
} forEach [_a10LGB8, _a10AA, _a10FFAR];
_entry = unitDefs select _B2; _entry set [udFactoryType, 2^stAir];
_entry = unitDefs select _a10BB; _entry set [udName, "F35 Base Buster"]; _entry set [udModel, "rkt_F35JSF"]; _entry set [udImage, "\rkt_f35\f35_pic.paa"]; _entry select udScripts set [count (_entry select udScripts), "\TZK_Scripts_4_0_6\Common\Equip\LGB8.sqs"];
_entry = unitDefs select _a10Tomahawk; _entry set [udName, "F35 Stealth Nuke"]; _entry set [udModel, "rkt_F35JSF_Stealth"]; _entry set [udImage, "\rkt_f35\f35_pic.paa"];
{;
	_entry = unitDefs select _x;
	_name = _entry select udName; _name = "Su30" + substr [_name, sizeofstr "Su25", sizeofstr _name]; _entry set [udName, _name];
	_entry set [udModel, "su30mki_p1"]; if (_x == _su25LGB8) then {_entry set [udModel, "su30mki_p1"]}; _entry set [udImage, "\acwc_su30mk\n\su30_pic1.paa"];
} forEach [_su25LGB8, _su25AA, _su25Rocket];
_entry = unitDefs select _su39; _entry set [udFactoryType, 2^stAir];
_entry = unitDefs select _su25BB; _entry set [udName, "Su57 Base Buster"]; _entry set [udModel, "PAK_FA"]; _entry select udScripts set [count (_entry select udScripts), "\TZK_Scripts_4_0_6\Common\Equip\LGB8.sqs"]; _entry set [udImage, "\acwc_su30mk\n\su30_pic1.paa"];
_entry = unitDefs select _su25Raduga; _entry set [udName, "Su57 Raduga"]; _entry set [udModel, "PAK_FA_Nuke"]; _entry set [udImage, "\acwc_su30mk\n\su30_pic1.paa"];
_entry = unitDefs select _su25; _entry set [udName, "Su25 AT/30mm"];

comment "TZK use AAOnly A10/Su25 and allow LF build them. It's optional for SE to modify their udModel. Here, their udFactoryType are redefined.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stAir + 2^stLight]; _entry set [udCost, [8000, 16000] select PricingMode]" forEach [_a10gun, _su25gun];


comment "Redefine units.";
_entry = unitDefs select utWorkerW; _entry set [udModel, "DVDUS_SoldierWWorker"];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWB"]} forEach [_soldierW, _MortarW];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWHG"]} forEach [_soldierGLW, _MM1W];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWLMG"]} forEach [_soldierMGW, _soldierMGW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWsniperM24SD"]} forEach [_sniperW, _sniperW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWSMAW"]} forEach [_soldierLAWW, _soldierLAWW1, _soldierLAWW2];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWSMAW2"]} forEach [_soldierATW, _soldierATW1,_soldierATW2];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWAA"]} forEach [_soldierAAW, _soldierAAW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_BlackOpDemo1"]} forEach [_bomberW, _customW];
_entry = unitDefs select _minerW; _entry set [udModel, "DVDUS_SoldierWMiner"];
_entry = unitDefs select _medicW; _entry set [udModel, "DVDUS_SoldierWMedic"];
_entry = unitDefs select _crewW; _entry set [udModel, "DVDUS_SoldierWCrew"];
_entry = unitDefs select _TruckW; _entry set [udModel, "M925NATOOPEN"];
_entry = unitDefs select _supportTruckW; _entry set [udModel, "M925NATOREPAIR"];
_entry = unitDefs select _supportTruckW2; _entry set [udModel, "M925NATOREPAIR"];
_entry = unitDefs select _truckRefuelW; _entry set [udModel, "M925NATOFUEL"];
_entry = unitDefs select _hummerWAA; _entry set [udCost, [2000, 4000] select PricingMode];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_M113A3Amb"]} forEach [_supportAPCW, _supportAPCWminer];
_entry = unitDefs select _m113; _entry set [udModel, "DVDUS_M113A3"];
_entry = unitDefs select _tankLightW01; _entry set [udCost, [2500, 5000] select PricingMode]; _entry set [udModel, "SIG_M60A3"];
_entry = unitDefs select _tankHeavyW01; _entry set [udModel, "DVDUS_M1A1"];
_entry = unitDefs select _m1a1artW; _entry set [udModel, "DVDUS_M1A1"];
_entry = unitDefs select utMCV0; _entry set [udModel, "DVDUS_M113A3_MCVW"];
_entry = unitDefs select utMHQ0; _entry set [udModel, "DVDUS_M113A3_MHQW"];
_entry = unitDefs select _c130W; _entry set [udName, "C-160 Transall"]; _entry set [udModel, "IkaR_C160_Transall"];
_entry = unitDefs select _c130supportW; _entry set [udName, "C-160 Support"]; _entry set [udModel, "IkaR_C160_Transall"];
_entry = unitDefs select _ah64W; _entry set [udModel, "fz_ah64d"]; 
_entry = unitDefs select _tigerW; _entry set [udCost, [22000, 44000] select PricingMode]; _entry set [udName, "RAH66"]; _entry set [udModel, "DKMM_RAH66"]; _entry set [udScripts, ["\TZK_Scripts_4_0_6\Common\Equip\AH1.sqs"]]; _entry set [udImage, "\DKMM_RAH66\rah-66.paa"];
_entry = unitDefs select _ah1W2;  _entry set [udName, "AH64 AT"];_entry set [udModel, "fz_ah64d_AT"]; _entry select udScripts set [0, "\TZK_Scripts_4_0_6\Common\Equip\AH64.sqs"]; _entry set [udImage, "\APAC\iah64"]; 
_entry = unitDefs select _ah64W2; _entry set [udName, "RAH66 AT"]; _entry set [udModel, "DKMM_RAH66_AT"]; _entry select udScripts set [0, "\TZK_Scripts_4_0_6\Common\Equip\AH1.sqs"]; _entry set [udImage, "\DKMM_RAH66\rah-66.paa"]; 
_entry = unitDefs select _uh60W; _entry set [udCost, [3000, 6000] select PricingMode]; 

_entry = unitDefs select utWorkerE; _entry set [udModel, "icp_infdriver1"];
_entry = unitDefs select _soldierE; _entry set [udModel, "icp_infakm"];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infak74gren_v"]} forEach [_soldierGLE, _6G30E];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infmgun"]} forEach [_soldierMGE, _soldierMGE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infsvd"]} forEach [_sniperE, _KSVKE, _sniperE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infRPG18"]} forEach [_soldierLAWE, _soldierLAWE1, _soldierLAWE2];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infAT2"]} forEach [_soldierATE, _soldierATE1, _soldierATE2];
_entry = unitDefs select _javE; _entry set [udModel, "icp_infATH"];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infAA"]} forEach [_soldierAAE, _soldierAAE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infreconVSK"]} forEach [_bomberE, _customE];
_entry = unitDefs select _minerE; _entry set [udModel, "icp_infminer"];
_entry = unitDefs select _medicE; _entry set [udModel, "icp_infmedic"];
_entry = unitDefs select _crewE; _entry set [udModel, "icp_cr1"];
_entry = unitDefs select _TruckE; _entry set [udModel, "dlem_ural4320_open"];
_entry = unitDefs select _supportTruckE; _entry set [udModel, "dlem_ural4320_repair"];
_entry = unitDefs select _supportTruckE2; _entry set [udModel, "dlem_ural4320_repair"];
_entry = unitDefs select _truckRefuelE; _entry set [udModel, "dlem_ural4320_GAS"];
_entry = unitDefs select _brdmE; _entry set [udModel, "MNF_BRDM2U"]; _entry set [udImage, "\BRMD\ibrmd"];
_entry = unitDefs select _brdmE3; _entry set [udCost, [1100, 2200] select PricingMode]; _entry set [udName, "BRDM2 Rockets"]; _entry set [udModel, "MNF_BRDM2_AT3"]; _entry set [udImage, "\BRMD\ibrmd"];
_entry = unitDefs select _brdmEAT; _entry set [udCost, [1500, 3000] select PricingMode]; _entry set [udName, "BMD3"]; _entry set [udModel, "DVD_BMD3"]; _entry set [udImage, "\dvd_config\Pics\BMD3.paa"];
_entry = unitDefs select _brdmEAA; _entry set [udCost, [2000, 4000] select PricingMode];
_entry = unitDefs select _bmpE; _entry set [udModel, "WW3_BMP1"];
_entry = unitDefs select _bmp2E; _entry set [udModel, "WW3_BMP2"];
_entry = unitDefs select _bmp2at; _entry set [udModel, "WW3_BMP2"];
_entry = unitDefs select _shilkaE; _entry set [udModel, "RUS_ZSU"];
_entry = unitDefs select _tunguskaE;  _entry set [udName, "4xAA"]; _entry set [udModel, "RUS_ZSU"]; _entry select udScripts set [0, "\TZK_Scripts_4_0_5\Common\Equip\DefAA.sqs"]; _entry set [udImage, "izsu"];
_entry = unitDefs select _bmp2cannon; _entry set [udModel, "WW3_BMP2"];
_entry = unitDefs select _bmp2aa; _entry set [udModel, "WW3_BMP2"];
_entry = unitDefs select _tankLightE01; _entry set [udName, "T72"]; _entry set [udCost, [2500, 5000] select PricingMode]; _entry set [udModel, "ICP_T72B"]; _entry set [udImage, "it72"];
_entry = unitDefs select _tankHeavyE01; _entry set [udName, "T80UM"];_entry set [udModel, "ICP_T80UM"];
_entry = unitDefs select _tankHeavyE02; _entry set [udName, "T90"];_entry set [udModel, "T90"]; _entry set [udImage, "it80"]; 
_entry = unitDefs select _T80artE; _entry set [udName, "T90 Art"];_entry set [udModel, "T90"];
_entry = unitDefs select _v80E; _entry set [udName, "Ka52"]; _entry set [udCost, [22000, 50000] select PricingMode]; _entry set [udModel, "ka52"];
_entry = unitDefs select _Mi24E; _entry set [udName, "Mi28"]; _entry set [udCost, [22000, 50000] select PricingMode]; _entry set [udModel, "HWK_MI28"]; _entry set [udImage, "\HWK_MI28\mi28a.paa"]; 
_entry = unitDefs select _v80E2; _entry set [udName, "Ka52 AT"]; _entry set [udCost, [25000, 56000] select PricingMode]; _entry set [udModel, "ka52_AT"];
_entry = unitDefs select _Mi24E3; _entry set [udName, "Mi28 AT"]; _entry set [udCost, [25000, 56000] select PricingMode]; _entry set [udModel, "HWK_MI28_AT"]; _entry set [udImage, "\HWK_MI28\mi28a.paa"]; 
_entry = unitDefs select _mi17E; _entry set [udCost, [3000, 6000] select PricingMode];

comment "Redefine town group units.";
_entry = unitDefs select _soldierMGW1; _entry set [udModel, "DVDUS_SoldierWLMG"];
_entry = unitDefs select _sniperW1; _entry set [udModel, "DVDUS_SoldierWsniperM24SD"];
_entry = unitDefs select _soldierLAWW1; _entry set [udModel, "DVDUS_SoldierWSMAW"];
_entry = unitDefs select _soldierATW1; _entry set [udModel, "DVDUS_SoldierWSMAW2"];
_entry = unitDefs select _javW1; _entry set [udModel, "DVDUS_SoldierWJAV"];
_entry = unitDefs select _soldierAAW1; _entry set [udModel, "DVDUS_SoldierWAA"];
_entry = unitDefs select _m1a1townW; _entry set [udModel, "DVDUS_M1A1"];
_entry = unitDefs select _ah64W2town; _entry set [udModel, "fz_ah64d_AT"];

_entry = unitDefs select _soldierMGE1; _entry set [udModel, "icp_infmgun"];
_entry = unitDefs select _sniperE1; _entry set [udModel, "icp_infsvd"];
_entry = unitDefs select _soldierLAWE1; _entry set [udModel, "icp_infRPG18"];
_entry = unitDefs select _soldierATE1; _entry set [udModel, "icp_infAT2"];
_entry = unitDefs select _javE1; _entry set [udModel, "icp_infATH"];
_entry = unitDefs select _soldierAAE1; _entry set [udModel, "icp_infAA"];
_entry = unitDefs select _bmp2attown; _entry set [udModel, "WW3_BMP2"];
_entry = unitDefs select _bmp2aatown; _entry set [udModel, "WW3_BMP2"];
_entry = unitDefs select _t80townE; _entry set [udModel, "T90"];
