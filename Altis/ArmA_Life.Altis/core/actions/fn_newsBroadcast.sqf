#include "..\..\script_macros.hpp"
/*
 File: fn_newsBroadcast.sqf
 Author: Jesse "tkcjesse" Schultz
 Description:
 Creates the dialog and handles the data in the Channel 7 News Dialog.
*/
#define Confirm 100104
#define ConfirmReb 100105

private ["_npc","_msgCost","_msgRank","_rank","_display","_confirmBtn","_confirmBtnReb","_msgCooldown","_broadcastDelay"];
_npc = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

createDialog "life_news_broadcast";

disableSerialization;
_display = findDisplay 100100;
_confirmBtn = _display displayCtrl Confirm;
_confirmBtn ctrlEnable false;
_confirmBtnReb = _display displayCtrl ConfirmReb;
_confirmBtnReb ctrlEnable false;
_msgCooldown = (60 * LIFE_SETTINGS(getNumber,"news_broadcast_cooldown"));
_msgCost = LIFE_SETTINGS(getNumber,"news_broadcast_cost");
_copCooldown = (60 * LIFE_SETTINGS(getNumber,"cop_news_broadcast_cooldown"));
_msgRank = LIFE_SETTINGS(getNumber,"cop_news_broadcast_minimum_Rank");
_rank = FETCH_CONST(life_coplevel);
_rebCooldown = (60 * LIFE_SETTINGS(getNumber,"reb_news_broadcast_cooldown"));

switch (playerside) do {
    case west: {
        ConfirmBtnReb ctrlShow false;
        if (_rank < _msgRank) then {
            hint format["Du besitzt nicht den benötigten Rang! (benötigter Rang: %1)", _msgRank];
            closeDialog 0;
        } else {
            _confirmBtn ctrlEnable true;
            _confirmBtn buttonSetAction "[ctrlText 100101,ctrlText 100102,profilename,""cop""] call life_fnc_postNewsBroadcast; closeDialog 0;";
        };

        if (isNil "life_copBroadcastTimer" || {(time - life_copBroadcastTimer) > _copCooldown}) then {
            _broadcastDelay = localize "STR_News_Now";
        } else {
            _broadcastDelay = [(_copCooldown - (time - life_copBroadcastTimer))] call BIS_fnc_secondsToString;
            _confirmBtn ctrlEnable false;
        };
        CONTROL(100100,100103) ctrlSetStructuredText parseText format["Benötigter Rang: %1<br/>Nächste Übertragung verfügbar: %2",[_msgRank] call life_fnc_numberText,_broadcastDelay];
    };

    case civilian: {
        if (CASH < _msgCost) then {
            hint format[localize "STR_News_NotEnough",[_msgCost] call life_fnc_numberText];
        } else {
            _confirmBtn ctrlEnable true;
            _confirmBtn buttonSetAction "[ctrlText 100101,ctrlText 100102,profilename,""civ""] call life_fnc_postNewsBroadcast; closeDialog 0;";
        };

        if (isNil "life_broadcastTimer" || {(time - life_broadcastTimer) > _msgCooldown}) then {
            _broadcastDelay = localize "STR_News_Now";
        } else {
            _broadcastDelay = [(_msgCooldown - (time - life_broadcastTimer))] call BIS_fnc_secondsToString;
            _confirmBtn ctrlEnable false;
        };
        _confirmBtnReb buttonSetAction "[ctrlText 100101,ctrlText 100102] spawn life_fnc_rebelNewsBroadcast; closeDialog 0;";

        if (isNil "life_rebBroadcastTimer" || {(time - life_rebBroadcastTimer) > _rebCooldown}) then {
            _confirmBtnReb ctrlEnable true;
            _npc switchMove "";
        } else {
            _confirmBtnReb ctrlEnable false;
        };
        CONTROL(100100,100103) ctrlSetStructuredText parseText format[ localize "STR_News_StructuredText",[_msgCost] call life_fnc_numberText,_broadcastDelay];
    };
    default {};
};
