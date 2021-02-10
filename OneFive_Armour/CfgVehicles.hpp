class CfgVehicles
{

	class NSM_neutral_XD_1_backpack;    
    class 15th_COOL_NEW_JUMPPACK: NSM_neutral_XD_1_backpack
    {
        scope = 2;

        // wowe daz me 😊
        author = "NSM and Duke";
        displayname = "[15th] Bullfrog Command Pack"; //Name this to whatever you want
        NSM_jumppack_is_jumppack = 1; // 1 means yes, 0 means no.

        // In seconds, I would not reccomend making 
        // this less then 1 just to account for user lag/network lag.
        NSM_jumppack_spam_delay = 1;

        // How much energy the pack has, think of like fuel.
        NSM_jumppack_energy_capacity = 200; 
        NSM_jumppack_recharge = 5; // How much energy per second is regenerated.


        // This is a little bit ugly
        // I wish there was a JSON/Dictonary
        // config way do doing this, but the 
        // cloest is hashmaps from CBA
        // but thats a script thing not
        // config, RIP cpp :)
        NSM_jumppack_jump_types[] = {
            {
                "Forward Jump",// Name of jump
                {
                    12,     //forward velo(0)
                    20,     //verticle velo(1)
                    50,     //cost(2)
                    0,      //angle(3)
                    0,      //directional(4)(no=0,yes=1)?
                    0       //can prone jump(5)(no=0,yes=1)?
                }
            },
            {"Short Jump",{25,7,20,0,1,1}}
        };

        // I wouldnt reccomend changing these below.
        // Mainly because...idk. I just think its a little
        // bit complicated the way I set it up.
        // I will try to make it easier in future
        // to add stuff, mainly particle effects
        NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; 
        NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};

        //Obviously do watever u want here
        model = "OPTRE_Weapons\Backpacks\jetpack.p3d";
        maximumload = 350;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"OPTRE_Weapons\Backpacks\data\jetpack_co"};
        picture = "NSM_Objects\icon.paa";
    };
};