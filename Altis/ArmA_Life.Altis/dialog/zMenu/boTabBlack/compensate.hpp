class Life_Admin_Compensate {
    idd = 9920;
    name= "life_admin_compensate_give";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn {waitUntil {!isNull (findDisplay 9920)}; ((findDisplay 9920) displayCtrl 9921) ctrlSetText localize ""STR_Admin_Amount""};";

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_admin_give.paa";
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
            w = 0.5;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.5;
            h = 0.3 - (22 / 250);
        };
*/
    };

    class controls {
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
            idc = -1;
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
            x = 0.03575;
            y = 0.49;
            w = 0.0342;
            h = 0.045;
        };
/*
        class InfoMsg: Life_RscStructuredText {
            idc = 9921;
            sizeEx = 0.020;
            text = "";
            x = 0.1;
            y = 0.25;
            w = 0.5;
            h = 0.11;
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "$STR_Admin_Compensate";
            x = 0.1;
            y = 0.2;
            w = 0.5;
            h = (1 / 25);
        };

        class AdminCloseComp: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.5 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

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
            idc = -1;
            onButtonClick = "[] spawn life_fnc_adminCompensate;";
            x = 0.4195;
            y = 0.8025;
            w = 0.1525;
            h = 0.042;
        };

/*
        class AdminCompensVer: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Admin_Compensate";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_adminCompensate;";
            x = 0.27;
            y = 0.40;
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class AdminCompensTex: Life_RscEdit {
            idc = 9922;
            text = "";
/*
            x = 0.04 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.35;
            w = (13 / 40);
            h = (1 / 25);
*/
            x = 0.286;
            y = 0.562;
            w = 0.3590;
            h = 0.04;
            colorBackground[] = {0, 0, 0, 0};
        };
    };
};
