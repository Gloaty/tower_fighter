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
int main()
{
    // riches
    // abnormal riches
    int gold = 2500;
    string abnormal_inventory = "None";
    srand((unsigned) time(NULL));
    int riches_random = 1+ (rand() % 100);

    // standard riches
    string standard_riches [7] = { "750 Gold", "500 Gold", "250 Gold", "Citrine", "Jade", "Onyx", "Minor Antique" };
    srand(time(NULL));
    int RanIndex = 0+ (rand() % 7);
    cout << RanIndex;
    string inventory = standard_riches[RanIndex];
    
    // abnormal inventory check
    bool abnormal_inventory_check = abnormal_inventory != "None";
    if (abnormal_inventory_check == '1') {
        inventory = abnormal_inventory;   
    }

    // abnormal inventory random
    int emerald_percentage = 15;
    if (riches_random <= emerald_percentage) {
        abnormal_inventory = "Emerald";
    }

    int sapphire_percentage = 12;
    if (riches_random <= sapphire_percentage) {
        abnormal_inventory = "Sapphire";
    }

    int ruby_percentage = 9;
    if (riches_random <= ruby_percentage) {
        abnormal_inventory = "Ruby";
    }

    int rare_antique_percentage = 7;
    if (riches_random <= rare_antique_percentage) {
        abnormal_inventory = "Rare Antique";
    }
    
    int large_antique_percentage = 5;
    if (riches_random <= large_antique_percentage) {
        abnormal_inventory = "Large Antique";
    }
    
    int jute_tapestry_percentage = 3;
    if (riches_random <= jute_tapestry_percentage) {
        abnormal_inventory = "Jute Tapestry";
    }
    
    int puzzling_trapezohedron_percentage = 2;
    if (riches_random <= puzzling_trapezohedron_percentage) {
        abnormal_inventory = "Puzzling Trapezohedron";
    }
    
    int pew_percentage = 1;
    if (riches_random <= pew_percentage) {
        abnormal_inventory = "Consecrated Pew";
    }
    
    if (abnormal_inventory == "None") {
        abnormal_inventory = inventory;
    }
    
    // standard gold
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
    
    //inventory trackers
    cout << "\n";
    cout << "--------------------------------";
    cout << "\n" << "\n";
    cout << "      INVENTORY TRACKERS";
    cout << "\n" << "\n";
    cout << "--------------------------------";
    cout << "\n";
    inventory = standard_riches[RanIndex];
    cout << "Riches Chance: " << riches_random << "\n";
    cout << "Abnormal Inventory: " << abnormal_inventory << "\n";
    cout << "Inventory: " << inventory << "\n";
    cout << "Gold: " << gold;
    cout << "\n";
    cout << "\n";
    
    // display current date and time
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = std::chrono::system_clock::to_time_t(end);

    cout << "Current Date and Time: " << std::ctime(&end_time);

    //starter heroes
    string highwayman = "Dismas";
    string crusader = "Reynauld";
    string party[4] = {highwayman, crusader, "None", "None"};
    int highwayman_health = 25;
    int highwayman_max_health = 25;
    int place_1_hero_health = highwayman_health;
    int crusader_health = 30;
    int crusader_max_health = 30;
    string place_1_hero = crusader;
    string place_2_hero = highwayman;
    string place_3_hero = "None";
    string place_4_hero = "None";
    int old_road_battle_won = 0;
    string tutorial_skip_warning = "N";

    // sleep random number
    srand(time(0));
    cout << "Random number between -1 and 2. ";
    cout << "Possible outcome are 0 and 1. ";
    cout << abnormal_inventory;
    for(int x=0;x<3;x++);
        int sleep_count = 0+ (rand() % 2);
        cout << "\n";
        cout << "Sleep Output: " << sleep_count;
        cout << "\n";
        if (sleep_count == 0){
          cout << "\n";
          sleep(3);
          goto intro;
        }
        else if (sleep_count == 1){
          cout << "\n";
          sleep(4);
          goto intro;
        }

    // intro text
    intro:{
        cout << "Darkest Dungeon is about making the most of a bad situation. Quests will fail or must be abandoned. " << "\n";
        cout << "Heroes will die. And when they die, they stay dead. Progress autosaves frequently, so actions are" << "\n";
        cout << "permanent. This game expects a lot out of you. How far will you push your adventurers? How much are" << "\n";
        cout << "you willing to risk in your quest to restore the hamlet? What will you sacrifice to save the life of" << "\n";
        cout << "your favorite hero? Thankfully, there are always fresh souls arriving on the stage coach, seeking both" << "\n";
        cout << "adventure and fame in the shadow of the..." << "\n";
        sleep(2);
        cout << "\n";
        cout << "------------------------------------------------------------------------------------------------------";
        cout << "\n";
        cout << "\n";
        cout << "                                     DARKEST DUNGEON" << "\n";
        cout << "                             WARNING: INPUTS MUST BE UPPERCASE!" << "\n";
        char save;
        cout << "                                  START SAVE FILE? (Y/N)";
        cin >> save;
        if (save == 'Y'){
            cout << "\n";
            string hamlet_name;
            cout << "                              INPUT HAMLET NAME IN UPPERCASE!" << "\n";
            cout << "                                  HAMLET NAME: ";
            cin >> hamlet_name;
            cout << "\n";
            cout << "                                   THE " << hamlet_name << " HAMLET";
            cout << "\n";
            int break_counter = 0;
                for(break_counter=0;break_counter<2;break_counter++) {
                    cout << "                                     OPENING SAVE.";
                    sleep(1);
                    cout << "\n";
                    cout << "\n";
                    cout << "                                     -------------";
                    cout << "\n";
                    cout << "\n";
                    cout << "                                     OPENING SAVE..";
                    sleep(1);
                    cout << "\n";
                    cout << "\n";
                    cout << "                                     -------------";
                    cout << "\n";
                    cout << "\n";
                    cout << "                                     OPENING SAVE...";
                    sleep(1);
                    cout << "\n" << "\n";
                    cout << "                                     -------------";
                    cout << "\n" << "\n";
                }
                cout << "\n" << "\n";
                cout << "----------------------------------------------------------------------------------------------------------------------";
                cout << "\n" << "\n";
                cout << "Your journey starts on the old road, overrun by raiders, and many supernatural threats. Purge these fools, as a message" << "\n";
                cout << "to their leaders that the rightful owner had returned, and their kind are no longer welcome. ";
                cout << "\n" << "\n";
                cout << "----------------------------------------------------------------------------------------------------------------------";
                cout << "\n" << "\n";
                int old_road_battle_won = 0;
                char old_road1;
                while(bool x = true) {
                    cout << "Current Heroes: " << crusader << " (Crusader), " << highwayman << " (Highwayman)";
                    cout << "You are currently in a room. The room is empty. All path except the one to the right are blocked by foliage. " << "\n";
                    cout << "Head to the right? (Y/N)";
                    cin >> old_road1;
                    if(old_road1 == 'Y') {
                        sleep(1);
                        char old_road_tent;
                        cout << "Reynauld and Dismas push forward, towards the hamlet. They discover an abandoned tent along the way. Investigate? (Y/N)";
                        cin >> old_road_tent;
                        if (old_road_tent == 'Y') {
                            cout << "\n";
                            cout << "--------------------------------------------------------------------------------------------";
                            cout << "\n" << "\n";
                            cout << highwayman << " reaches inside the tent and pulls out some riches. ";
                            sleep(1);
                            cout << "\n" << "\n";
                            cout << "--------------------------------------------------------------------------------------------";
                            cout << "\n" << "\n";
                            cout << "                                         RICHES";
                            cout << "\n" << "\n";
                            cout << "--------------------------------------------------------------------------------------------";
                            sleep(1);
                            cout << "\n" << "\n";
                            if (abnormal_inventory != "None") {
                                string old_road_fight;
                                cout << "Inside is: ";
                                cout << abnormal_inventory << "\n";
                                cout << "Current Gold: " << gold;
                                cout << "\n" << "\n";
                                cout << "--------------------------------------------------------------------------------------------";
                                cout << "\n" << "\n";
                                cout << "After finding the " + inventory + ", Reynauld and Dismas reach the entrance to the next room. Enter? (Y/N)";
                                cin >> old_road_fight;
                                goto combat;
                            }
                            else if (abnormal_inventory == "None") {
                                string old_road_fight;
                                cout << "Inside is: ";
                                cout << inventory << "\n";
                                cout << "Current Gold: " << gold;
                                cout << "\n" << "\n";
                                cout << "--------------------------------------------------------------------------------------------";
                                cout << "\n" << "\n";
                                cout << "After finding the " + inventory + ", Reynauld and Dismas reach the entrance to the next room. Enter? (Y/N)";
                                cin >> old_road_fight;
                                if (old_road_fight == "Y") {
                                    goto combat;
                                }
                            }
                            combat:{
                                string monster_attacks [3] = {"Point Blank Shot", "Rain of Whips", "Shank"};
                                
                                // monster turn
                                for (int i = 0; i < 10000000000000000; i++) {
                                    string monster_options = "";
                                    int monster_attack_choice = 0+ (rand() % 4);
                                    if (monster_attack_choice == '1') {
                                        string monster_option = "Point Blank Shot";
                                        cout << monster_option;
                                    }
                                    else if (monster_attack_choice == '2') {
                                        string monster_option = "Rain of Whips";
                                        cout << monster_option;
                                    }
                                    else if (monster_attack_choice == '3') {
                                        string monster_option = "Shank";
                                        cout << monster_option;
                                    }
                                int monster_crit_chance = '5';
                                int monster_crit_random = 0+ (rand() % 101);
                                if (monster_options == "Point Blank Shot") {
                                    place_1_hero = crusader;
                                    place_1_hero_health = crusader_health;
                                    place_2_hero = highwayman;
                                    int place_2_hero_health = highwayman_health;
                                    int monster_damage = 0+ (rand() % 8);
                                    int place_1_hero_damage = monster_damage;
                                    int place_2_hero_damage = 0;
                                    if (monster_crit_random <= monster_crit_chance) {
                                        monster_damage = 10;
                                    }
                                if (monster_options == "Rain of Whips") {
                                    place_1_hero = crusader;
                                    place_2_hero = highwayman;
                                    place_1_hero_health = crusader_health;
                                    place_2_hero_health = highwayman_health;
                                    monster_damage = 0+ (rand() % 4);
                                    place_1_hero_damage = monster_damage;
                                    place_2_hero_damage = monster_damage;
                                    if (monster_crit_random <= monster_crit_chance) {
                                        monster_damage = 7;
                                    }
                                else if (monster_options == "Shank") {
                                    int random_target = 0+ (rand() % 3);
                                    cout << "Random Target: " << random_target;
                                    if (random_target == 1) {
                                        place_1_hero = crusader;
                                        place_1_hero_health = crusader_health;
                                        place_2_hero = highwayman;
                                        place_2_hero_health = highwayman_health;
                                        monster_damage = 0+ (rand() % 7);
                                        place_1_hero_damage = monster_damage;
                                        place_2_hero_damage = 0;
                                        if (monster_crit_random <= monster_crit_chance){
                                            monster_damage = 8;
                                        }
                                    else if (random_target == 2) {
                                        place_2_hero = highwayman;
                                        place_2_hero_health = highwayman_health;
                                        place_1_hero = crusader;
                                        place_1_hero_health = crusader_health;
                                        monster_damage = 0+ (rand() % 7);
                                        place_2_hero_damage = monster_damage;
                                        place_1_hero_damage = 0;
                                        if (monster_crit_random <= monster_crit_chance) {
                                            monster_damage = 8;
                                        }
                                    }
                                    }
                                }
                                }
                                }
                                }
                            }
                        }
                        else if (old_road_tent == 'N') {
                            cout << "Wary of what may be inside, Reynauld and Dismas ignore the tent. ";
                            cout << "Unsure of what to do next, our heroes return to the original room, to await instructions. ";
                            continue;
                        }
                    }
                    else if(old_road1 == 'N') {
                        char tutorial_skip_warning;
                        cout << "\n";
                        cout << "-------------------------------------------------------------------------------------------";
                        cout << "\n" << "\n";
                        cout << "WARNING! THIS WILL SKIP THE TUTORIAL. ARE YOU SURE? WE DO NOT RECOMMEND THIS! (Y/N)";
                        cin >> tutorial_skip_warning;
                        if(tutorial_skip_warning == 'N') {
                            cout << "Good choice. " << "\n";
                            cout << "Resetting..." << "\n" << "\n";
                            cout << "-------------------------------------------------------------------------------------------";
                            cout << "\n" << "\n";
                            sleep(1);
                            continue;
                        }
                        else if(tutorial_skip_warning == 'Y') {
                            cout << "Reynauld and Dismas sit idly waiting for instructions, and are then jumped by monsters. With their ";
                            cout << "last words, they urge you to run away. You do, and you reach the " << hamlet_name << " hamlet. ";
                            old_road_battle_won = 1;
                            continue;
                        }
                    }
                }
            }
        else if (save == 'N'){
            cout << "Closing Game... ";
            abort();
        }
    }

    return 0;

}
