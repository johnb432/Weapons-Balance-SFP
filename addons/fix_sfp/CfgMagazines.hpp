class CfgMagazines {
    class CA_Magazine;
    class 150Rnd_762x51_Box;
    class 30Rnd_9x21_Mag;
    class 30Rnd_556x45_Stanag;
    class 200Rnd_556x45_Box_Red_F;

    class sfp_50Rnd_762x51_ksp58: 150Rnd_762x51_Box {
        mass = 25.41;
    };
    class sfp_50Rnd_762x51_ksp58_ap: sfp_50Rnd_762x51_ksp58 {
        mass = 25.41;
    };
    class sfp_50Rnd_762x51_ksp58_irTracer: sfp_50Rnd_762x51_ksp58 {
        mass = 25.41;
    };
    class sfp_100Rnd_762x51_ksp58: sfp_50Rnd_762x51_ksp58 {
        mass = 32.34;
    };
    class sfp_249Rnd_762x51_ksp58: sfp_50Rnd_762x51_ksp58 {
        mass = 72;
    };

    class sfp_30Rnd_9mm_mp5: 30Rnd_9x21_Mag {
        mass = 10;
    };

    class sfp_200Rnd_556x45_ksp90: 200Rnd_556x45_Box_Red_F {
        mass = 51.65;
    };

    class sfp_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag {
        mass = 9.35;
    };

    class sfp_30Rnd_556x45_Stanag_g36: sfp_30Rnd_556x45_Stanag {
        mass = 8;
    };

    class sfp_20Rnd_762x51_ak4: CA_Magazine {
        mass = 16.24;
    };

    class sfp_riflegrenade_smoke_ak4: sfp_20Rnd_762x51_ak4 {
        mass = 8;
    };

    class sfp_12Gauge_8rd_Slug: 30Rnd_556x45_Stanag {
        displayname = "12G 8Rnd Buckshot";
        mass = 8.8;
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "";
    };
    class sfp_12Gauge_8rd_Pellets: 30Rnd_556x45_Stanag {
        displayname = "12G 8Rnd Slug";
        mass = 8.8;
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "";
    };
};
