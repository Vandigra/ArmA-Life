/*
    File: fn_tempMapMarker.sqf
    Author: blackfisch for MountainValley RPG, licensed for Native-Network.net
    Terms of use:
    This script has been licensed for public use on Native-Network.net
    It is not allowed to remove or modify the header of this script in any way, it is allowed to add contributors to the header or change the description.
    The code itself may not be published in any other matter without permission of the author.
    Any inproper or not licensed use of this script is strictly prohibited and enforced by law.
    The author (blackfisch) may evoke the license of the script at any point of time, if the terms of use are violated or the author can name a reasoned explanation for it.
    The license can not be transferred to any other project for use.
    Description:
    Creates temporary map markers when sending a dispatch.
*/

params [
    ["_pos",[],[[]]],
    ["_type","",[""]],
    ["_sender","",[""]]
];

if (_pos isEqualTo [] || {_type isEqualTo ""} || {_sender isEqualTo ""}) exitWith {};

switch (_type) do {
    case "cop": { //Cop
        if !(playerSide isEqualTo west) exitWith {};
        private _txt = format [" Police Dispatch #%1, Absender: %2",bf_copDispatchCount,_sender];
        private _name = format ["copmarktemp%1",bf_copDispatchCount];
        private _marker = createMarkerLocal [_name,_pos];
        _marker setMarkerTextLocal _txt;
        _marker setMarkerPosLocal _pos;
        _marker setMarkerColorLocal "ColorWEST";
        _marker setMarkerTypeLocal "hd_dot"; //Markerform, siehe https://community.bistudio.com/wiki/cfgMarkers
        bf_localmarker pushBack [_name,time];
    };

    case "med": { //Medic
        if !(playerSide isEqualTo independent) exitwith {};
        private _txt = format [" EMS Dispatch #%1, Absender: %2",bf_medDispatchCount,_sender];
        private _name = format ["medmarktemp%1",bf_medDispatchCount];
        private _marker = createMarkerLocal [_name,_pos];
        _marker setMarkerTextLocal _txt;
        _marker setMarkerPosLocal _pos;
        _marker setMarkerTypeLocal "loc_Hospital"; //Markerform, siehe https://community.bistudio.com/wiki/cfgMarkers
        bf_localmarker pushBack [_name,time];
    };
};
