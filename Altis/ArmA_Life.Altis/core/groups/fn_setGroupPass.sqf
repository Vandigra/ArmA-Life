private["_dialog","_index","_members","_sel","_user"];
disableSerialization;

_dialog = findDisplay 2620;
_members = _dialog displayCtrl 2621;
_sel = lbCurSel 2621;
_data = _members lbData _sel;
_data = call compile format["%1", _data];

_index = [life_my_group,life_group_list] call life_fnc_index;
if(_index == -1) exitWith {};
if(leader(group player) != player) exitWith {hint localize "STR_GNOTF_GrpAbility"};

_gang = life_group_list select _index;
_name = _gang select 0;
_group = _gang select 1;
_owner = _gang select 3;
_ownerID = _gang select 4;

[localize "STR_GNOTF_EnterDesGrpPass", localize "STR_SetGrpPass2", localize "STR_SetGrpPass"] call life_fnc_inputMenu;
if(life_input_response == "") exitWith {[false] spawn life_fnc_groupManagement};

life_group_list set[_index,[_name,_group,life_input_response,_owner,_ownerID]];
publicVariable "life_group_list";

[false] spawn life_fnc_groupManagement;
