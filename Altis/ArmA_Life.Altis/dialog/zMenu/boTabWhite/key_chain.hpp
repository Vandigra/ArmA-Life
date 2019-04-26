class Life_key_management {
    idd = 2700;
    name= "life_key_chain";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_keyMenu;";

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_cle.paa";
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
            w = 0.6;
            h = (1 / 25);
        };

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
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
/*
            text = "$STR_Keys_Title";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
*/
            text = "";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class KeyChainList: Life_RscListBox {
            idc = 2701;
            text = "";
            sizeEx = 0.035;
/*
            x = 0.12;
            y = 0.26;
            w = 0.56;
            h = 0.370;
*/
            x = 0.298;
            y = 0.299;
            w = 0.45;
            h = 0.5777;
        };

        class Life_RscButtonInvisible18: Life_RscButtonMenu {
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

        class NearPlayers: Life_RscCombo {
            idc = 2702;
/*
            x = 0.26;
            y = 0.645;
            w = 0.275;
            h = 0.03;
*/
            x = 0.1;
            y = 0.2;
            w = 0.275;
            h = 0.03;
        };

        class Life_RscButtonInvisible19: Life_RscButtonMenu {
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
            onButtonClick = "[] call life_fnc_keyDrop;";
            x = 0.765;
            y = 0.8206;
            w = 0.1319;
            h = 0.0407;
        };

/*
        class DropKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Keys_DropKey";
            onButtonClick = "[] call life_fnc_keyDrop";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible20: Life_RscButtonMenu {
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
            idc = 2703;
            text = "";
            onButtonClick = "[] call life_fnc_keyGive;";
            x = 0.765;
            y = 0.3175;
            w = 0.1319;
            h = 0.0407;
        };

/*
        class GiveKey: Life_RscButtonMenu {
            idc = 2703;
            text = "$STR_Keys_GiveKey";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_keyGive";
            x = 0.32;
            y = 0.69;
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/
    };
};
