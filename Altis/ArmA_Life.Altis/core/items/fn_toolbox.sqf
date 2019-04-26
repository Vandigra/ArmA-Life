#include "..\..\script_macros.hpp"

/*
 Author: Jonas, xjoniassx @ MineFactory.eu (2017)
 info@minefacotry.eu xjoniassx@gmail.com
if (life_action_inUse) exitWith {[ "Keine zweite Aktion möglich"] spawn life_fnc_nachricht;};
if((vehicle player) != player) exitWith {};
if((player GVAR "restrained")) exitWith {[ "Wie willst du mit gefesselten Händen sammeln?"] spawn life_fnc_nachricht;};
if((player GVAR "playerSurrender")) exitWith {[ "Mit gehobenen Händen kannst du nichts sammeln!."] spawn life_fnc_nachricht;};
life_fnc_nachricht IST DAS DE100 NACHRICHTEN SYSTEM!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
Unten durch normalen hint ersetzt
*/

if (life_action_inUse) exitWith {hint "Keine zweite Aktion möglich";};
if((vehicle player) != player) exitWith {};
if(player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if(player  getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_markerPos = markerPos "autoteile";
_meters = _markerPos distance player;
if(_meters > 40) exitWith {hint "Keine Schrotteile in der nähe!"; life_action_inUse = false;};
closeDialog 0;
GELAUFEN = 0;
SAMMELN = true;
AbbruchWdrop = false;
//["Gehe über die Schrottteile um welche zu finden. (Nicht rennen!)",true,"fast"] call life_fnc_NachrichtSys;
hint "Gehe über die Schrottteile um welche zu finden. (Nicht rennen!)";
_upp = "Suche Teile...";
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_success=false;
while{true} do
{
 sleep 1;
 _cP = _cP + 0.01;
 _progress progressSetPosition _cP;
 _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
 if(_cP >= 1) exitWith {SAMMELN = false;};
 if(!alive player) exitWith {};
 if(speed player > 16) exitWith {SAMMELN = false; Hint"Du bist gerannt und hast deine Toolbox fallen gelassen"; [false,"toolbox",1] call life_fnc_handleInv; AbbruchWdrop = true;};

 _markerPos = getPos player;
 sleep 1;
 _meters= _markerPos distance player;
 GELAUFEN = _meters + GELAUFEN;


 _markerPos = markerPos "autoteile";
 _entfernt = _markerPos distance player;
 if(_entfernt > 40) exitWith {SAMMELN = false; Hint"Du hast deine Toolbox fallen gelassen da keine Teile in der nähe sind"; [false,"toolbox",1] call life_fnc_handleInv; AbbruchWdrop = true;};
};
5 cutText ["","PLAIN"];
sleep 1;
life_action_inUse = false;
if(AbbruchWdrop) exitWith {systemChat "Keine Items für dich!";};
if(GELAUFEN > 76) then {[] spawn life_fnc_loot;};
sleep 0.2;
if(GELAUFEN > 152) then {[] spawn life_fnc_loot;};
sleep 0.2;
if(GELAUFEN > 228) then {[] spawn life_fnc_loot;};
sleep 0.2;
if(GELAUFEN > 304) then {[] spawn life_fnc_loot;};
sleep 0.2;
if(GELAUFEN > 380) then {[] spawn life_fnc_loot;};
