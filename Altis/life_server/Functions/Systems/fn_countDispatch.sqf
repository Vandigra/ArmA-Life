/*
    File: fn_countDispatch.sqf
    Author: blackfisch for MountainValley RPG, licensed for Native-Network.net

    Terms of use:
    This script has been licensed for public use on Native-Network.net
    It is not allowed to remove or modify the header of this script in any way, it is allowed to add contributors to the header or change the description.
    The code itself may not be published in any other matter without permission of the author.
    Any inproper or not licensed use of this script is strictly prohibited and enforced by law.
    The author (blackfisch) may evoke the license of the script at any point of time, if the terms of use are violated or the author can name a reasoned explanation for it.
    The license can not be transferred to any other project for use.

    Description:
    Let's count our dispatches...
*/
params [
    ["_type","",[""]]
];

if (_type isEqualTo "") exitWith {};

switch _type do {
    case "cop": {
        bf_copDispatchCount = bf_copDispatchCount + 1;
        publicVariable "bf_copDispatchCount";
    };

    case "med": {
        bf_medDispatchCount = bf_medDispatchCount + 1;
        publicVariable "bf_medDispatchCount";
    };
};
