#include "..\..\script_macros.hpp"
/*
    File: fn_onPlayerRespawn.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Does something but I won't know till I write it...
*/
private ["_unit","_corpse","_containers"];
_unit = _this select 0;
_corpse = _this select 1;
life_corpse = _corpse;

/* Gang Tag System */
// realname Setter
_realName = switch (true) do
{
    case (isNil (group player getVariable "gang_name")): {format ["[%1] %2", group player getVariable "gang_name", profileName]};
    case (playerSide isEqualTo west): {format ["[Polizei] %1", profileName];};
    case (playerSide isEqualTo independent): {format ["[Rettungsdienst] %1", profileName];};
    default {profileName};
};

//Set some vars on our new body.
_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["steam64id",getPlayerUID player,true]; //Reset the UID.
//_unit setVariable ["realname",profileName,true]; //Reset the players name.
_unit setVariable ["realname", _realName, true]; // Gang Tag System

player playMoveNow "AmovPpneMstpSrasWrflDnon";

[] call life_fnc_setupActions;
[_unit,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};
