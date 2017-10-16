class CfgPatches
{
	class plp_containers
	{
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes",
			"A3_UI_F",
			"A3_Characters_F_Common"
		};
		requiredVersion=0.1;
		units[]=
		{
			
			"plp_ct_ContPlainBlack"
			
		};
		weapons[]={};
	};
};
class CfgVehicleClasses
{
	class plp_containers
	{
		displayName="PLP Containers (Useable, Cargo)";
		mapbuilder_filter="PLP Object Packs";
	};
	
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class House_Small_F;
	class plp_ct_base: ThingX
	{
		animated=0;
		scope=0;
		scopeCurator=0;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		icon="iconCrate";
		model="\A3\Weapons_f\dummyweapon.p3d";
		accuracy=0.2;
		typicalCargo[]={};
		vehicleClass="plp_containers";
		destrType="DestructNo";
		class DestructionEffects
		{
		};
		maximumLoad=500;
		transportMaxWeapons=3;
		transportMaxMagazines=100;
		transportMaxBackpacks=1;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.4;
		cost=0;
		armor=200;
		mapSize=2;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
	};
	
	
	
	class plp_ct_ContPlainBlack: plp_ct_base
	{
		scope=2;
		scopeCurator=2;
		displayName="Container (Plain, Black)";
		model="\container\plp_ct_Container.p3d";
		maximumLoad=20000;
		transportMaxWeapons=100;
		transportMaxMagazines=4000;
		transportMaxBackpacks=100;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		slingLoadCargoMemoryPointsDir[]={};
		hiddenSelections[]=
		{
			"camo",
			"camoB",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\container\data\plp_ct_ContPlainBlack.paa",
			"",
			"\container\data\plp_ct_Cont_Display_On.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\container\data\plp_ct_ContShipping.rvmat",
			"",
			"",
			""
		};
	};
	
};
