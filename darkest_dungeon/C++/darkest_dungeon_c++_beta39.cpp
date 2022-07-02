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

    //starter heroes / monster
    string highwayman = "Dismas";
    string crusader = "Reynauld";
    string party[4] = {highwayman, crusader, "None", "None"};
    int highwayman_health = 25;
    int highwayman_max_health = 25;
    int place_1_hero_health = highwayman_health;
    int place_1_hero_damage = 0;
    int crusader_health = 30;
    int crusader_max_health = 30;
    int place_2_hero_health = crusader_health;
    int place_2_hero_damage = 0;
    string place_1_hero = crusader;
    string place_2_hero = highwayman;
    string place_3_hero = "None";
    string place_4_hero = "None";
    int old_road_battle_won = 0;
    string tutorial_skip_warning = "N";
  string monster_option;

    // sleep random number
    srand(time(0));
    cout << "Random number between -1 and 2. ";
    cout << "Possible outcome are 0 and 1. ";
    for(int x=0;x<3;x++);
        int sleep_count = 0+ (rand() % 2);
        cout << "\n";
        cout << "sleep Output: " << sleep_count;
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
                                
                                //player turn
                                cout << "Reynauld and Dismas enter the room, and find a chest in the middle. Dismas goes towards it, and are suddenly ambushed";
                                cout << " by a the leader of the old road bandits!";
                                cout << "\n";
                                cout << "--------------------------------------------------------------------------------------------";
                                cout << "\n" << "\n";
                                cout << "                                         COMBAT";
                                cout << "\n" << "\n";
                                cout << "--------------------------------------------------------------------------------------------";
                                cout << "\n";
                                cout << "\n";

                                // monster turn
                                int monster_health = 35;
                                int max_monster_health = 35;
                                int monster_damage = 0;
                                for (int i = 0; i < 11; i++) {
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
                                }
                                if (monster_options == "Rain of Whips") {
                                    place_1_hero = crusader;
                                    place_2_hero = highwayman;
                                    place_1_hero_health = crusader_health;
                                    int place_2_hero_health = highwayman_health;
                                    int monster_damage = 0+ (rand() % 4);
                                    int place_1_hero_damage = monster_damage;
                                    int place_2_hero_damage = monster_damage;
                                    if (monster_crit_random <= monster_crit_chance) {
                                        monster_damage = 7;
                                    }
                                }
                                else if (monster_options == "Shank") {
                                    int random_target = 0+ (rand() % 3);
                                    cout << "Random Target: " << random_target;
                                    if (random_target == 1) {
                                        place_1_hero = crusader;
                                        place_1_hero_health = crusader_health;
                                        place_2_hero = highwayman;
                                        int place_2_hero_health = highwayman_health;
                                        int monster_damage = 0+ (rand() % 7);
                                        int place_1_hero_damage = monster_damage;
                                        int place_2_hero_damage = 0;
                                        if (monster_crit_random <= monster_crit_chance){
                                            monster_damage = 8;
                                        }
                                    }
                                    else if (random_target == 2) {
                                        place_2_hero = highwayman;
                                        int place_2_hero_health = highwayman_health;
                                        place_1_hero = crusader;
                                        place_1_hero_health = crusader_health;
                                        int monster_damage = 0+ (rand() % 7);
                                        int place_2_hero_damage = monster_damage;
                                        int place_1_hero_damage = 0;
                                        if (monster_crit_random <= monster_crit_chance) {
                                            monster_damage = 8;
                                        }
                                    }
                                    }
                                    }
                                    string crusader_options = "NULL";
                                    while (true) {
                                        cout << "It is " + crusader + "'s turn. What does " + crusader + " do? Attack (A) Guard (G) ";
                                        cin >> crusader_options;
                                        if (crusader_options == "A") {
                                            int herodamage = 0+ (rand() % 11);
                                            cout << "Hero Damage: " << herodamage << "\n";
                                            
                                        reroll:{
                                            while (herodamage < 6) {
                                                cout << "Hero Damage Reroll: OK" << "\n";
                                                herodamage = 0+ (rand() % 11);
                                                if (herodamage < 6) {
                                                    goto reroll;
                                                }
                                            }
                                        }
                                            cout << "Rerolled Hero Damage: " << herodamage;
                                            int crit_chance = 5;
                                            int crit_random = 0+ (rand() % 101);
                                            if (crit_random <= crit_chance) {
                                                herodamage = 12;
                                            }
                                            monster_health = monster_health - herodamage;
                                            cout << "\n" << "\n";
                                            cout << "--------------------------------------------------------------------------------------------";
                                            cout << "\n" << "\n";
                                            cout << "Monster Health: " << monster_health << "\n";
                                            cout << "Crusader Health: " << place_1_hero_health;
                                            cout << "\n" << "\n";
                                            cout << "--------------------------------------------------------------------------------------------";
                                            cout << "\n" << "\n";
                                            if (monster_health <= 0) {
                                                cout << "As the fiend falls, a faint hope blossoms. ";
                                                cout << "Battle won!";
                                                string battle_rewards = standard_riches[RanIndex];
                                                cout << "Rewards: " << battle_rewards;
                                                cout << gold;
                                                old_road_battle_won = 1;
                                                goto hamlet;
                                            }
                                        }
                                        if (crusader_options == "G") {
                                            int prot = 10;
                                            int prot_damage_removal = monster_damage / prot;
                                            int monster_damage_guarded = place_1_hero_damage - prot_damage_removal;
                                            int place_1_hero_health = place_1_hero_health - monster_damage_guarded;
                                            cout << "\n" << "\n";
                                            cout << "--------------------------------------------------------------------------------------";
                                            cout << "\n" << "\n";
                                            cout << crusader << " raises a defensive stance in preparation for the monster's strike. ";
                                            cout << "\n" << "\n";
                                            cout << "--------------------------------------------------------------------------------------";
                                            cout << "\n" << "\n";
                                            if (monster_health <= 0) {
                                                cout << "As the fiend falls, a faint hope blossoms. ";
                                                cout << "Battle won!";
                                                string battle_rewards = standard_riches[RanIndex];
                                                cout << "Rewards: " << battle_rewards;
                                                cout << gold;
                                                old_road_battle_won = 1;
                                                goto hamlet;
                                            }
                                        }
                                        string highwayman_options = "NULL";
                                        cout << "It is " << highwayman << "'s turn. What does " << highwayman << " do? Attack (A) Guard (G) ";
                                        cin >> highwayman_options;
                                        cout << "\n";
                                        cout << "--------------------------------------------------------------------------------------";
                                        cout << "\n" << "\n";
                                        if (highwayman_options == "A") {
                                            cout << highwayman << " has two weapons. Those weapons are a gun and a dagger. ";
                                            if (highwayman_options == "G") {
                                                cout << highwayman << " enters a defensive stance. ";
                                                int prot = 10;
                                                int prot_damage_removal = monster_damage / prot;
                                                int monster_damage_guarded = monster_damage - prot_damage_removal;
                                                int place_2_hero_health = place_2_hero_health - monster_damage_guarded;
                                                if (monster_health <= 0) {
                                                    cout << "As the fiend falls, a faint hope blossoms. ";
                                                    cout << "Battle won!";
                                                    string battle_rewards = standard_riches[RanIndex];
                                                    cout << "Rewards: " << battle_rewards;
                                                    cout << gold;
                                                    old_road_battle_won = 1;
                                                    goto hamlet;
                                                }          
                                            }
                                            string highwayman_attack = "NULL";
                                            cout << "Which does " << highwayman << " attack with? Gun (G) Dagger (D) ";
                                            cin >> highwayman_attack;
                                            if (highwayman_attack == "G") {
                                                cout << "------------------------------------------------";
                                                cout << "\n";
                                                cout << "Knowledge: The gun fires four bullets that deal 1 - 3 damage per shot, but there is a catch" << "\n";
                                                cout << "That catch is the fact that the gun will never critical hit. ";
                                                cout << "\n" << "\n";
                                                int total_bullet_damage = 0;
                                                sleep(2);
                                                cout << monster_health;
                                                int i = 0;
                                                for (i; i > 4; i=i+1) {
                                                    int bullet_damage = 0+ (rand() % 4);
                                                    cout << "\n" << "\n";
                                                    cout << "--------------------------------------------";
                                                    cout << "Bullet Damage: " << bullet_damage;
                                                    total_bullet_damage = total_bullet_damage + bullet_damage;
                                                    monster_health = monster_health - bullet_damage;
                                                    cout << "Monster Health: " << monster_health;
                                                    cout << "--------------------------------------------";
                                                    cout << "\n" << "\n";
                                                    if (monster_health <= 0) {
                                                        cout << "As the fiend falls, a faint hope blossoms. ";
                                                        cout << "Battle won!";
                                                        string battle_rewards = standard_riches[RanIndex];
                                                        cout << "Rewards: " << battle_rewards;
                                                        cout << gold;
                                                        old_road_battle_won = 1;
                                                        goto hamlet;
                                                    }
                                                    sleep(1);
                                                }
                                            }
                                            if (highwayman_attack == "D") {
                                                int herodamage = 4+ (rand() % 3);
                                                int crit_random = 0+ (rand() % 100);
                                                int crit_chance = 5;
                                                if (crit_random <= crit_chance){
                                                    herodamage = 8;
                                                }
                                                monster_health = monster_health - herodamage;
                                                cout << "\n" << "\n";
                                                cout << "--------------------------------------------";
                                                cout << "\n" << "\n";
                                                cout << "Dagger Damage: " << herodamage;
                                                cout << "Monster Health: " << monster_health;
                                                cout << "\n" << "\n";
                                                cout << "--------------------------------------------";
                                                cout << "\n" << "\n";
                                                if (monster_health <= 0) {
                                                        cout << "As the fiend falls, a faint hope blossoms. ";
                                                        cout << "Battle won!";
                                                        string battle_rewards = standard_riches[RanIndex];
                                                        cout << "Rewards: " << battle_rewards;
                                                        cout << gold;
                                                        old_road_battle_won = 1;
                                                        goto hamlet;
                                                    }
                                            }
                                        }
                                    //monster: deal Damage 
                                    sleep(1);
                                    cout << "\n" << "\n";
                                    cout << "The monster takes a swing to rend the flesh!";
                                    sleep(1);
                                    cout << "\n" << "\n";
                                    cout << "--------------------------------------------";
                                    cout << "\n";
                                    if (monster_option == "Shank") {
                                        cout << "Monster Attack: Shank";
                                        sleep(1);
                                        cout << "Shank is an attack that can hit any member in your party at random. ";
                                        cout << "This move typically has a mid-range damage output. ";
                                        cout << "\n";
                                        cout << "------------------------------------------------------";
                                      }
                                      else if (monster_option == "Point Blank Shot") {
                                        cout << "Monster Attack: Point Blank Shot";
                                        sleep(1);
                                        cout << "Point Blank Shot can only hit the hero in the first position in the party, ";
                                        cout << "and typically deals mid-range damage. ";
                                        cout << "\n";
                                        cout << "------------------------------------------------------";
                                      }
                                      else if (monster_option == "Rain of Whips") {
                                        cout << "Monster Attack: Rain of Whips";
                                        sleep(1);
                                        cout << "Rain of Whips hits all party members, but the cost of that is";
                                        cout << "a low damage output per party member. ";
                                        cout << "\n";
                                        cout << "------------------------------------------------------";     }
                                    sleep(1);
                                    place_1_hero_health = place_1_hero_health - place_1_hero_damage;
                                    place_2_hero_health = place_2_hero_health - place_2_hero_damage;
                                    sleep(1);
                                    cout << "\n";
                                    cout << "Damage Dealt to " << crusader << ": " << place_1_hero_damage << "\n";
                                    cout << "Damage Dealt to " << highwayman << ": " << place_2_hero_damage;
                                    cout << "\n" << "\n";
                                    cout << "---------------------------------------------------------------";
                                    cout << "\n" << "\n";
                                    sleep(1);
                                    cout << "Health of " << crusader << ": " << place_1_hero_health << "\n";
                                    cout << "Health of " << highwayman << ": " << place_2_hero_health << "\n";
                                    cout << "\n";
                                    cout << "----------------------------------------------------------";
                                    cout << "\n";
                                }
                            }
                            hamlet:{
                                string stagecoach_hero_1;
                                string stagecoach_hero_2;
                                string stagecoach_hero_3;
                                string stagecoach_hero_4;
                                string standby_heroes;
                                string stagecoach_hero_choice;
                                string plague_doctor;
                                string vestal;
                                cout << "As the monster falls to the ground, defeated, our heroes breathe a sigh of relief, and continue their pilgrimage to the hamlet. ";
                                cout << "Onc our heroes arrive, they find a town, old and forgotten. However, though, it shall prove its worth to our heroes, since it can ";
                                cout << "still provide warmth and respite from the chill of battle. ";
                                cout << "\n";
                                cout << "---------------------------------------------------------------------------------";
                                cout << "\n";
                                cout << "The hamlet has a few buildings in it, but most of them are still under construction, awaiting your approval. ";
                                cout << "The stagecoach is operational,  pace where fesh souls arrive to the hamlet, seeking fame and fotune. ";
                                if (tutorial_skip_warning == "Y") {
                                    place_1_hero = "None";
                                    place_2_hero = "None";            
                                    place_3_hero = "None";
                                    place_4_hero = "None";
                                    cout << "The stagecoach has 4 poor souls on it awaiting your call to action. ";
                                    stagecoach_hero_1 = "Crusader";
                                    stagecoach_hero_2 = "Highwayman";
                                    stagecoach_hero_3 = "Plague Doctor";
                                    stagecoach_hero_4 = "Vestal";
                                }
                                else if (tutorial_skip_warning == "N") {                                                                                                                         
                                    stagecoach_hero_1 = "Plague Doctor";
                                    stagecoach_hero_2 = "Vestal";
                                    stagecoach_hero_3 = "None";
                                    stagecoach_hero_4 = "None";
                                    cout << "The stagecoach has 2 poor soouls on it awaiting your call to action. ";
                                    cout << "The first hero is a " << stagecoach_hero_1;
                                    cout << "The second hero is a " << stagecoach_hero_2;
                                    cout << "P = Plague Doctor";
                                    cout << "V = Vestal";
                                    cout << "B = Both";
                                    cout << "Whih hero(es) do you take? (P/V/B)";
                                    cin >> stagecoach_hero_choice;
                                    if (stagecoach_hero_choice == "P") {
                                        standby_heroes == "P";
                                        plague_doctor = "Paracelcus";
                                    }
                                    else if (stagecoach_hero_choice == "V") {
                                        standby_heroes == "V";
                                        vestal = "Junia";
                                    }
                                    else if (stagecoach_hero_choice == "B") {
                                        string standby_heroes [2] = ("P", "V");
                                        plague_doctor = "Paracelcus";
                                        vestal = "Junia";
                                    }
                                }
                                hero_assign:{
                                string assign_choice = "NULL";
                                int assign_place = 0;
                                string assign_hero = "NULL";
                                string plague_doctor_abilities [3] = ("Knife", "Blighted Throw", "Buff");
                                string vestal_abilities [3] = ("Mace Swing", "Strike of the Gods", "Holy Heal");
                                cout << "Assigning heroes is permanent, so be ";
                                cout << "confident in your choices before you make them. ";
                                cout << "Would you like to assign these heroes? (Y/N)";
                                cout << "If you do respond with 'N', the heroes will be auto asigned to default positions. ";
                                cin >> assign_choice;
                                if (assign_choice == "Y") {
                                    cout << "Lineup Formation: " << "\n" << "\n";
                                    cout << "First: " << place_1_hero << "\n";
                                    cout << "Second: " << place_2_hero << "\n";
                                    cout << "Third: " << place_3_hero << "\n";
                                    cout << "Fourth: " << place_4_hero << "\n" << "\n";
                                    cout << "Which place would you like to assign a hero to? (1/2/3/4)";
                                    cin >> assign_place;
                                    if (assign_place == 1) {
                                        cout << "Who would you like to assign to place 1? ";
                                        cout << "Available Heroes: " << standby_heroes;
                                        cout << "Which hero do you want fill place 1?";
                                        cout << "C = Crusader" << "\n";
                                        cout << "H = Highwayman" << "\n";
                                        cout << "P = Plague Doctor" << "\n";
                                        cout << "V = Vestal" << "\n";
                                        cin >> assign_hero;
                                        if (place_1_hero == "None") {
                                            if (assign_hero == standby_heroes) {
                                                place_1_hero = assign_hero;
                                            }
                                            else if (assign_hero != standby_heroes) {
                                                cout << "Hero is not available! ";
                                                goto hero_assign;
                                            }
                                        }
                                        else if (place_1_hero != "None") {
                                            cout << "A hero is already assigned to this space!";
                                            goto hero_assign;
                                        }
                                    }
                                    else if (assign_place == 2) {
                                        cout << "Who would you like to assign to place 2? ";
                                        cout << "Available Heroes: " << standby_heroes;
                                        cout << "Which hero do you want fill place 1?";
                                        cout << "C = Crusader" << "\n";   
                                        cout << "H = Highwayman" << "\n";
                                        cout << "P = Plague Doctor" << "\n";   
                                        cout << "V = Vestal" << "\n";
                                        cin >> assign_hero;
                                        if(place_2_hero == "None") {
                                            if (assign_hero == standby_heroes) {
                                                place_2_hero = assign_hero;
                                            }
                                            else if (assign_hero != standby_heroes) {
                                                cout << "Hero is not available! ";
                                                goto hero_assign;
                                            }
                                        }
                                        else if (place_2_hero != "None") {
                                            cout << "A hero is already assigned to this place! ";
                                            goto hero_assign;
                                        }                              
                                    }
                                    else if (assign_place == 3)
                                        cout << "Who would you like to assign to place 3? ";
                                        cout << "Available Heroes: " << standby_heroes;
                                        cout << "Which hero do you want fill place 3?";
                                        cout << "C = Crusader" << "\n"; 
                                        cout << "H = Highwayman" << "\n";  
                                        cout << "P = cout <<Plague Doctor" << "\n";
                                        cout << "V = Vestal" << "\n";   
                                        cin >> assign_hero;
                                        if(place_3_hero == "None") {
                                            if (assign_hero == standby_heroes) {
                                                place_3_hero = assign_hero;
                                            }
                                            else if (assign_hero != standby_heroes) {
                                                cout << "Hero is not available! ";
                                                goto hero_assign;
                                            }
                                        }
                                        else if (place_3_hero != "None") {
                                            cout << "A hero is already assigned to this place! ";
                                            goto hero_assign;
                                        }
                                    }
                                    else if (assign_place == 4) {
                                        cout << "Who would you like to assign to place 3? ";
                                        cout << "Available Heroes: " << standby_heroes;
                                        cout << "Which hero do you want fill place 3?";
                                        cout << "C = Crusader" << "\n"; 
                                        cout << "H = Highwayman" << "\n";  
                                        cout << "P = Plague Doctor" << "\n";
                                        cout << "V = Vestal" << "\n";  
                                        cin >> assign_hero;
                                        if(place_4_hero == "None") {
                                            if(assign_hero == standby_heroes) {
                                                place_4_hero = assign_hero;
                                            }
                                            else if(assign_hero != standby_heroes) {
                                                cout << "Hero is no available! ";
                                                goto hero_assign;
                                            }
                                        }
                                        else if (place_4_hero != "None") {
                                            cout << "A hero is already assigned to this place! ";
                                            goto hero_assign;
                                        }
                                    }
                                    else if (assign_choice != "N") {
                                        cout << "Autoassigning heroes...";
                                        sleep(2);
                                        place_1_hero = "Crusader";
                                        place_2_hero = "Highwayman";
                                        place_3_hero = "Plague Doctor";
                                        place_4_hero = "Vestal";
                                    }
                                    goto mission_choice;
                                }
                                mission_choice:{
                                    string pause_choice;
                                    string accept_mission;
                                    cout << "Since the heroes have been assigned,it is now ";
                                    cout << "in your best interest to go out on a mission. Do you wish to head out? (Y/N)";
                                    cin >> accept_mission;
                                    if (accept_mission == "Y") {
                                        cout << "Your bravery is noted! There are 6 regions for your heroes to explore, and perish in. ";
                                    }
                                }
                            }
                        }
                        if (old_road_tent == 'N') {
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