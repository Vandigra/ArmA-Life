/*
 File: fn_huntingKit.sqf
 Author: Nikos (Ravenheart)

 Description: Hunting Kit helps to track animals. To be used at the Hunting Area.

*/

private["_foundAnimal","_foundDistance","_foundDirection"];

closeDialog 0;

_check_animals = ["Hen_Random_F","Cock_Random_F","Goat_Random_F","Sheep_Random_F","Rabbit_F"]; //What animals to look for.
_check_distance = 200; //How should the kit look.

if (vehicle player != player) exitWith {hint localize "STR_Hunt_Veh"};

_track = [typeof (nearestObjects [player, _check_animals, _check_distance] select 0), getpos player distance getpos (nearestObjects [player, _check_animals, _check_distance] select 0), player getreldir (nearestObjects [player, _check_animals, _check_distance] select 0)];

_foundAnimal = "void";
if (_track select 0 == "Hen_Random_F") then {_foundAnimal = localize "STR_Hunt_Hen";};
if (_track select 0 == "Cock_Random_F") then {_foundAnimal = localize "STR_Hunt_Rooster";};
if (_track select 0 == "Goat_Random_F") then {_foundAnimal = localize "STR_Hunt_Goat";};
if (_track select 0 == "Sheep_Random_F") then {_foundAnimal = localize "STR_Hunt_Sheep";};
if (_track select 0 == "Rabbit_F") then {_foundAnimal = localize "STR_Hunt_Rabbit";};

_foundDistance = localize "STR_Hunt_Old";
if (_track select 1 <= 100) then {_foundDistance = localize "STR_Hunt_Rec";};
if (_track select 1 <= 50) then {_foundDistance = localize "STR_Hunt_VeRec";};

_foundDirection = localize "STR_Hunt_Ahead";
if (_track select 2 >= 45 && _track select 2 < 135) then {_foundDirection = localize "STR_Hunt_Right";};
if (_track select 2 >= 135 && _track select 2 < 225) then {_foundDirection = localize "STR_Hunt_Behind";};
if (_track select 2 >= 225 && _track select 2 < 315) then {_foundDirection = localize "STR_Hunt_Left";};

if (_foundAnimal == "void") then {
 hint localize "STR_Hunt_NoTraces";
} else {
 hint format [(localize "STR_Hunting_1") + " %1 " + (localize "STR_Hunting_2") + " %2 %3",_foundDistance,_foundAnimal,_foundDirection];
};
