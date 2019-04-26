#include "player_sys.sqf"

class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_interface.paa";
            x = 0;
            y = -0.12;
            w = 1;
            h = 1.28;
        };

/*
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.8;
            h = 0.6 - (22 / 250);
        };
*/

        class Title: Life_RscTitle {
/*
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_PM_Title";
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
*/
            colorBackground[] = {1, 1, 1, 1};
            idc = -1;
            text = "";
            x = 0.094;
            y = 0.243;
            w = 0.8;
            h = 0.0405;
        };

        class moneyStatusInfo: Life_RscStructuredText {
/*
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.105;
            y = 0.30;
            w = 0.3;
            h = 0.6;
*/
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.225;
            y = 0.345;
            w = 0.32;
            h = 0.16;
        };

        class PlayersName: Title {
            idc = carry_weight;
            style = 1;
            text = "";
        };
    };

    class controls {
/*
        class itemHeader: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "$STR_PM_cItems";
            sizeEx = 0.04;
            x = 0.62;
            y = 0.26;
            w = 0.275;
            h = 0.04;
        };

        class licenseHeader: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "$STR_PM_Licenses";
            sizeEx = 0.04;
            x = 0.336;
            y = 0.26;
            w = 0.275;
            h = 0.04;
        };

        class moneySHeader: Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "$STR_PM_MoneyStats";
            sizeEx = 0.04;
            x = 0.11;
            y = 0.26;
            w = 0.219;
            h = 0.04;
        };
*/

        class itemList: Life_RscListBox {
            idc = item_list;
            sizeEx = 0.030;
/*
            x = 0.62;
            y = 0.30;
            w = 0.275;
            h = 0.3;
*/
            x = 0.599975;
            y = 0.34;
            w = 0.224944;
            h = 0.218182;
        };

        class moneyEdit: Life_RscEdit {
            idc = 2018;
            text = "1";
            sizeEx = 0.030;
/*
            x = 0.12;
            y = 0.42;
            w = 0.18;
            h = 0.03;
*/
            x = 0.250063;
            y = 0.459;
            w = 0.124969;
            h = 0.03;
        };

        class NearPlayers: Life_RscCombo {
            idc = 2022;
/*
            x = 0.12;
            y = 0.46;
            w = 0.18;
            h = 0.03;
*/
            x = 0.250063;
            y = 0.492;
            w = 0.124969;
            h = 0.03;
        };

        class Life_RscButtonInvisible1: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2001;
            text = "";
            onButtonClick = "[] call life_fnc_giveMoney;";
            x = 0.391;
            y = 0.491;
            w = 0.0764;
            h = 0.022;
        };

/*
        class moneyDrop: Life_RscButtonMenu {
            idc = 2001;
            text = "$STR_Global_Give";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_giveMoney";
            sizeEx = 0.025;
            x = 0.135;
            y = 0.50;
            w = 0.13;
            h = 0.036;
        };
*/

        class itemEdit: Life_RscEdit {
            idc = item_edit;
            text = "1";
            sizeEx = 0.030;
/*
            x = 0.62;
            y = 0.61;
            w = 0.275;
            h = 0.03;
*/
            x = 0.612471;
            y = 0.56;
            w = 0.212447;
            h = 0.03;
        };

        class iNearPlayers: Life_RscCombo {
            idc = 2023;
/*
            x = 0.62;
            y = 0.65;
            w = 0.275;
            h = 0.03;
*/
            x = 0.612471;
            y = 0.6;
            w = 0.131217;
            h = 0.03;
        };

        class Life_RscButtonInvisible2: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2002;
            text = "";
            onButtonClick = "[] call life_fnc_giveItem;";
            x = 0.752;
            y = 0.6018;
            w = 0.084;
            h = 0.022;
        };

/*
        class DropButton: Life_RscButtonMenu {
            idc = 2002;
            text = "$STR_Global_Give";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_giveItem;";
            x = 0.765;
            y = 0.70;
            w = (5.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible3: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            text = "";
            onButtonClick = "[] call life_fnc_useItem;";
            x = 0.726;
            y = 0.647;
            w = 0.102;
            h = 0.025;
        };

/*
        class UseButton: Life_RscButtonMenu {
            text = "$STR_Global_Use";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_useItem;";
            x = 0.62;
            y = 0.70;
            w = (5.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible5: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            text = "";
            onButtonClick = "[] call life_fnc_removeItem;";
            x = 0.391;
            y = 0.491;
            w = 0.0764;
            h = 0.022;
        };

/*
        class RemoveButton: Life_RscButtonMenu {
            text = "$STR_Global_Remove";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_removeItem;";
            x = 0.475;
            y = 0.70;
            w = (5.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible6: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            text = "";
            onButtonClick = "closeDialog 0;";
            x = 0.03575;
            y = 0.49;
            w = 0.0342;
            h = 0.045;
        };

/*
        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.1;
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible7: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            text = "";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.325;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonSettings: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Settings";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible8: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2011;
            onButtonClick = "[] call life_fnc_groupMenu;";
            x = 0.525;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonMyGroup : Life_RscButtonMenu {
            idc = 2011;
            text = "$STR_PM_MyGroup";
            onButtonClick = "[] call life_fnc_groupMenu";
            x = 0.1 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Licenses_Menu : Life_RscControlsGroup {
            idc = -1;
/*
            w = 0.28;
            h = 0.38;
            x = 0.34;
            y = 0.30;
*/
            w = 0.282;
            h = 0.295;
            x = 0.252;
            y = 0.595;

            class Controls {
                class Life_Licenses: Life_RscStructuredText {
                    idc = 2014;
                    sizeEx = 0.020;
                    text = "";
                    x = 0;
                    y = 0;
                    w = 0.27;
                    h = 0.65;
                };
            };
        };

        class Life_RscButtonInvisible9: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2012;
            onButtonClick = "[] call life_fnc_wantedMenu;";
            x = 0.7125;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonGroupList: Life_RscButtonMenu {
            idc = 2012;
            text = "$STR_PM_WantedList";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.1 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible10: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2013;
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.8;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonKeys: Life_RscButtonMenu {
            idc = 2013;
            text = "$STR_PM_KeyChain";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.26 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible11: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2014;
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.425;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonCell: Life_RscButtonMenu {
            idc = 2014;
            text = "$STR_PM_CellPhone";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.42 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible12: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2020;
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.525;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonGang: Life_RscButtonMenu {
            idc = 2020;
            text = "$STR_PM_MyGang";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.805;
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible13: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = 2021;
            onButtonClick = "createDialog ""life_admin_menu"";";
            x = 0.562;
            y = 0.729;
            w = 0.14;
            h = 0.14;
        };

/*
        class ButtonAdminMenu: Life_RscButtonMenu {
            idc = 2021;
            text = "$STR_PM_AdminMenu";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.850;
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class PoliceNewsBroadcast: Life_RscButtonMenu {
            idc = 3024;
            text = "AAN News Nachricht";
            onButtonClick = "closeDialog 0; [] call life_fnc_newsBroadcast;";
            x = 0.42 + (6.24 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.805;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class Life_RscButtonInvisible14: Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.6125;
            y = 0.15;
            w = 0.0625;
            h = 0.08;
        };

/*
        class ButtonSyncData: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_PM_SyncData";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.1;
            y = 0.805;
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible266 : Life_RscButtonMenu {//info
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            text = "";
            tooltip = "Info Tablette";
            onButtonClick = "createDialog ""Info_bolex"";";
            x = 0.1049;
            y = 0.8549;
            w = 0.0303;
            h = 0.039;
        };
    };
};

class Info_bolex {
    idd = -1;
    name= "info_bolex";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_info.paa"; //byBOLEX_Ymenu_or_info.paa
            x = 0;
            y = -0.12;
            w = 1;
            h = 1.28;
        };

        class Life_RscTitleBackground:Life_RscText {
        };

        class MainBackground:Life_RscText {
        };
    };

    class controls {
        class Life_RscButtonInvisible600 : Life_RscButtonMenu {
            animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
            colorBackground[] = {0, 0, 0, 0};
            colorBackground2[] = {1, 1, 1, 0};
            color[] = {1, 1, 1, 0};
            color2[] = {1, 1, 1, 0};
            colorText[] = {1, 1, 1, 0};
            colorDisabled[] = {1, 1, 1, 0};
            idc = -1;
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
            x = 0.03575;
            y = 0.49;
            w = 0.0342;
            h = 0.045;
        };
    };
};
