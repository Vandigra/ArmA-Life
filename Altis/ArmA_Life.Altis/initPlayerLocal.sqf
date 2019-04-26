#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

[] spawn
{
    if ((playerSide == west) or (playerSide == independent)) then
    {
        while{true}do
        {
            waitUntil {backpack player != ""};
            _bp = backpack player;
            if(playerSide == west) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
            if(playerside == independent) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
            waitUntil {backpack player != _bp};
        };
    ;}
};

[] execVM "core\init.sqf";
[] execVM "briefing.sqf";
