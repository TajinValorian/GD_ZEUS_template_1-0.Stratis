class T_UI_zeusVote {
	idd = -1;
	movingenable = false;
	onLoad = "[_this,'T_zeusVote','load'] call T_fnc_handleUI;";
	//onUnload = "[_this,'T_zeusVote','unload'] call T_fnc_handleUI;";
	//onCanDestroy = "[_this,'T_zeusVote','candestroy'] call T_fnc_handleUI;";
	class controls
	{
		class MyIGUIBack : IGUIBack	{
			w = "SafeZoneW";
			h = "SafeZoneH";
			x = "SafeZoneX";
			y = "SafeZoneY";
			colorBackground[] = {0, 0, 0, 1};
		};
		class Title : RscText {
			idc = 4;
			text = "Select the player who should become Gamemaster:";
			x = "SafeZoneX + (500.000000000001 / 1920) * SafeZoneW";
			y = "SafeZoneY + (200 / 1080) * SafeZoneH";
			w = "(600 / 1920) * SafeZoneW";
			h = "(16 / 1080) * SafeZoneH";
		};
		class playerList : RscListBox {
			idc = 1;
			colorSelect[] = {0, 0, 0, 1};
			colorBackground[] = {1, 1, 1, 0.1};
			x = "SafeZoneX + (500 / 1920) * SafeZoneW";
			y = "SafeZoneY + (240 / 1080) * SafeZoneH";
			w = "(240 / 1920) * SafeZoneW";
			h = "(455.000000000001 / 1080) * SafeZoneH";
			onLBListSelChanged = "[_this,'T_zeusVote','select'] call T_fnc_handleUI;";
		};
		class zeusForce : RscButton	{
			idc = 2;
			text = "Force select";
			onButtonClick = "[_this,'T_zeusVote','force'] call T_fnc_handleUI";
			x = "SafeZoneX + (744.999999999999 / 1920) * SafeZoneW";
			y = "SafeZoneY + (670 / 1080) * SafeZoneH";
			w = "(120 / 1920) * SafeZoneW";
			h = "(25 / 1080) * SafeZoneH";
		};
		class info : RscText {
			idc = 3;
			text = " ";
			x = "SafeZoneX + (746 / 1920) * SafeZoneW";
			y = "SafeZoneY + (239.04 / 1080) * SafeZoneH";
			w = "(258.999999999999 / 1920) * SafeZoneW";
			h = "(420.999999999999 / 1080) * SafeZoneH";
		};
	};
};