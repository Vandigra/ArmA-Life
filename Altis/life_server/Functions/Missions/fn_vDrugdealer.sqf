#include "\life_server\script_macros.hpp"
/*
    File Name: fn_initDrugD.sqf
	Author: Drunken Cheetah aka Pril
	Desc: Dynamic drug dealer, moves position every X minutes.
	Version: 2.1
*/
private ["_drug1","_positions","_drugdealer","_spawnPos"];
_drugdealer = "C_Man_casual_1_F";

//The positions below are random locations on Altis.
private _positions = [[11729.6,18285.8,0],[8087.36,14434.5,0],[20644.8,5913.31,-7.62939e-006],[27034.4,23007.9,0.391939]];
private _spawnPos = _positions select floor random count _positions;


diag_log "..:: DRUNKEN CHEETAHS DRUG DEALER SCRIPT - STARTING ::..";
[3, "<t size='1.2'><t color='#FF0000'>Drug Dealer</t></t><br/><br/>The drug dealer has found a new place to deal from!"] remoteExec ["life_fnc_broadcast",civilian];
[3, "<t size='1.2'><t color='#000000'>Drug Dealer</t></t><br/><br/>Attention Officers. <br/> We have received a tip from a local resident regarding a class A drug dealer. <br/><br/> His last known location has been marked on your map."] remoteExec ["life_fnc_broadcast",west];

sleep 0.3;

_drug1 = createMarker ["drug_dealer",_spawnPos];
"drug_dealer" setMarkerColor "ColorEAST";
"drug_dealer" setMarkerType "mil_dot";
"drug_dealer" setMarkerText "Drug Dealer";


dd = createVehicle ["C_Man_casual_1_F",_spawnPos, [], 0, "CAN_COLLIDE"];
[dd,[localize "STR_MAR_Question_Dealer",life_fnc_questionDealer,"",0,false,false,"",'isNull objectParent player && player distance _target < 5 && playerSide isEqualTo west && !life_action_inUse']] remoteExec ["addAction",0,dd];
[dd,["Drug Dealer",life_fnc_virt_menu,"drugdealer",0,false,false,"",'playerSide isEqualTo civilian']] remoteExec ["addAction",0,dd];
dd allowDamage false;


/*
Stay in 1 place for 45 minutes, then move spots again
		Change the number below for how long the drug dealer will stay in 1 place for, before moving again.
		Its preferred to leave the *60 there as that represents minutes.
		E.g: 45*60 is 45 minutes.
*/
sleep (45*60);
[3, "<t size='1.2'><t color='#FF0000'>Drug Dealer</t></t><br/><br/>The drug dealer is packing up and moving to a new location. When he arrives, his new location will be marked on map!"] remoteExec ["life_fnc_broadcast",civilian];
deleteMarker "drug_dealer";
deleteVehicle dd;

//You don't really need to have this, it was more for testing. Same as above
diag_log "..:: DRUNKEN CHEETAHS DRUG DEALER SCRIPT - FINISHED, WAITING... ::..";

sleep 2;
[]spawn TON_fnc_initdd;
