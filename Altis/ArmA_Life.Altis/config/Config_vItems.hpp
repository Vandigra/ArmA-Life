/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "huntingKit", "pickaxe", "toolkit", "toolbox", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw", "rubbellos" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };

    // Teile Shops für das Schrottplatzfarmen
    class car_part_market {
        name = "Old Car Parts";
        side = "civ";
        conditions = "";
        items[] = { "qua_lenker", "qua_sitzbank", "qua_felge", "qua_gepaeck_vorne", "qua_gepaeck_hinten", "qua_bremsscheibe", "qua_bremsklotz", "qua_lenkachse", "qua_federung", "qua_getriebe", "qua_ruecklicht_links", "qua_ruecklicht_rechts",
        "qua_frontlicht_links", "qua_frontlicht_rechts", "qua_tank", "qua_kuehlergrill", "qua_kuehler", "qua_zylinder", "qua_zuendkerze",
        "hatch_lenkrad", "hatch_rueckbank", "hatch_sitz_vorne", "hatch_motorhaube", "hatch_bremsscheibe", "hatch_bremsklotz", "hatch_lenkachse", "hatch_federung", "hatch_getriebe", "hatch_ruecklicht_links", "hatch_ruecklicht_rechts",
        "hatch_frontlicht_links", "hatch_frontlicht_rechts", "hatch_tank", "hatch_kuehlergrill", "hatch_kuehler", "hatch_Zylinder", "hatch_zuendkerze", "hatch_Kofferraum", "hatch_stossfaenger_vorne", "hatch_stossfaenger_hinten", "hatch_rueckspiegel",
        "hatch_aussenspiegel", "hatch_katalysator", "hatch_endtopf", "hatch_felge", "hatch_frontscheibe", "hatch_seitenscheibe", "hatch_dachscheibe", "hatch_schaltung", "Hatch_pedal_gas", "hatch_pedal_bremse", "hatch_pedal_kupplung", "hatch_tuergriff",
        "hatch_tuer_vorne_links", "hatch_tuer_vorne_rechts", "hatch_tuer_hinten_links", "hatch_tuer_hinten_rechts",
        "off_lenkrad", "off_sitz", "off_motorhaube", "off_bremsscheibe", "off_bremsklotz", "off_lenkachse", "off_federung", "off_getriebe", "off_ruecklicht_links", "off_ruecklicht_rechts", "off_frontlicht_links", "off_frontlicht_rechts", "off_tank",
        "off_kuehlergrill", "off_kuehler", "off_zylinder", "off_zuendkerze", "off_kofferaum", "off_stossfaenger_vorne", "off_stossfaenger_hinten", "off_rueckspiegel", "off_aussenspiegel", "off_katalysator", "off_endtopf", "off_felge", "off_frontscheibe",
        "off_seitenscheibe", "off_heckscheibe", "off_schaltung", "off_pedal_gas", "off_pedal_bremse", "off_pedal_kupplung", "off_tuergriff", "off_tuer_links", "off_tuer_rechts",
        "suv_lenkrad", "suv_rueckbank", "suv_sitz_vorne", "suv_motorhaube", "suv_bremsscheibe", "suv_bremsklotz", "suv_lenkachse", "suv_federung", "suv_getriebe", "suv_ruecklicht_links", "suv_ruecklicht_rechts", "suv_frontlicht_links", "suv_frontlicht_rechts",
        "suv_tank", "suv_kuehlergrill", "suv_kuehler", "suv_zylinder", "suv_zuendkerze", "suv_kofferraum", "suv_stossfaenger_vorne", "suv_stossfaenger_hinten", "suv_rueckspiegel", "suv_aussenspiegel_links", "suv_aussenspiegel_rechts", "suv_katalysator",
        "suv_endtopf", "suv_felge", "suv_frontscheibe", "suv_seitenscheibe", "suv_heckscheibe", "suv_dachscheibe", "suv_schaltung", "suv_pedal_gas", "suv_pedal_bremse", "suv_pedal_kupplung", "suv_tuergriff", "suv_tuer_links", "suv_tuer_rechts",
        "kart_lenkrad", "kart_sitz", "kart_felge", "kart_bremsscheibe", "kart_bremsklotz", "kart_lenkachse", "kart_tank", "kart_getriebe", "kart_kuehler", "kart_katalysator", "kart_endtopf", "kart_zylinder", "kart_zuendkerze", "kart_stossfaenger_vorne",
        "kart_stossfaenger_hinten",
        "off2_lenkrad", "off2_sitz", "off2_motorhaube", "off2_bremsscheibe", "off2_bremsklotz", "off2_lenkachse", "off2_federung", "off2_getriebe", "off2_ruecklicht_links", "off2_ruecklicht_rechts", "off2_frontlicht_links", "off2_frontlicht_rechts",
        "off2_tank", "off2_kuehlergrill", "off2_kuehler", "off2_zylinder", "off2_zuendkerze", "off2_kofferaum", "off2_stossfaenger_vorne", "off2_stossfaenger_hinten", "off2_rueckspiegel", "off2_aussenspiegel", "off2_katalysator", "off2_endtopf",
        "off2_felge", "off2_frontscheibe", "off2_seitenscheibe", "off2_heckscheibe", "off2_schaltung", "off2_pedal_gas", "off2_pedal_bremse", "off2_pedal_kupplung", "off2_tuergriff", "off2_tuer_links", "off2_tuer_rechts" };
    };

    class truck_market {
        name = "Old Truck Parts";
        side = "civ";
        conditions = "";
        items[] = {};
    };

    class air_market {
        name = "Old Air Parts";
        side = "civ";
        conditions = "";
        items[] = {};
    }
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class huntingKit {
        variable = "huntingKit";
        displayName = "STR_Item_huntingKit";
        weight = 2;
        buyPrice = 800;
        sellPrice = 400;
        illegal = false;
        edible = -1;
        icon = "icons\ico_huntingKit.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class toolbox {
        variable = "toolbox";
        displayName = "STR_Item_Toolbox";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 3500;
        sellPrice = 2560;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 2800;
        sellPrice = 2350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };

    class rubbellos {
        variable = "rubbellos";
        displayName = "STR_Item_rubbellos";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    // Fahrzeugteile: Schrottplatz und Neue
    class qua_lenker {
        variable = "quaLenker";
        displayName = "STR_Item_Qua_Lenker";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_sitzbank {
        variable = "quaSitzbank";
        displayName = "STR_Item_Qua_Sitzbank";
        weight = 8;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_felge {
        variable = "quaFelge";
        displayName = "STR_Item_Qua_Felge";
        weight = 8;
        buyPrice = 100;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_gepaeck_vorne {
        variable = "quaGepaeckVorne";
        displayName = "STR_Item_Qua_Gepaeck_Vorne";
        weight = 8;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_gepaeck_hinten {
        variable = "quaGepaeckHinten";
        displayName = "STR_Item_Qua_Gepaeck_Hinten";
        weight = 8;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_bremsscheibe {
        variable = "quaBremsscheibe";
        displayName = "STR_Item_Qua_Bremsscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_bremsklotz {
        variable = "quaBremsklotz";
        displayName = "STR_Item_Qua_Bremsklotz";
        weight = 3;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_lenkachse {
        variable = "quaLenkachse";
        displayName = "STR_Item_Qua_Lenkachse";
        weight = 8;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_federung {
        variable = "quaFederung";
        displayName = "STR_Item_Qua_Federung";
        weight = 8;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_getriebe {
        variable = "quaGetriebe";
        displayName = "STR_Item_Qua_Getriebe";
        weight = 12;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_ruecklicht_links {
        variable = "quaRuecklichtLinks";
        displayName = "STR_Item_Qua_Ruecklicht_Links";
        weight = 2;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_ruecklicht_rechts {
        variable = "quaRuecklichtRechts";
        displayName = "STR_Item_Qua_Ruecklicht_Rechts";
        weight = 2;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_frontlicht_links {
        variable = "quaFrontlichtLinks";
        displayName = "STR_Item_Qua_Frontlicht_Links";
        weight = 2;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_frontlicht_rechts {
        variable = "quaFrontlichtRechts";
        displayName = "STR_Item_Qua_Frontlicht_Rechts";
        weight = 2;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_tank {
        variable = "quaTank";
        displayName = "STR_Item_Qua_Tank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_kuehlergrill {
        variable = "quaKuehlergrill";
        displayName = "STR_Item_Qua_Kuehlergrill";
        weight = 4;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_kuehler {
        variable = "quaKuehler";
        displayName = "STR_Item_Qua_Kuehler";
        weight = 12;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_zylinder {
        variable = "quaZylinder";
        displayName = "STR_Item_Qua_Zylinder";
        weight = 15;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class qua_zuendkerze {
        variable = "quaZuendkerze";
        displayName = "STR_Item_Qua_Zuendkerze";
        weight = 1;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_lenkrad {
        variable = "hatchLenkrad";
        displayName = "STR_Item_Hatch_Lenkrad";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_rueckbank {
        variable = "hatchRueckbank";
        displayName = "STR_Item_Hatch_Rueckbank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_sitz_vorne {
        variable = "hatchSitzVorne";
        displayName = "STR_Item_Hatch_Sitz_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_motorhaube {
        variable = "hatchMotorhaube";
        displayName = "STR_Item_Hatch_Motorhaube";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_bremsscheibe {
        variable = "hatchBremsscheibe";
        displayName = "STR_Item_Hatch_Bremsscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_bremsklotz {
        variable = "hatchBremsklotz";
        displayName = "STR_Item_Hatch_Bremsklotz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_lenkachse {
        variable = "hatchLenkachse";
        displayName = "STR_Item_Hatch_Lenkachse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_federung {
        variable = "hatchFederung";
        displayName = "STR_Item_Hatch_Federung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_getriebe {
        variable = "hatchGetriebe";
        displayName = "STR_Item_Hatch_Getriebe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_ruecklicht_links {
        variable = "hatchRuecklichtLinks";
        displayName = "STR_Item_Hatch_Ruecklicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_ruecklicht_rechts {
        variable = "hatchRuecklichtRechts";
        displayName = "STR_Item_Hatch_Ruecklicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_frontlicht_link {
        variable = "hatchFrontlichtLinks";
        displayName = "STR_Item_Hatch_Frontlicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_frontlicht_rechts {
        variable = "hatchFrontlichtRechts";
        displayName = "STR_Item_Hatch_Frontlicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_tank {
        variable = "hatchTank";
        displayName = "STR_Item_Hatch_Tank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_kuehlergrill {
        variable = "hatchKuehlergrill";
        displayName = "STR_Item_Hatch_Kuehlergrill";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_kuehler {
        variable = "hatchKuehler";
        displayName = "STR_Item_Hatch_Kuehler";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_zylinder {
        variable = "hatchZylinder";
        displayName = "STR_Item_Hatch_Zylinder";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_zuendkerze {
        variable = "hatchZuendkerze";
        displayName = "STR_Item_Hatch_Zuendkerze";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_kofferraum {
        variable = "hatchKofferraum";
        displayName = "STR_Item_Hatch_Kofferraum";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_stossfaenger_vorne {
        variable = "hatchStossfaengerVorne";
        displayName = "STR_Item_Hatch_Stossfaenger_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_stossfaenger_hinten {
        variable = "hatchStossfaengerHinten";
        displayName = "STR_Item_Hatch_Stossfaenger_Hinten";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_rueckspiegel {
        variable = "hatchRueckspiegel";
        displayName = "STR_Item_Hatch_Rueckspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_aussenspiegel {
        variable = "hatchAussenspiegel";
        displayName = "STR_Item_Hatch_Aussenspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_katalysator {
        variable = "hatchKatalysator";
        displayName = "STR_Item_Hatch_Katalysator";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_endtopf {
        variable = "hatchEndtopf";
        displayName = "STR_Item_Hatch_Endtopf";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_felge {
        variable = "hatchFelge";
        displayName = "STR_Item_Hatch_Felge";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_frontscheibe {
        variable = "hatchFrontscheibe";
        displayName = "STR_Item_Hatch_Frontscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_seitenscheibe {
        variable = "hatchSeitenscheibe";
        displayName = "STR_Item_Hatch_Seitenscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_dachscheibe {
        variable = "hatchDachscheibe";
        displayName = "STR_Item_Hatch_Dachscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_schaltung {
        variable = "hatchSchaltung";
        displayName = "STR_Item_Hatch_Schaltung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_pedal_gas {
        variable = "hatchPedalGas";
        displayName = "STR_Item_Hatch_Pedal_Gas";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_pedal_bremse {
        variable = "hatchPedalBremse";
        displayName = "STR_Item_Hatch_Pedal_Bremse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_pedal_kupplung {
        variable = "hatchPedalKupplung";
        displayName = "STR_Item_Hatch_Pedal_Kupplung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_tuergriff {
        variable = "hatchTuergriff";
        displayName = "STR_Item_Hatch_Tuergriff";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_tuer_vorne_links {
        variable = "hatchTuerVorneLinks";
        displayName = "STR_Item_Hatch_Tuer_Vorne_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_tuer_vorne_rechts {
        variable = "hatchTuerVorneRechts";
        displayName = "STR_Item_Hatch_Tuer_Vorne_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_tuer_hinten_links {
        variable = "hatchTuerHintenLinks";
        displayName = "STR_Item_Hatch_Tuer_Hinten_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class hatch_tuer_hinten_rechts {
        variable = "hatchTuerHintenRechts";
        displayName = "STR_Item_Hatch_Tuer_Hinten_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_lenkrad {
        variable = "offLenkrad";
        displayName = "STR_Item_Off_Lenkrad";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_sitz {
        variable = "offSitz";
        displayName = "STR_Item_Off_Sitz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_motorhaube {
        variable = "offMotorhaube";
        displayName = "STR_Item_Off_Motorhaube";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_bremsscheibe {
        variable = "offBremsscheibe";
        displayName = "STR_Item_Off_Bremsscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_bremsklotz {
        variable = "offBremsklotz";
        displayName = "STR_Item_Off_Bremsklotz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_lenkachse {
        variable = "offLenkachse";
        displayName = "STR_Item_Off_Lenkachse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_federung {
        variable = "offFederung";
        displayName = "STR_Item_Off_Federung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_getriebe {
        variable = "offGetriebe";
        displayName = "STR_Item_Off_Getriebe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_ruecklicht_links {
        variable = "offRuecklichtLinks";
        displayName = "STR_Item_Off_Ruecklicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_ruecklicht_rechts {
        variable = "offRuecklichtRechts";
        displayName = "STR_Item_Off_Ruecklicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_frontlicht_links {
        variable = "offFrontlichtLinks";
        displayName = "STR_Item_Off_Frontlicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_frontlicht_rechts {
        variable = "offFrontlichtRechts";
        displayName = "STR_Item_Off_Frontlicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_tank {
        variable = "offTank";
        displayName = "STR_Item_Off_Tank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_kuehlergrill {
        variable = "offKuehlergrill";
        displayName = "STR_Item_Off_Kuehlergrill";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_kuehler {
        variable = "offKuehler";
        displayName = "STR_Item_Off_Kuehler";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_zylinder {
        variable = "offZylinder";
        displayName = "STR_Item_Off_Zylinder";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_zuendkerze {
        variable = "offZuendkerze";
        displayName = "STR_Item_Off_Zuendkerze";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_kofferaum {
        variable = "offKofferraum";
        displayName = "STR_Item_Off_Kofferraum";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_stossfaenger_vorne {
        variable = "offStossfaengerVorne";
        displayName = "STR_Item_Off_Stossfaenger_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_stossfaenger_hinten {
        variable = "offStossfaengerHinten";
        displayName = "STR_Item_Off_Stossfaenger_Hinten";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_rueckspiegel {
        variable = "offRueckspiegel";
        displayName = "STR_Item_Off_Rueckspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_aussenspiegel {
        variable = "offAussenspiegel";
        displayName = "STR_Item_Off_Aussenspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_katalysator {
        variable = "offKatalysator";
        displayName = "STR_Item_Off_Katalysator";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_endtopf {
        variable = "offEndtopf";
        displayName = "STR_Item_Off_Endtopf";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_felge {
        variable = "offFelge";
        displayName = "STR_Item_Off_Felge";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_frontscheibe {
        variable = "offFrontscheibe";
        displayName = "STR_Item_Off_Frontscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_seitenscheibe {
        variable = "offSeitenscheibe";
        displayName = "STR_Item_Off_Seitenscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_heckscheibe {
        variable = "offHeckscheibe";
        displayName = "STR_Item_Off_Heckscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_schaltung {
        variable = "offSchaltung";
        displayName = "STR_Item_Off_Schaltung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_pedal_gas {
        variable = "offPedalGas";
        displayName = "STR_Item_Off_Pedal_Gas";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_pedal_bremse {
        variable = "offPedalBremse";
        displayName = "STR_Item_Off_Pedal_Bremse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_pedal_kupplung {
        variable = "offPedalKupplung";
        displayName = "STR_Item_Off_Pedal_Kupplung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_tuergriff {
        variable = "offTuergriff";
        displayName = "STR_Item_Off_Tuergriff";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_tuer_links {
        variable = "offTuerLinks";
        displayName = "STR_Item_Off_Tuer_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off_tuer_rechts {
        variable = "offTuerRechts";
        displayName = "STR_Item_Off_Tuer_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_lenkrad {
        variable = "suvLenkrad";
        displayName = "STR_Item_Suv_Lenkrad";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_rueckbank {
        variable = "suvRueckbank";
        displayName = "STR_Item_Suv_Rueckbank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_sitz_vorne {
        variable = "suvSitzVorne";
        displayName = "STR_Item_Suv_Sitz_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_motorhaube {
        variable = "suvMotorhaube";
        displayName = "STR_Item_Suv_Motorhaube";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_bremsscheibe {
        variable = "suvBremsscheibe";
        displayName = "STR_Item_Suv_Bremsscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_bremsklotz {
        variable = "suvBremsklotz";
        displayName = "STR_Item_Suv_Bremsklotz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_lenkachse {
        variable = "suvLenkachse";
        displayName = "STR_Item_Suv_Lenkachse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_federung {
        variable = "suvFederung";
        displayName = "STR_Item_Suv_Federung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_getriebe {
        variable = "suvGetriebe";
        displayName = "STR_Item_Suv_Getriebe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_ruecklicht_links {
        variable = "suvRuecklichtLinks";
        displayName = "STR_Item_Suv_Ruecklicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_ruecklicht_rechts {
        variable = "suvRuecklichtRechts";
        displayName = "STR_Item_Suv_Ruecklicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_frontlicht_links {
        variable = "suvFrontlichtLinks";
        displayName = "STR_Item_Suv_Frontlicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_frontlicht_rechts {
        variable = "suvFrontlichtRechts";
        displayName = "STR_Item_Suv_Frontlicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_tank {
        variable = "suvTank";
        displayName = "STR_Item_Suv_Tank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_kuehlergrill {
        variable = "suvKuehlergrill";
        displayName = "STR_Item_Suv_Kuehlergrill";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_kuehler {
        variable = "suvKuehler";
        displayName = "STR_Item_Suv_Kuehler";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_zylinder {
        variable = "suvZylinder";
        displayName = "STR_Item_Suv_Zylinder";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_zuendkerze {
        variable = "suvZuendkerze";
        displayName = "STR_Item_Suv_Zuendkerze";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_kofferraum {
        variable = "suvKofferraum";
        displayName = "STR_Item_Suv_Kofferraum";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_stossfaenger_vorne {
        variable = "suvStossfaengerVorne";
        displayName = "STR_Item_Suv_Stossfaenger_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_stossfaenger_hinten {
        variable = "suvStossfaengerHinten";
        displayName = "STR_Item_Suv_Stossfaenger_Hinten";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_rueckspiegel {
        variable = "suvRueckspiegel";
        displayName = "STR_Item_Suv_Rueckspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_aussenspiegel_links {
        variable = "suvAussenspiegelLinks";
        displayName = "STR_Item_Suv_Aussenspiegel_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_aussenspiegel_rechts {
        variable = "suvAussenspiegelRechts";
        displayName = "STR_Item_Suv_Aussenspiegel_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_katalysator {
        variable = "suvKatalysator";
        displayName = "STR_Item_Suv_Katalysator";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_endtopf {
        variable = "suvEndtopf";
        displayName = "STR_Item_Suv_Endtopf";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_felge {
        variable = "suvFelge";
        displayName = "STR_Item_Suv_Felge";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_frontscheibe {
        variable = "suvFrontscheibe";
        displayName = "STR_Item_Suv_Frontscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_seitenscheibe {
        variable = "suvSeitenscheibe";
        displayName = "STR_Item_Suv_Seitenscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_heckscheibe {
        variable = "suvHeckscheibe";
        displayName = "STR_Item_Suv_Heckscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_dachscheibe {
        variable = "suvDachscheibe";
        displayName = "STR_Item_Suv_Dachscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_schaltung {
        variable = "suvSchaltung";
        displayName = "STR_Item_Suv_Schaltung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_pedal_gas {
        variable = "suvPedalGas";
        displayName = "STR_Item_Suv_Pedal_Gas";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_pedal_bremse {
        variable = "suvPedalBremse";
        displayName = "STR_Item_Suv_Pedal_Bremse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_pedal_kupplung {
        variable = "suvPedalKupplung";
        displayName = "STR_Item_Suv_Pedal_Kupplung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_tuergriff {
        variable = "suvTuergriff";
        displayName = "STR_Item_Suv_Tuergriff";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_tuer_links {
        variable = "suvTuerLinks";
        displayName = "STR_Item_Suv_Tuer_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class suv_tuer_rechts {
        variable = "suvTuerRechts";
        displayName = "STR_Item_Suv_Tuer_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_lenkrad {
        variable = "kartLenkrad";
        displayName = "STR_Item_Kart_Lenkrad";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_sitz {
        variable = "kartSitz";
        displayName = "STR_Item_Kart_Sitz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_felge {
        variable = "kartFelge";
        displayName = "STR_Item_Kart_Felge";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_bremsscheibe {
        variable = "kartBremsscheibe";
        displayName = "STR_Item_Kart_Bremsscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_bremsklotz {
        variable = "kartBremsklotz";
        displayName = "STR_Item_Kart_Bremsklotz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_lenkachse {
        variable = "kartLenkachse";
        displayName = "STR_Item_Kart_Lenkachse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_tank {
        variable = "kartTank";
        displayName = "STR_Item_Kart_Tank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_getriebe {
        variable = "kartGetriebe";
        displayName = "STR_Item_Kart_Getriebe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_kuehler {
        variable = "kartKuehler";
        displayName = "STR_Item_Kart_Kuehler";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_katalysator {
        variable = "kartKatalysator";
        displayName = "STR_Item_Kart_Katalysator";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_endtopf {
        variable = "kartEndtopf";
        displayName = "STR_Item_Kart_Endtopf";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_zylinder {
        variable = "kartZylinder";
        displayName = "STR_Item_Kart_Zylinder";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_zuendkerze {
        variable = "kartZuendkerze";
        displayName = "STR_Item_Kart_Zuendkerze";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_stossfaenger_vorne {
        variable = "kartStossfaengerVorne";
        displayName = "STR_Item_Kart_Stossfaenger_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class kart_stossfaenger_hinten {
        variable = "kartStossfaengerHinten";
        displayName = "STR_Item_Kart_Stossfaenger_Hinten";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_lenkrad {
        variable = "off2Lenkrad";
        displayName = "STR_Item_Off2_Lenkrad";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_sitz {
        variable = "off2Sitz";
        displayName = "STR_Item_Off2_Sitz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_motorhaube {
        variable = "off2Motorhaube";
        displayName = "STR_Item_Off2_Motorhaube";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_bremsscheibe {
        variable = "off2Bremsscheibe";
        displayName = "STR_Item_Off2_Bremsscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_bremsklotz {
        variable = "off2Bremsklotz";
        displayName = "STR_Item_Off2_Bremsklotz";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_lenkachse {
        variable = "off2Lenkachse";
        displayName = "STR_Item_Off2_Lenkachse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_federung {
        variable = "off2Federung";
        displayName = "STR_Item_Off2_Federung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_getriebe {
        variable = "off2Getriebe";
        displayName = "STR_Item_Off2_Getriebe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_ruecklicht_links {
        variable = "off2RuecklichtLinks";
        displayName = "STR_Item_Off2_Ruecklicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_ruecklicht_recht {
        variable = "off2RuecklichtRechts";
        displayName = "STR_Item_Off2_Ruecklicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_frontlicht_links {
        variable = "off2FrontlichtLinks";
        displayName = "STR_Item_Off2_Frontlicht_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_frontlicht_rechts {
        variable = "off2FrontlichtRechts";
        displayName = "STR_Item_Off2_Frontlicht_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_tank {
        variable = "off2Tank";
        displayName = "STR_Item_Off2_Tank";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_kuehlergrill {
        variable = "off2Kuehlergrill";
        displayName = "STR_Item_Off2_Kuehlergrill";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_Kuehler {
        variable = "off2Kuehler";
        displayName = "STR_Item_Off2_Kuehler";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_zylinder {
        variable = "off2Zylinder";
        displayName = "STR_Item_Off2_Zylinder";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_zuendkerze {
        variable = "off2Zuendkerze";
        displayName = "STR_Item_Off2_Zuendkerze";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_kofferaum {
        variable = "off2Kofferraum";
        displayName = "STR_Item_Off2_Kofferraum";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_stossfaenger_vorne {
        variable = "off2StossfaengerVorne";
        displayName = "STR_Item_Off2_Stossfaenger_Vorne";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_stossfaenger_hinten {
        variable = "off2StossfaengerHinten";
        displayName = "STR_Item_Off2_Stossfaenger_Hinten";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_rueckspiegel {
        variable = "off2Rueckspiegel";
        displayName = "STR_Item_Off2_Rueckspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_aussenspiegel {
        variable = "off2Aussenspiegel";
        displayName = "STR_Item_Off2_Aussenspiegel";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_katalysator {
        variable = "off2Katalysator";
        displayName = "STR_Item_Off2_Katalysator";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_endtopf {
        variable = "off2Endtopf";
        displayName = "STR_Item_Off2_Endtopf";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_felge {
        variable = "off2Felge";
        displayName = "STR_Item_Off2_Felge";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_frontscheibe {
        variable = "off2Frontscheibe";
        displayName = "STR_Item_Off2_Frontscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_seitenscheibe {
        variable = "off2Seitenscheibe";
        displayName = "STR_Item_Off2_Seitenscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_heckscheibe {
        variable = "off2Heckscheibe";
        displayName = "STR_Item_Off2_Heckscheibe";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_schaltung {
        variable = "off2Schaltung";
        displayName = "STR_Item_Off2_Schaltung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_pedal_gas {
        variable = "off2PedalGas";
        displayName = "STR_Item_Off2_Pedal_Gas";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_pedal_bremse {
        variable = "off2PedalBremse";
        displayName = "STR_Item_Off2_Pedal_Bremse";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_pedal_kupplung {
        variable = "off2PedalKupplung";
        displayName = "STR_Item_Off2_Pedal_Kupplung";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_tuergriff {
        variable = "off2Tuergriff";
        displayName = "STR_Item_Off2_Tuergriff";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_tuer_links {
        variable = "off2TuerLinks";
        displayName = "STR_Item_Off2_Tuer_Links";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };

    class off2_tuer_rechts {
        variable = "off2TuerRechts";
        displayName = "STR_Item_Off2_Tuer_Rechts";
        weight = 5;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_empty.paa";
    };
};
