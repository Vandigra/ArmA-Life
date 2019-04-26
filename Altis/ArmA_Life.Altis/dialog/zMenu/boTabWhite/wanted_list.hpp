class life_wanted_menu {
    idd = 2400;
    name= "life_wanted_menu";
    movingEnable = false;
    enableSimulation = true;
    //onLoad = "[] spawn life_fnc_wantedadd2;";

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_interpol.paa";
            x = 0;
            y = -0.12;
            w = 1;
            h = 1.28;
        };

        class Life_RscTitleBackground: Life_RscText {
            //colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

/*
        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.6;
            h = 0.6 - (22 / 250);
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

        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
/*
            text = "$STR_Wanted_Title";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
*/
            text = "";
            x = 0.294;
            y = 0.145;
            w = 0.6;
            h = 0.0398;
        };

        class WantedConnection: Title {
            idc = 2404;
            style = 1;
            text = "";
            x = 0.294;
            y = 0.145;
            w = 0.6;
            h = 0.0398;
        };

        class WantedList: Life_RscListBox {
            idc = 2401;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[] spawn life_fnc_wantedGrab";
/*
            x = 0.12;
            y = 0.28;
            w = 0.2;
            h = 0.3;
*/
            x = 0.625;
            y = 0.335;
            w = 0.2;
            h = 0.3;
        };

        class PlayerList: Life_RscListBox {
            idc = 2406;
            text = "";
            sizeEx = 0.035;
            //colorBackground[] = {0,0,0,0};
            onLBSelChanged = "";
/*
            x = 0.34;
            y = 0.28;
            w = 0.2;
            h = 0.3;
*/
            x = 0.35;
            y = 0.335;
            w = 0.2;
            h = 0.3;
        };

        class WantedDetails: Life_RscListBox {
            idc = 2402;
            text = "";
            sizeEx = 0.035;
            colorBackground[] = {0, 0, 0, 0};
/*
            x = 0.12;
            y = 0.62;
            w = 0.48;
            h = 0.12;
*/
            x = 0.35;
            y = 0.675;
            w = 0.48;
            h = 0.12;
        };

        class BountyPrice: Life_RscText    {
            idc = 2403;
            text = "";
            x = 0.12;
            y = 0.30;
            w = 0.6;
            h = 0.6;
        };

        class WantedAddL: Life_RscCombo    {
            idc = 2407;
/*
            x = 0.542;
            y = 0.28;
            w = (8 / 52);
            h = 0.03;
*/
            x = 0.125;
            y = 0.335;
            w = (8 / 25);
            h = 0.03;
        };

/*
        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
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
            idc = 2405;
            onButtonClick = "[] call life_fnc_pardon;";
            x = 0.107;
            y = 0.833;
            w = 0.1525;
            h = 0.042;
        };

/*
        class PardonButtonKey: Life_RscButtonMenu {
            idc = 2405;
            text = "$STR_Wanted_Pardon";
            onButtonClick = "[] call life_fnc_pardon; closeDialog 0;";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
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
            idc = 9800;
            onButtonClick = "[] call life_fnc_wantedAddP;";
            x = 0.3429;
            y = 0.833;
            w = 0.1525;
            h = 0.042;
        };

/*
        class ButtonWantedAdd: Life_RscButtonMenu {
            idc = 9800;
            //shortcuts[] = {0x00050000 + 2};
            text = "$STR_Wanted_Add";
            onButtonClick = "[] call life_fnc_wantedAddP;";
            x = 0.1 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class wantedText: Life_RscText {
            idc = 1000;
            text = "$STR_Wanted_People";
            x = 0.12;
            y = 0.11;
            w = 0.2;
            h = 0.3;
        };

        class citizensText: Life_RscText {
            idc = 1001;
            text = "$STR_Wanted_Citizens";
            x = 0.34;
            y = 0.11;
            w = 0.2;
            h = 0.3;
        };

        class crimesText: Life_RscText {
            idc = 1002;
            text = "$STR_Wanted_Crimes";
            x = 0.542;
            y = 0.245;
            w = (8 / 52);
            h = 0.03;
        };
    };
};
