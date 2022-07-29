#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <time.h>

using namespace std;

void goldCheck() {
    int gold;
    string inventory;
    string battle_riches;
    string abnormal_inventory = "None";
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
string enemy;
string monster;
string prophet_boss;
string carpentry_sizes;
int i = 0;
int carpentry_RanIndex = 0+ (rand() % 3);
int farmstead_enemy_RanIndex;

string generateEnemy() {
    string area_choice;
    string global_enemies[6] = {"Cultist Brawler", "Brigand Cutthroat", "Brigand Fusilier", "Brigand Bloodletter", "Brigand Raider", "Brigand Hunter", };
    string enemy;
    if (area_choice == "R") {
        string bone_spawn[7] = { "Bone Soldier", "Bone Courtier", "Bone Arbalest", "Bone Defender", "Bone Spearman", "Bone Captain", "Bone Bearer" };
        string necromancer_difficulties[2] = { "Apprentice Necromancer", "Veteran Necromancer" };
        string prophet_boss = "Prophet";
        if (monster == prophet_boss) {
            string carpentry_sizes[3] = { "Small Pew", "Medium Pew", "Large Pew" };
        }
    }
    else if (area_choice == "F") {
        string astral_spawn[4] = { "Eternal Labourer", "Astral Horse", "Scarecrow", "Foreman" };
        int farmstead_enemy_RanIndex = 0+ (rand() % (sizeof(astral_spawn)));
        string millmaster_boss = "Millmaster";
        enemy = astral_spawn[farmstead_enemy_RanIndex];
    }
    else if (area_choice == "C") {
        string bloodsucker_spawn[2] = { "Manservant", "Esquire", };
    }
    return enemy;
}

void randomBossChance() {
    int boss_chance = 1+ (rand() % 100);
    if (boss_chance == 1) {
        string boss_spawn[5] = { "The Collector", "Thing from the Stars", "The Shrieker", "The Brigand Vvulf", "The Fanatic" };
        int boss_RanIndex = 0+ (rand() % (sizeof(boss_spawn)));
        enemy = boss_spawn[boss_RanIndex];
    }
    else {
        return;
    }
}

//combat engine
void combatEngine() {
    randomBossChance();
    if (monster == prophet_boss) {
        int i = 0;
        for (i = 0; i == 3; i++) {
            monster = carpentry_sizes[carpentry_RanIndex];
        }
        if (i > 3) {
            monster = prophet_boss;
        }
        else {
            return;
        }
    }
    cout << "If this displays, this function has been reached. ";
}