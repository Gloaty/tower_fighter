#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <time.h>

void hamlet() {
    std::cout << "You have returned to the Hamlet" << "\n";
}

void goldCheck() {
    int gold;
    std::string inventory;
    std::string battle_riches;
    std::string abnormal_inventory = "None";
    srand((unsigned) time(NULL));
    int riches_random = 1+ (rand() % 100);

    if (inventory == "250 Gold") {
        gold = gold + 250;
    }
    
    if (inventory == "500 Gold") {
        gold = gold + 500;
    }
    
    if (inventory == "750 Gold") {
        gold = gold + 750;
    }
    
    if (inventory == "Jade") {
        gold = gold + 375;
    }
    
    if (inventory == "Citrine") {
        gold = gold + 250;
    }
    
    if (inventory == "Onyx") {
        gold = gold + 500;
    }
    
    if (inventory == "Minor Antique") {
        gold = gold + 500;   
    }
    
    // abnormal gold
    if (abnormal_inventory == "Consecrated Pew") {
        gold = gold + 5000;
    }
    
    if (abnormal_inventory == "Emerald") {
        gold = gold + 750;
    }
    
    if (abnormal_inventory == "Ruby") {
        gold = gold + 1250;
    }
    
    if(abnormal_inventory == "Rare Antique") {
        gold = gold + 1250;   
    }
    
    if (abnormal_inventory == "Large Antique") {
        gold = gold + 1500;
    }
    
    if (abnormal_inventory == "Jute Tapestry") {
        gold = gold + 1750;   
    }
    
    if (abnormal_inventory == "Puzzling Trapezohedron") {
        gold = gold + 2500;   
    }
    
    if (inventory == "500 Gold") {
        gold = gold + 500;
    }
    
    if (inventory == "750 Gold") {
        gold = gold + 750;
    }
    
    if (inventory == "Jade") {
        gold = gold + 375;
    }
    
    if (inventory == "Citrine") {
        gold = gold + 250;
    }
    
    if (inventory == "Onyx") {
        gold = gold + 500;
    }
    
    if (inventory == "Minor Antique") {
        gold = gold + 500;   
    }

    battle_riches = inventory;
    battle_riches = abnormal_inventory;

}

// health recovery data
std::string place_1_hero;
std::string place_2_hero;
std::string place_3_hero;
std::string place_4_hero;
std::string crusader;
std::string highwayman;
std::string plague_doctor;
std::string vestal;
int crusader_health;
int highwayman_health;
int plague_doctor_health;
int vestal_health;
int crusader_max_health;
int highwayman_max_health;
int plague_doctor_max_health;
int vestal_max_health;
std::string sleep_confirmation = "-";

void healthRecovery() {
    int health_recovery;
    std::cout << "You manage to get some rest in the night. " << "\n";
    if (sleep_confirmation == "+") {
        int sleep_recovery = rand() % 15;
        health_recovery = sleep_recovery;
    }
    else
    std::cout << "You have recovered " << health_recovery << " health. " << "\n";
    if (place_1_hero == crusader) {
        crusader_health += health_recovery;
        if (crusader_health > crusader_max_health) {
            crusader_health = crusader_max_health;
        }
    }
     if (place_2_hero == crusader) {
        crusader_health += health_recovery;
        if (crusader_health > crusader_max_health) {
            crusader_health = crusader_max_health;
        }
    }
    if (place_3_hero == crusader) {
        crusader_health += health_recovery;
        if (crusader_health > crusader_max_health) {
            crusader_health = crusader_max_health;
        }
    }
    if (place_4_hero == crusader) {
        crusader_health += health_recovery;
        if (crusader_health > crusader_max_health) {
            crusader_health = crusader_max_health;
        }
    }
    //highwayman sleep recovery
    if (place_1_hero == highwayman) {
        highwayman_health += health_recovery;
        if (highwayman_health > highwayman_max_health) {
            highwayman_health = highwayman_max_health;
        }
    }
    else if (place_2_hero == highwayman) {
        highwayman_health += health_recovery;
        if (highwayman_health > highwayman_max_health) {
            highwayman_health = highwayman_max_health;
        }
    }
    else if (place_3_hero == highwayman) {
        highwayman_health += health_recovery;
        if (highwayman_health > highwayman_max_health) {
            highwayman_health = highwayman_max_health;
        }
    }
    else if (place_4_hero == highwayman) {
        highwayman_health += health_recovery;
        if (highwayman_health > highwayman_max_health) {
            highwayman_health = highwayman_max_health;
        }
    }
    //plague doctor sleep recovery
    if (place_1_hero == plague_doctor) {
        plague_doctor_health += health_recovery;
        if (plague_doctor_health > plague_doctor_max_health) {
            plague_doctor_health = plague_doctor_max_health;
        }
    }
    else if (place_2_hero == plague_doctor) {
        plague_doctor_health += health_recovery;
        if (plague_doctor_health > plague_doctor_max_health) {
            plague_doctor_health = plague_doctor_max_health;
        }
    }
    else if (place_3_hero == plague_doctor) {
        plague_doctor_health += health_recovery;
        if (plague_doctor_health > plague_doctor_max_health) {
            plague_doctor_health = plague_doctor_max_health;
        }
    }
    else if (place_4_hero == plague_doctor) {
        plague_doctor_health += health_recovery;
        if (plague_doctor_health > plague_doctor_max_health) {
            plague_doctor_health = plague_doctor_max_health;
        }
    }
    //vestal sleep recovery
    if (place_1_hero == vestal) {
        vestal_health += health_recovery;
        if (vestal_health > vestal_max_health) {
            vestal_health = vestal_max_health;
        }
    }
    else if (place_2_hero == vestal) {
        vestal_health += health_recovery;
        if (vestal_health > vestal_max_health) {
            vestal_health = vestal_max_health;
        }
    }
    else if (place_3_hero == vestal) {
        vestal_health += health_recovery;
        if (vestal_health > vestal_max_health) {
            vestal_health = vestal_max_health;
        }
    }
    else if (place_4_hero == vestal) {
        vestal_health += health_recovery;
        if (vestal_health > vestal_max_health) {
            vestal_health = vestal_max_health;
        }
    }
}

//combat variables
std::string enemy;
std::string prophet_boss;
std::string carpentry_sizes;
std::string collected_spawn;
std::string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int herodamage;
int global_or_area_enemy = 0 + (rand() % 2);
int global_or_area_enemy_display = 1;

std::string generateEnemy() {
    std::string area_choice;
    std::string global_enemies[22] = {"Cultist Brawler", "Cultist Acolyte", "Brigand Cutthroat", "Brigand Fusilier", "Brigand Bloodletter", "Brigand Raider", "Brigand Hunter", 
    "Madman", "Maggot", "Webber", "Spitter", "Bone Rabble", "Ghoul", "Gargoyle", "Supplicant", "Sycophant", "Gatekeeper", "Chevalier", "Pliskin", "Rattler", "Adder", "Pyre"};
    int global_RanIndex = 0+ (rand() % (sizeof(global_enemies)/sizeof(global_enemies[0])));
    //global enemies continued
    if (area_choice == "R") {
        //enemies
        std::string ruins_enemies[7] = { "Bone Soldier", "Bone Courtier", "Bone Arbalest", "Bone Defender", "Bone Spearman", "Bone Captain", "Bone Bearer" };
        int ruins_RanIndex = 0+ (rand() % (sizeof(ruins_enemies)/sizeof(ruins_enemies[0])));
        enemy = ruins_enemies[ruins_RanIndex];
        //bosses
        std::string necromancer_difficulties[3] = { "Apprentice Necromancer", "Veteran Necromancer", "Champion Necromancer" };
        std::string prophet_boss = "Prophet";
        if (enemy == prophet_boss) {
            std::string carpentry_sizes[3] = { "Small Pew", "Medium Pew", "Large Pew" };
        }
        if (global_or_area_enemy == 1) {
            enemy = global_enemies[global_RanIndex];
        }
        else if (global_or_area_enemy == 2) {
            enemy = ruins_enemies[ruins_RanIndex];
        }
    }
    else if (area_choice == "WA") {
        //enemies
        std::string warrens_enemies[8] = { "Swine Chopper", "Swine Slasher", "Swine Wretch", "Swine Drummer", "Swinetaur", "Swine Skiver", "Carrion Eater", "Large Carrion Eater"  };
        int warrens_RanIndex = 0+ (rand() % (sizeof(warrens_enemies)/sizeof(warrens_enemies[0])));
        enemy = warrens_enemies[warrens_RanIndex];
        //bosses
        std::string swine_royalty_difficulties[3] = { "Swine Prince", "Wilbur", "Swine King" };
        std::string formless_flesh[4] = { "Flesh Heart", "Flesh Face", "Flesh Bone", "Flesh Butt" };
    }
    else if (area_choice == "WE") {
        std::string weald_enemies_spawn[8] = { "Unclean Giant", "Blighted Giant", "Corrupted Giant", "Fungal Scratcher", "Fungal Artillery", "Necrotic Fungus", "Ectoplasm", "Large Ectoplasm" };
        int  weald_enemies_RanIndex = 0+ (rand() % (sizeof(weald_enemies_spawn)/sizeof(weald_enemies_spawn[0])));
        enemy = weald_enemies_spawn[weald_enemies_RanIndex];
        //bosses
        std::string hag_difficulties[3] = { "Apprentice Hag", "Veteran Hag", "Champion Hag" };
        std::string brigand_pounder = "Brigand Pounder";
    }
    else if (area_choice == "COV") {
        //bosses
        std::string siren_boss = "Siren";
        std::string drowned_crew[2] = { "Drowned Crew", "Drowned Anchorman" };
    }
    else if (area_choice == "F") {
        //enemies
        std::string astral_spawn[5] = { "Farmhand", "Foreman", "Scarecrow", "Plow Horse", "Crystalline Abberation", "Sleeper's Dream", "Sleeper's Herald", 
        "Frozen Farmhand", "Fracture", "Focus Point" };
        //astral spawn continued
        std::string unfinished_abberation = { "Traumatic Unfinished Aberration", "Pestilential Unfinished Aberration", "Temporal Unfinished Aberration", 
        "Unstable Unfinished Aberration", "Adamantite Unfinished Aberration" }
        //bosses
        std::string farmstead_bosses = "Millmaster";
        enemy = astral_spawn[farmstead_enemy_RanIndex];
    }
    else if (area_choice == "COU") {
        std::string bloodsucker_spawn[2] = { "Manservant", "Esquire", };
        int bloodsucker_enemy_RanIndex = 0+ (rand() & (sizeof(bloodsucker_spawn)/sizeof(bloodsucker_spawn[0])));
        enemy = bloodsucker_spawn[bloodsucker_enemy_RanIndex];
    }
    else if (area_choice == "WSWSADADBA") {
        std::string testing_enemies[2] = { "Testing Enemy", "Testing Enemy 2" };
        int testing_enemy_RanIndex = 0+ (rand() % 2);
        enemy = testing_enemies[testing_enemy_RanIndex];
    }
    else if (area_choice.find(ascii) != std::string::npos) {
        enemy = "Omega Darkness";
    }
    return enemy;
}

void randomBossChance() {
    int boss_chance = 1+ (rand() % 100);
    if (boss_chance == 1) {
        std::string boss_spawn[5] = { "The Collector", "Thing from the Stars", "The Shrieker", "The Brigand Vvulf", "The Fanatic" };
        int boss_RanIndex = 0+ (rand() % 5);
        enemy = boss_spawn[boss_RanIndex];
        if (enemy == "The Collector") {
            std::string collected_spawn[3] = { "Collected Highwayman", "Collected Man-at-Arms", "Collected Vestal" };
        }
    }
    else {
        return;
    }
}

//combat engine
void combatEngine() {
    randomBossChance();
    // special enemy cases
    int i = 0;
    if (enemy == prophet_boss) {
        for (i = 0; i == 3; i++) {
            int carpentry_RanIndex = 0+ (rand() % (sizeof(carpentry_sizes)));
            enemy = carpentry_sizes[carpentry_RanIndex];
        }
        if (i > 3) {
            enemy = prophet_boss;
        }
        else {
            return;
        }
    }
    if (enemy == "The Collector") {
        for (i = 0; i == 3; i++) {
            int collected_RanIndex = 0+ (rand() % (sizeof(collected_spawn)));
            enemy = collected_spawn[collected_RanIndex];
        }
        if (i > 3) {
            enemy = "The Collector";
        }
        else {
            return;
        }
    }
    std::cout << "If this displays, this function has been reached. ";
}

//farmstead combat variables
std::string farmstead_choice;
int hamlet_return;

void farmsteadCombatEngine() {
    generateEnemy();
    std::cout << "A terrible " << enemy << " awakens from the astral light. " << "\n";
    std::cout << "What do you do? You may Retreat, Attack or Defend. (R/A/D)" << "\n";
    std::cin >> farmstead_choice;
    if (farmstead_choice == "R") {
        std::string farmstead_retreat;
        std::cout << "Are you confident that you wish to retreat? (Y/N)" << "\n";
        std::cin >> farmstead_retreat;
        if (farmstead_retreat == "Y") {
            std::string retreat_aftermath;
            std::cout << "You have retreated from battle, and are now safe. " << "\n";
            std::cout << "Do you wish to return to the hamlet, re-enter the battle, or rest for a bit? (H/B/R)" << "\n";
            std::cout << "H = Return to the hamlet, B = Re-enter the battle. " << "\n";
            std::cin >> retreat_aftermath;
            if (retreat_aftermath == "H") {
                std::cout << "You have returned to the hamlet. " << "\n";
                hamlet_return = 1;
                return;
            }
            else if (retreat_aftermath == "B") {
                std::cout << "You have re-entered the battle. " << "\n";
                farmsteadCombatEngine();
            }
            else if (retreat_aftermath == "R") {
                std::string farmstead_rest;
                std::cout << "You have chosen to take a small rest. " << "\n";
                std::cout << "You may go to sleep, which will allow you to regain some health, but you may be ambushed in the night. " << "\n";
                std::cout << "Or, you can continue adventuring. " << "\n";
                std::cout << "Do you wish to go to sleep or continue adventuring? (S/C)" << "\n";
                std::cin >> farmstead_rest;
                if (farmstead_rest == "S") {
                    std::cout << "You have chosen to go to sleep. " << "\n";
                    int ambush_chance = rand() % 100 + 1;
                    std::cout << "Ambush chance: " << ambush_chance << "\n";
                    if (ambush_chance <= 30) {
                        std::cout << "You have been ambushed by a group of enemies! " << "\n";
                        std::cout << "Combat is beginning now! " << "\n";
                        farmsteadCombatEngine();
                    }
                    else {
                        sleep_confirmation = "+";
                        healthRecovery();
                    }
                }
            }
            else {
                std::cout << "You have re-entered the battle. " << "\n";
                farmsteadCombatEngine();
            }
        }
        else if (farmstead_retreat == "N") {
            std::cout << "You have decided to not retreat. " << "\n";
            farmsteadCombatEngine();;
        }
        else {
            std::cout << "You have decided to not retreat. " << "\n";
            farmsteadCombatEngine();;
        }
    }
    else if (farmstead_choice == "A") {

    }
}

void farmsteadEndDialogue() {
    std::cout << "Gasping for air, you run away from the horrors of the stars. " << "\n";
    std::cout << "You have returned to the hamlet. " << "\n";
    if (hamlet_return == 1) {
        hamlet_return = 0;
    }
    else {
        return;
    }
}

void betaTestThanks() {
    std::cout << "Thanks for Beta Testing. We seriously appreciate";
    std::cout << " you supporting the development of this small passion project. ";
    std::cout << "We will keep you updated for the future. Have a great day! ";
    std::cout << "Closing Game...";
    std::cout << "You may now close the program. ";
}

int crusaderReroll(){
    while (herodamage < 6) {
        std::cout << "Hero Damage Reroll: OK" << "\n";
        herodamage = 0+ (rand() % 11);
        if (herodamage < 6) {
            crusaderReroll();
        }
        else {
            return herodamage;
        }
    }
}

int closeGame() {
    return 0;
}

void outsideStatementShell() {
    if (hamlet_return ==  1) {
    farmsteadEndDialogue();
    }
    else if (global_or_area_enemy_display == 1) {
        bool i = true;
        while (i == true) {
            std::cout << "Global or Area Enemy Choice: " << global_or_area_enemy << "\n";
        }
    }
    return;
}
//run above function
outsideStatementShell();