class life_my_group_Diag {
	idd = 2620;
	name= "life_my_group_menu";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[false] spawn life_fnc_groupManagement;";

	class controlsBackground {
    class fondtablet: Life_RscPicture {
      idc = 9090909;
      text = "textures\z_menu\by_Bolex\gris_gang_gestion.paa";
      x = 0;
      y = -0.12;
      w = 1;
      h = 1.28;
    };

/*
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {0.4, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class MainBackground:Life_RscText {
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


		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
/*
			text = "$STR_Group_Menu";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
*/
			text = "";
      x = 0.1375;
      y = 0.34;
      w = 0.4;
      h = 0.04;
		};

		class GroupMemberList : Life_RscListBox
		{
			idc = 2621;
			text = "";
			sizeEx = 0.035;
/*
			x = 0.12; y = 0.26;
			w = 0.350; h = 0.370;
*/
      x = 0.162584;
      y = 0.4;
      w = 0.349912;
      h = 0.44;
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
		class CloseLoadMenu : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

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
      onButtonClick = "[] call life_fnc_leaveGroup";
      x = 0.5375;
      y = 0.424;
      w = 0.1625;
      h = 0.04;
    };

/*
		class GroupLeave : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Gang_Leave";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] call life_fnc_leaveGroup";
			x = 0.50;
			y = 0.26;
			w = (6.25 / 40);
			h = (1 / 25);
		};


		class GroupPass : Life_RscButtonMenu
		{
			idc = 2623;
			text = "$STR_SetGrpPass";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] spawn life_fnc_setGroupPass";
			x = 0.50;
			y = 0.31;
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

    class Life_RscButtonInvisible21: Life_RscButtonMenu {
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
      idc = 2624;
      text = "";
      onButtonClick = "[] call life_fnc_kickGroup";
      x = 0.55;
      y = 0.588;
      w = 0.155;
      h = 0.048;
    };

/*
		class GroupKick : Life_RscButtonMenu
		{
			idc = 2624;
			text = "$STR_Gang_Kick";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] call life_fnc_kickGroup";
			x = 0.50;
			y = 0.36;
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

    class Life_RscButtonInvisible27: Life_RscButtonMenu {
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
      idc = 2625;
      text = "";
      onButtonClick = "[] call life_fnc_setGroupLeader";
      x = 0.55;
      y = 0.68;
      w = 0.155;
      h = 0.048;
    };

/*
		class GroupLeader : Life_RscButtonMenu
		{
			idc = 2625;
			text = "$STR_Gang_SetLeader";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] call life_fnc_setGroupLeader";
			x = 0.50;
			y = 0.41;
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

		class TerrorSelect : Life_RscCombo
		{
			idc = 2627;
			x = 0.50;
			y = 0.51;
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class GroupName : Title {
			idc = 601;
			style = 1;
			text = "";
		};
	};
};

class Life_Browse_Group_Diag {
	idd = 2520;
	name= "life_my_group_menu_browse";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_groupBrowser";

	class controlsBackground {
    class fondtablet: Life_RscPicture {
      idc = 9090909;
      text = "textures\z_menu\by_Bolex\gris_creer_gang.paa";
      x = 0;
      y = -0.12;
      w = 1;
      h = 1.28;
    };

		class Life_RscTitleBackground:Life_RscText {
/*
			colorBackground[] = {0.4, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
*/
		};

		class MainBackground:Life_RscText {
/*
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.6;
			h = 0.6 - (22 / 250);
*/
		};
	};

	class controls {
/*
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_Group_Menu2";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
*/

		class GroupList : Life_RscListBox
		{
			idc = 2521;
			text = "";
			sizeEx = 0.035;

			x = 0.12; y = 0.26;
			w = 0.56; h = 0.370;
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
      onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
      x = 0.03575;
      y = 0.49;
      w = 0.0342;
      h = 0.045;
    };

/*
		class CloseLoadMenu : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0; [] call life_fnc_p_updateMenu;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

		class GroupJoin : Life_RscButtonMenu {
			idc = 2522;
			text = "$STR_Gang_Join";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] spawn life_fnc_joinGroup";
			x = 0.32;
			y = 0.65;
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

class Life_Create_Group_Diag {
	idd = 2520;
	name= "life_my_group_menu_create";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground {
    class fondtablet: Life_RscPicture {
      idc = 9090909;
      text = "textures\z_menu\by_Bolex\gris_gang_gestion.paa";
      x = 0;
      y = -0.12;
      w = 1;
      h = 1.28;
    };

		class Life_RscTitleBackground:Life_RscText {
/*
			colorBackground[] = {0.4, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.5;
			h = (1 / 25);
*/
		};

		class MainBackground:Life_RscText {
/*
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.5;
			h = 0.3 - (22 / 250);
*/
		};
	};

	class controls {
		class InfoMsg : Life_RscStructuredText
		{
			idc = -1;
			sizeEx = 0.020;
			text = "$STR_Group_Free";
			x = 0.1;
			y = 0.25;
			w = 0.5; h = (1 / 24);
		};

/*
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_Group_Menu";
			x = 0.1;
			y = 0.2;
			w = 0.5;
			h = (1 / 25);
		};
*/

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
      onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
      x = 0.03575;
      y = 0.49;
      w = 0.0342;
      h = 0.045;
    };

/*
		class CloseLoadMenu : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.5 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

    class Life_RscButtonInvisible30: Life_RscButtonMenu {
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
      onButtonClick = "[] call life_fnc_createGroup";
      x = 0.575;
      y = 0.592;
      w = 0.1;
      h = 0.04;
    };

/*
		class GroupCreateField : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Gang_Create";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "[] call life_fnc_createGroup";
			x = 0.27;
			y = 0.40;
			w = (6.25 / 40);
			h = (1 / 25);
		};
*/

		class CreateGroupText : Life_RscEdit
		{
			idc = 2522;
			text = "$STR_Group_YGN";

			x = 0.04 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.35;
			w = (13 / 40);
			h = (1 / 25);
		};

	};
};

class Life_Group_Prompt
{
	idd = 2550;
	name = "Group_Prompt";
	movingEnabled = false;
	enableSimulation = true;

	class controlsBackground {
    class fondtablet: Life_RscPicture {
      idc = 9090909;
      text = "textures\z_menu\by_Bolex\gris_gang_gestion.paa";
      x = 0;
      y = -0.12;
      w = 1;
      h = 1.28;
    };

		class Life_RscTitleBackground:Life_RscText {
/*
			colorBackground[] = {0.4, 0, 0, 0.7};
			idc = -1;
			x = 0.3;
			y = 0.2;
			w = 0.47;
			h = (1 / 25);
*/
		};

		class MainBackground:Life_RscText {
/*
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.3;
			y = 0.2 + (11 / 250);
			w = 0.47;
			h = 0.3 - (22 / 250);
*/
		};
	};

	class controls {
		class InfoMsg : Life_RscStructuredText
		{
			idc = -1;
			sizeEx = 0.020;
			text = "$STR_GNOTF_NotInGroup";
			x = 0.287;
			y = 0.2 + (11 / 250);
			w = 0.5; h = 0.12;
		};

		class life_group_browse : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Group_Browse";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "closeDialog 0; createDialog ""Life_Browse_Group_Diag""";
			x = 0.2 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.42 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class life_group_create_button : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Gang_Create";
			colorBackground[] = {0.5, 0, 0, 0.5};
			onButtonClick = "closeDialog 0; createDialog ""Life_Create_Group_Diag""";
			x = 0.4 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.42 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};
