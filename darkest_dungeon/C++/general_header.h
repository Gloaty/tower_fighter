#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <time.h>

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

//combat variables
std::string enemy;
std::string prophet_boss;
std::string carpentry_sizes;
std::string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i = 0;

std::string generateEnemy() {
    std::string area_choice;
    std::string global_enemies[22] = {"Cultist Brawler", "Cultist Acolyte", "Brigand Cutthroat", "Brigand Fusilier", "Brigand Bloodletter", "Brigand Raider", "Brigand Hunter", 
    "Madman", "Maggot", "Webber", "Spitter", "Bone Rabble", "Ghoul", "Gargoyle", "Supplicant", "Sycophant", "Gatekeeper", "Chevalier", "Pliskin", "Rattler", "Adder", "Pyre"};
    //global enemies continued
    std::cout << "Length of Global Enemies: " << sizeof(global_enemies) / sizeof(global_enemies[0]) << std::endl;
    if (area_choice == "R") {
        std::string bone_spawn[7] = { "Bone Soldier", "Bone Courtier", "Bone Arbalest", "Bone Defender", "Bone Spearman", "Bone Captain", "Bone Bearer" };
        std::string necromancer_difficulties[2] = { "Apprentice Necromancer", "Veteran Necromancer" };
        std::string prophet_boss = "Prophet";
        if (enemy == prophet_boss) {
            std::string carpentry_sizes[3] = { "Small Pew", "Medium Pew", "Large Pew" };
        }
    }
    else if (area_choice == "F") {
        std::string astral_spawn[4] = { "Eternal Labourer", "Astral Horse", "Scarecrow", "Foreman" };
        int farmstead_enemy_RanIndex = 0+ (rand() % 4);
        std::string millmaster_boss = "Millmaster";
        enemy = astral_spawn[farmstead_enemy_RanIndex];
    }
    else if (area_choice == "C") {
        std::string bloodsucker_spawn[2] = { "Manservant", "Esquire", };
    }
    else if (area_choice.find(ascii) != std::string::npos) {
        std::string testing_enemies[2] = { "Testing Enemy", "Testing Enemy 2" };
        int testing_enemy_RanIndex = 0+ (rand() % 2);
        enemy = testing_enemies[testing_enemy_RanIndex];
    }
    return enemy;
}

void randomBossChance() {
    int boss_chance = 1+ (rand() % 100);
    if (boss_chance == 1) {
        std::string boss_spawn[5] = { "The Collector", "Thing from the Stars", "The Shrieker", "The Brigand Vvulf", "The Fanatic" };
        int boss_RanIndex = 0+ (rand() % 5);
        enemy = boss_spawn[boss_RanIndex];
    }
    else {
        return;
    }
}

//combat engine
void combatEngine() {
    randomBossChance();
    if (enemy == prophet_boss) {
        int i = 0;
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
    std::cout << "If this displays, this function has been reached. ";
}