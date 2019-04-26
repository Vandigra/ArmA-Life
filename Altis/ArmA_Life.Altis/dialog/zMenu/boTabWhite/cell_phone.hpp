class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
        class fondtablet: Life_RscPicture {
            idc = 9090909;
            text = "textures\z_menu\by_Bolex\gris_telephone.paa";
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
            w = 0.64;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.64;
            h = 0.3 - (5 / 250);
        };
*/
    };

    class controls {
/*
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3001;
            text = "$STR_CELL_Title";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class TextToSend: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 3002;
            text = "$STR_CELL_TextToSend";
            x = 0.1;
            y = 0.25;
            w = 0.6;
            h = (1 / 25);
        };
*/

        class textEdit: Life_RscEdit {
            idc = 3003;
            colorBackground[] = {0,0,0,0};
            text = "";
            sizeEx = 0.030;
/*
            x = 0.11;
            y = 0.3;
            w = 0.62;
            h = 0.03;
*/
            x = 0.425;
            y = 0.2666;
            w = 0.463;
            h = 0.4725;
        };

        class Life_RscButtonInvisible17: Life_RscButtonMenu {
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
            idc = 3015;
            text = "";
            onButtonClick = "[] call TON_fnc_cell_textmsg;";
            x = 0.8058;
            y = 0.774;
            w = 0.035;
            h = 0.045;
        };

/*
        class TextMsgButton: Life_RscButtonMenu {
            idc = 3015;
            text = "$STR_CELL_TextMSGBtn";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textmsg";
            x = 0.11;
            y = 0.35;
            w = 0.2;
            h = (1 / 25);
        };
*/

        class PlayerList: Life_RscCombo {
            idc = 3004;
/*
            x = 0.11;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
*/
            x = 0.438;
            y = 0.201;
            w = 0.319;
            h = 0.031;
        };

        class Life_RscButtonInvisible16: Life_RscButtonMenu {
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
            idc = 3016;
            text = "";
            onButtonClick = "[] call TON_fnc_cell_textcop;";
            x = 0.5666;
            y = 0.774;
            w = 0.035;
            h = 0.045;
        };

/*
        class TextCopButton: Life_RscButtonMenu {
            idc = 3016;
            text = "$STR_CELL_TextPolice";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textcop";
            x = 0.32;
            y = 0.35;
            w = 0.2;
            h = (1 / 25);
        };
*/

        class Life_RscButtonInvisible22: Life_RscButtonMenu {
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
            idc = 3017;
            text = "";
            onButtonClick = "[] call TON_fnc_cell_textadmin;";
            x = 0.4441;
            y = 0.774;
            w = 0.035;
            h = 0.045;
        };

/*
        class TextAdminButton: Life_RscButtonMenu {
            idc = 3017;
            text = "$STR_CELL_TextAdmins";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_textadmin";
            x = 0.53;
            y = 0.35;
            w = 0.2;
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
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
            x = 0.03575;
            y = 0.49;
            w = 0.0342;
            h = 0.045;
        };

        class AdminMsgButton: Life_RscButtonMenu {
            idc = 3020;
            text = "$STR_CELL_AdminMsg";
            colorBackground[] = {1, 0.4918, 0, 1};
            colorText[] = {0, 0.302, 0.5943, 1};
            //colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_adminmsg;";
/*
            x = 0.32;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
*/
            x = 0.67;
            y = 0.860;
            w = 0.225;
            h = 0.04;
        };

        class AdminMsgAllButton: Life_RscButtonMenu {
            idc = 3021;
            text = "$STR_CELL_AdminMSGAll";
            colorBackground[] = {1, 0.6639, 0, 1};
            colorText[] = {0, 0.302, 0.5943, 1};
            //colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_adminmsgall;";
/*
            x = 0.53;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
*/
            x = 0.408;
            y = 0.860;
            w = 0.225;
            h = 0.04;
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
            idc = 3022;
            text = "";
            onButtonClick = "[] call TON_fnc_cell_emsrequest;";
            x = 0.6916;
            y = 0.774;
            w = 0.035;
            h = 0.045;
        };
/*

        class EMSRequest: Life_RscButtonMenu {
            idc = 3022;
            text = "$STR_CELL_EMSRequest";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
            x = 0.11;
            y = 0.45;
            w = 0.2;
            h = (1 / 25);
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.51 + (1 / 50);
            w = (6.25 / 40);
            h = (1 / 25);
        };
*/
    };
};
