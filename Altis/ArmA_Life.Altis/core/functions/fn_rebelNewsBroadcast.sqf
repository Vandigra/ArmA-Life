#include "..\..\script_macros.hpp"
/*
 File: fn_rebelNewsBroadcast.sqf
 Author: blackfisch
 Description:
 Let's Check if he is a good or a bad boy
*/

private["_npc","_broadcastHeader","_broadcastMessage","_curWep","_rebCooldown","_pistol","_smg","_luck","_val"];
_npc = cursorObject;	//the NPC itself, passed by Script
_broadcastHeader = ctrlText (CONTROL(100100,100101));
_broadcastMessage = ctrlText (CONTROL(100100,100102));
_curWep = currentWeapon player; //checks the weapon of the player
_rebCooldown = (60 * LIFE_SETTINGS(getNumber,"reb_news_broadcast_cooldown")); //cooldown, read from Mission Config

if (!alive player) exitWith {}; //C'mon... You're f*cking dead, mate

if (vehicle player != player) exitWith {hint "Komm erstmal aus deiner Karre raus, du Wicht..."}; //Dafuq?! Get out of that vehicle...

if (_curWep in ["","Weapon_hgun_Pistol_Signal_F"]) exitWith {hint "Denkst du ernsthaft, du kannst mich bedrohen?"}; //No weapon or Starter Pistol - no broadcast!
_pistol = ["hgun_ACPC2_F","hgun_P07_F","hgun_P07_snds_F","hgun_P07_khk_F","hgun_Pistol_heavy_01_F","hgun_Pistol_heavy_02_F","hgun_Rook40_F"]; //Array of pistols
_smg = ["hgun_PDW2000_F","SMG_01_F","SMG_02_F","SMG_05_F"]; //Array of SMGs

if (LIFE_SETTINGS(getNumber,"reb_news_enablePercentage") isEqualTo 1) then {
    if (_curWep in _pistol) then { //is it a pistol?
        _luck = 0.5; //so it is a pistol - chance 50%
    } else { //it's no pistol, so what is it?
        if (_curWep in _smg) then { //is it a smg?
            _luck = 0.7; //it'an smg - chance 70%
        } else { //no smg? so another kind of rifle
            _luck = 0.95; //it's a rifle - chance 95%
        };
    };
    _val = round(random 100) / 100; //create a random number from 0-1 (for the percentages)

    if (_val > _luck) exitWith { //Someone isn't really lucky there...
        hint "Glaubst du ernsthaft ich lasse mich von dir einschüchtern? Ich rufe die Cops!";
        [[0,1,2],"STR_News_Forced"] remoteExecCall ["life_fnc_broadcast",west]; //Notify the cops
    };

    if (_npc isKindOf "Man") then { //Just debug...
        _npc switchMove "AmovPercMstpSsurWnonDnon"; //let the NPC surrender
    };
    closeDialog 0;
    [ctrlText 100101,ctrlText 100102,profilename,"reb"] call life_fnc_postNewsBroadcast; //send the message
    waitUntil {(time - life_rebBroadcastTimer) > _rebCooldown};
    _npc switchMove "";
} else {
    closeDialog 0;
    [ctrlText 100101,ctrlText 100102,profilename,"reb"] call life_fnc_postNewsBroadcast; //send the message
};
