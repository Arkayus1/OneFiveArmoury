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
    class 15th_252D_Medic_Reserves: 15th_252D_Base
    {
		displayName="[15th] CH252D Helmet (Medic)";
		hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"OneFive_Armour\Data\Helmets\15th_252D_Medic_Reserves_CO.paa.paa", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
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

