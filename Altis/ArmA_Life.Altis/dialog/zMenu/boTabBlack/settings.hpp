class SettingsMenu {
    idd = 2900;
    name = "SettingsMenu";
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_parametre.paa";
            x = 0;
            y = -0.12;
            w = 1;
            h = 1.28;
        };

        class RscTitleBackground: Life_RscText {
            //colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            colorBackground[] = {0.0266, 0.2699, 0.4631, 1};
            idc = -1;
/*
            x = 0.3;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
*/
            x = 0.25;
            y = 0.3;
            w = 0.5;
            h = (1 / 25);
        };

/*
        class RscMainBackground: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.3;
            y = 0.2 + (11 / 250);
            w = 0.5;
            h = 0.48 - (22 / 250);
        };
*/

        class PlayerTagsHeader: Life_RscText {
            idc = -1;
            text = "$STR_SM_PlayerTags";
            //colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            colorText[] = {1, 1, 1, 1};
/*
            x = 0.30;
            y = 0.43;
            w = 0.35;
*/
            x = 0.15;
            y = 0.617;
            w = 0.5;
            h = (1 / 25);
        };

        class SideChatHeader : PlayerTagsHeader {
            idc = -1;
            text = "$STR_SM_SC";
            //y = 0.48;
            y = 0.692;
        };

        class RevealNearestHeader : PlayerTagsHeader {
            idc = -1;
            text = "$STR_SM_RNObj";
            //y = 0.53;
            y = 0.767;
        };

        class BroacastHeader : PlayerTagsHeader {
            idc = -1;
            text = "$STR_SM_BCSW";
            //y = 0.58;
            y = 0.842;
        };

        class Title: Life_RscTitle {
            idc = -1;
            //colorBackground[] = {0,0,0,0};
            colorText[] = {1, 1, 1, 1};
            text = "$STR_SM_Title";
/*
            x = 0.3;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
*/
            x = 0.25;
            y = 0.3;
            w = 0.5;
            h = (1 / 25);
        };
    };

    class controls {
        class VDonFoot: Life_RscText {
            idc = -1;
            text = "$STR_SM_onFoot";
            colorText[] = {1, 1, 1, 1};
/*
            x = 0.32;
            y = 0.258;
*/
            x = 0.145;
            y = 0.38;
            w = 0.275;
            h = 0.04;
        };

        class VDinCar: Life_RscText {
            idc = -1;
            text = "$STR_SM_inCar";
            colorText[] = {1, 1, 1, 1};
/*
            x = 0.32;
            y = 0.305;
*/
            x = 0.145;
            y = 0,46;
            w = 0.275;
            h = 0.04;
        };

        class VDinAir: Life_RscText {
            idc = -1;
            text = "$STR_SM_inAir";
            colorText[] = {1, 1, 1, 1};
/*
            x = 0.32;
            y = 0.355;
*/
            x = 0.145;
            y = 0.54;
            w = 0.275;
            h = 0.04;
        };

        class VD_onfoot_slider: life_RscXSliderH {
            idc = 2901;
            text = "";
            color[] = {0.3798, 0.6967, 0.0628, 1};
            onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "$STR_SM_ToolTip1";
/*
            x = 0.42;
            y = 0.30 - (1 / 25);
*/
            x = 0.35;
            y = 0.38;
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };

        class VD_onfoot_value: Life_RscEdit {
            idc = 2902;
            text = "";
            colorBackground[] = {0.3789, 0.6967, 0.0628, 1};
            colorText[] = {1, 1, 1, 1};
            onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
/*
            x = .70;
            y = .258;
*/
            x = .64;
            y = .38;
            w = .08;
            h = .04;
        };

        class VD_car_slider: life_RscXSliderH {
            idc = 2911;
            text = "";
            color[] = {0.3798, 0.6967, 0.0628, 1};
            onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "$STR_SM_ToolTip2";
/*
            x = 0.42;
            y = 0.35 - (1 / 25);
*/
            x = 0.35;
            y = 0.46;
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };

        class VD_car_value: Life_RscEdit {
            idc = 2912;
            text = "";
            colorBackground[] = {0.3798, 0.06967, 0.0628, 1};
            colorText[] = {1, 1, 1, 1};
            onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
/*
            x = .70;
            y = .31;
*/
            x = .64;
            y = .46;
            w = .08;
            h = .04;
        };

        class VD_air_slider: life_RscXSliderH {
            idc = 2921;
            text = "";
            color[] = {0.3798, 0.6967, 0.0628, 1};
            onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "$STR_SM_ToolTip3";
/*
            x = 0.42;
            y = 0.40 - (1 / 25);
*/
            x = 0.35;
            y = 0.54;
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };

        class VD_air_value: Life_RscEdit {
            idc = 2922;
            text = "";
            colorBackground[] = {0.3798, 0.6967, 0.0628, 1};
            colorText[] = {1, 1, 1, 1};
            onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
/*
            x = 0.70;
            y = 0.36;
*/
            x = 0.64;
            y = 0.54;
            w = .08;
            h = .04;
        };

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
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
            x = 0.03575;
            y = 0.49;
            w = 0.0342;
            h = 0.045;
        };

        class PlayerTagsONOFF: Life_Checkbox {
            tooltip = "$STR_GUI_PlayTags";
            idc = 2970;
            sizeEx = 0.04;
            onCheckedChanged = "['tags',_this select 1] call life_fnc_s_onCheckedChange;";
/*
            x = 0.65;
            y = 0.43;
*/
            x = 0.70;
            y = 0.617;
        };

        class SideChatONOFF: PlayerTagsONOFF {
            idc = 2971;
            tooltip = "$STR_GUI_SideSwitch";
            onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";
            //y = 0.48;
            y = 0.692;
        };

        class RevealONOFF : PlayerTagsONOFF {
            idc = 2972;
            tooltip = "$STR_GUI_PlayerReveal";
            onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
            //y = 0.53;
            y = 0.767;
        };

        class BroadcastONOFF : PlayerTagsONOFF {
            idc = 2973;
            tooltip = "$STR_GUI_BroadcastSwitch";
            onCheckedChanged = "['broadcast',_this select 1] call life_fnc_s_onCheckedChange;";
            //y = 0.58;
            y = 0.842;
        };

        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.48;
            y = 0.68 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};
