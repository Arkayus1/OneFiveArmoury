class CfgWeapons
{
    class VES_M52D_Rifleman;
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
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_V1_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_V1_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Enlisted_Vulcan_Two: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Enlisted - Vulcan 2)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_V2_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Enlisted_V2_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Medic_Vulcan_One: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Medic - Vulcan 1)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_V1_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_V1_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_Medic_Vulcan_Two: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (Medic - Vulcan 2)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_V2_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_V2_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_NCO_Vulcan_One: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (NCO - Vulcan 1)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_V1_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_V1_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
    };
    class 15th_252D_NCO_Vulcan_Two: 15th_252D_Enlisted_Reserves
    {
		displayName="[15th] CH252D Helmet (NCO - Vulcan 2)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_V2_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_NCO_V2_CO.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
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
        displayName="[15th] CH252D Helmet (DP)";
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
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa"};};
    }
    class 15th_252D_Enlisted_Vulcan_One_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_One_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_One_CO.paa"};};
    }
    class 15th_252D_Enlisted_Vulcan_Two_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_Two_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Enlisted_Vulcan_Two_CO.paa"};};
    }
    class 15th_252D_Medic_Vulcan_One_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_One_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_One_CO.paa"};};
    }
    class 15th_252D_Medic_Vulcan_Two_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_Two_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_Medic_Vulcan_Two_CO.paa"};};
    }
    class 15th_252D_NCO_Vulcan_One_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_One_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_One_CO.paa"};};
    }
    class 15th_252D_NCO_Vulcan_Two_dp: 15th_252D_Enlisted_Reserves_dp
    {
	  displayName="[15th] CH252D Helmet (DP)";
        hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_Two_CO.paa"};
        class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\OneFive_Armour\Data\Helmets\15th_252D_NCO_Vulcan_Two_CO.paa"};};
    }
    
};