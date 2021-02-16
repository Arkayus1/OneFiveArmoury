class CfgWeapons
{
    class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class 15th_EOD_Helmet: OPTRE_UNSC_CH252D_Helmet
    {
        author="Dook and Dutch and Marco and Soap";
        scope=2;
        displayName="[15th] ODST EOD Helmet";
    optreVarietys[]={"15th_EOD_Helmet", "15th_EOD_Helmet_dp", "_broken"};
    picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
        model="OneFive_Armour\Data\Helmets\EOD\EOD_Helmet.p3d";
    modelSides[]={6};
        hiddenSelections[]=
        {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[]=
        {
            "OneFive_Armour\Data\Helmets\EOD\15th_EOD_Helmet_CO.paa",
            "OneFive_Armour\Data\Helmets\EOD\15th_EOD_Visor_CO_Purple.paa"
        };
        class ItemInfo: HeadgearItem
        {
            uniformModel="OneFive_Armour\Data\Helmets\EOD\EOD_Helmet.p3d";
            
            allowedSlots[]=
            {
                "BACKPACK_SLOT",
                "VEST_SLOT",
                "HEADGEAR_SLOT"
            };
            hiddenSelections[]=
            {
                "camo1",
                "visor"
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=25;
                    hitpointName="HitFace";
                    passThrough=0.1;
                };
                class Head
                {
                    armor=25;
                    hitPointName="HitHead";
                    passThrough=0.1;
                };
                class Neck
                {
                    armor=20;
                    hitpointName="HitNeck";
                    passThrough=0.1;
                };
            };
        };
    };
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class 15th_EOD_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
    {
        author="Dook and Dutch and technically Marco too";
        scope=0;
        displayName="[15th] ODST EOD Helmet (DP)";
    optreVarietys[]={"15th_EOD_Helmet", "15th_EOD_Helmet_dp", "_broken"};
        model="OneFive_Armour\Data\Helmets\EOD\EOD_Helmet_dp.p3d";
        modelSides[]={6};
        hiddenSelections[]=
        {
            "camo1",
            "visor"
        };
        hiddenSelectionsTextures[]=
        {
            "OneFive_Armour\Data\Helmets\EOD\15th_EOD_Helmet_CO.paa",
            "OneFive_Armour\Data\Helmets\EOD\15th_EOD_Visor_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            uniformModel="OneFive_Armour\Data\Helmets\EOD\EOD_Helmet_dp.p3d";
            allowedSlots[]=
            {
                "BACKPACK_SLOT",
                "VEST_SLOT",
                "HEADGEAR_SLOT"
            };
            hiddenSelections[]=
            {
                "camo1",
                "visor"
            };
            hiddenSelectionsTextures[]=
            {
                "OneFive_Armour\Data\Helmets\EOD\15th_EOD_Helmet_CO.paa",
                "OneFive_Armour\Data\Helmets\EOD\15th_EOD_Visor_CO.paa"
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=25;
                    hitpointName="HitFace";
                    passThrough=0.1;
                };
                class Head
                {
                    armor=25;
                    hitPointName="HitHead";
                    passThrough=0.1;
                };
                class Neck
                {
                    armor=20;
                    hitpointName="HitNeck";
                    passThrough=0.1;
                };
            };
        };
    };

	class 15th_EOD_Helmet_Big: OPTRE_UNSC_CH252D_Helmet
	{
		author="Dook and Dutch and technically Marco too";
		scopeArsenal=2;
		displayName="[15th] EOD Helmet (Beeg)";
		model="OneFive_Armour\Data\Helmets\EOD\Big_EOD_Helmet.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"OneFive_Armour\Data\Helmets\EOD\15th_EOD_Helmet_rainbow_CO",
			"OneFive_Armour\Data\Helmets\EOD\15th_EOD_Visor_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="OneFive_Armour\Data\Helmets\EOD\Big_EOD_Helmet.p3d";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1",
				"visor"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=100;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=100;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=80;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
	class 15th_EOD_Helmet_Big_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Dook and Dutch and technically Marco too";
		scope=0;
		displayName="15th EOD Helmet (Beeg) (Depolarized)";
		model="OneFive_Armour\Data\Helmets\EOD\Big_EOD_Helmet_dp.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"OneFive_Armour\Data\Helmets\EOD\15th_EOD_Helmet_CO.paa",
			"OneFive_Armour\Data\Helmets\EOD\15th_EOD_Visor_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="OneFive_Armour\Data\Helmets\EOD\Big_EOD_Helmet_dp.p3d";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo1",
				"visor"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=100;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=100;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=80;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
    class VES_M52D_Rifleman;
    class VES_M52D_Demolitions;
    class VES_M52D_Sniper;
    class 15th_Testing_M52D: VES_M52D_Rifleman
    {
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] M52D (Rifleman)(Rainbow)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_test_armor_odst_CO.paa"
        };
    };
    class 15th_Testing_M52D_Demolitions: VES_M52D_Demolitions
    {
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] M52D (Demolitions)(Rainbow)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_test_armor_odst_CO.paa"
        };
    };
    
    class 15th_Enlisted_M52D_Demolitions: 15th_Testing_M52D_Demolitions
    {
    displayName="[15th] M52D (Demolitions)(Enlisted)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_Enlisted_M52D_CO.paa"
        };
    };
    class 15th_NCO_M52D_Demolitions: 15th_Testing_M52D_Demolitions
    {
    displayName="[15th] M52D (Demolitions)(NCO)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_NCO_M52D_CO.paa"
        };
    };
    
    class 15th_Testing_M52D_Sniper: VES_M52D_Sniper
    {
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] M52D (Sniper)(Rainbow)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_test_armor_odst_CO.paa"
        };
    };
    
     class 15th_Enlisted_M52D_Sniper: VES_M52D_Sniper
    {
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] M52D (Sniper)(Enlisted)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_Enlisted_M52D_CO.paa"
        };
    };
    
    class 15th_NCO_M52D_Sniper: VES_M52D_Sniper
    {
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] M52D (Sniper)(NCO)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_NCO_M52D_CO.paa"
        };
    };
    
    class 15th_Enlisted_M52D: 15th_Testing_M52D
    {
    displayName="[15th] M52D (Rifleman)(Enlisted)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_Enlisted_M52D_CO.paa"
        };
    };
    
    class 15th_Medic_M52D: 15th_Testing_M52D
    {
    displayName="[15th] M52D (Rifleman)(Medic)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_Medic_M52D_CO.paa"
        };
    };

    class 15th_NCO_M52D: 15th_Testing_M52D
    {
    displayName="[15th] M52D (Rifleman)(NCO)";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "OneFive_Armour\Data\Vests\15th_NCO_M52D_CO.paa"
        };
    };
	
class VES_CH252D;
    class 15th_252D_Base: VES_CH252D
    {
	  scopeArsenal = 0;
        class ItemInfo;
    };
    class 15th_252D_Enlisted_Reserves: 15th_252D_Base
    {
	  scopeArsenal = 2; 
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] CH252D Helmet (Enlisted)";
        hiddenSelectionsTextures[]=
        {	
            "OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Reserves_CO.paa",
            // Visor Colors: BLU, GLD, SLV, DEF
            "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Reserves_CO.paa",
                // Visor Colors: BLU, GLD, SLV, DEF
                "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO.paa"
            };
        };
    };
    class 15th_252D_Medic_Reserves: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Medic)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Enlisted_Vulcan_One: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Enlisted - Vulcan 1)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_One_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_One_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Enlisted_Vulcan_Two: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Enlisted - Vulcan 2)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_Two_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_Two_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Medic_Vulcan_One: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Medic - Vulcan 1)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_One_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_One_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Medic_Vulcan_Two: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Medic - Vulcan 2)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_Two_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_Two_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_NCO_Vulcan_One: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (NCO - Vulcan 1)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_One_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_One_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_NCO_Vulcan_Two: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (NCO - Vulcan 2)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_Two_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_Two_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Custom_Buddy: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Custom_Buddy)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Buddy_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Buddy_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Custom_Jon: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Custom_Jon)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Jon_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Jon_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Custom_Joppa: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Custom_Joppa)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Joppa_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Joppa_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Custom_Muzthag: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Custom_Muzthag)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Muzthag_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Muzthag_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Custom_Noble: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Custom_Noble)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Noble_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Noble_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Rainbow: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Rainbow)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Rainbow_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Rainbow_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
class VES_CH252D_dp;
    class 15th_CH252D_Base_dp: VES_CH252D_dp
    {
        class ItemInfo;
    };
    class 15th_252D_Enlisted_Reserves_dp: 15th_CH252D_Base_dp
    {
        dlc="15th";
        author="Duke and Vespade";
        displayName="[15th] CH252D Helmet (Enlisted)";
        hiddenSelectionsTextures[]=
        {
            "OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Reserves_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Reserves_CO.paa"
            };
        };
    };
    class 15th_252D_Medic_Reserves_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (Medic)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa"};};
    }
    class 15th_252D_Enlisted_Vulcan_One_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (Enlisted - Vulcan 1)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_One_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_One_CO.paa"};};
    }
    class 15th_252D_Enlisted_Vulcan_Two_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (Enlisted - Vulcan 2)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_Two_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_Two_CO.paa"};};
    }
    class 15th_252D_Medic_Vulcan_One_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (Medic - Vulcan 1)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_One_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_One_CO.paa"};};
    }
    class 15th_252D_Medic_Vulcan_Two_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (Medic - Vulcan 2)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_Two_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_Two_CO.paa"};};
    }
    class 15th_252D_NCO_Vulcan_One_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (NCO - Vulcan 1)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_One_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_One_CO.paa"};};
    }
    class 15th_252D_NCO_Vulcan_Two_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (NCO - Vulcan 2)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_Two_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_Two_CO.paa"};};
    }
    class 15th_252D_Custom_Buddy_dp: 15th_252D_Enlisted_Reserves_dp
    {
		displayName="[15th] CH252D Helmet (Custom_Buddy_DP)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Buddy_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Buddy_CO.paa"};};
    };
    class 15th_252D_Custom_Jon_dp: 15th_252D_Enlisted_Reserves_dp
    {
		displayName="[15th] CH252D Helmet (Custom_Jon_DP)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Jon_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Jon_CO.paa"};};
    };
    class 15th_252D_Custom_Joppa_dp: 15th_252D_Enlisted_Reserves_dp
    {
		displayName="[15th] CH252D Helmet (Custom_Joppa_DP)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Joppa_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Joppa_CO.paa"};};
    };
    class 15th_252D_Custom_Muzthag_dp: 15th_252D_Enlisted_Reserves_dp
    {
		displayName="[15th] CH252D Helmet (Custom_Muzthag_DP)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Muzthag_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Muzthag_CO.paa"};};
    };
    class 15th_252D_Custom_Noble_dp: 15th_252D_Enlisted_Reserves_dp
    {
		displayName="[15th] CH252D Helmet (Custom_Noble_DP)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Noble_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Custom_Noble_CO.paa"};};
    };
    class 15th_252D_Rainbow_dp: 15th_252D_Enlisted_Reserves_dp
    {
		displayName="[15th] CH252D Helmet (Rainbow_DP)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Rainbow_CO.paa"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Rainbow_CO.paa"};};
    };
};