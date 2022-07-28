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

    int farmstead_enemy_RanIndex = 0+ (rand() % 5);
    string enemy;

    string generateEnemy() {
        string area_choice = "F";
        if (area_choice != "F") {
            string brigand_spawn[5] = { "Brigand Cutthroat", "Brigand Fusilier", "Brigand Bloodletter", "Brigand Raider", "Brigand Hunter" };
            string bone_spawn[5] = {};
        }
        else if (area_choice == "F") {
            string astral_spawn[5] = { "Eternal Labourer", "Astral Horse", "Millmaster", "Scarecrow", "Foreman" };
            enemy = astral_spawn[farmstead_enemy_RanIndex];
        }
        return enemy;
    }

    void bossChance() {
            int boss_chance = 1+ (rand() % 100);
            if (boss_chance == 1) {
                string boss_spawn[6] = { "The Collector", "Shambler", "Thing from the Stars", "The Shrieker", "The Brigand Vvulf", "The Fanatic" };
            }
            else {
                return;
            }
        }

    //combat engine
    void combatEngine() {
        bossChance();
        cout << "If this displays, this function has been reached. ";
    }
