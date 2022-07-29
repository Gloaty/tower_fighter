#include </home/gloaty/Desktop/Coding/tower_fighter/darkest_dungeon/C++/general_header.h>

int main()
{
    // riches
    // abnormal riches
    int gold = 2500;
    std::string abnormal_inventory = "None";
    srand((unsigned) time(NULL));
    int riches_random = 1+ (rand() % 100);

    // standard riches
    std::string standard_riches [7] = { "750 Gold", "500 Gold", "250 Gold", "Citrine", "Jade", "Onyx", "Minor Antique" };
    srand(time(NULL));
    int RanIndex = 0+ (rand() % 7);
    std::string inventory = standard_riches[RanIndex];
    
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

    std::cout << "\n" << "\n";

    //inventory trackers
    std::cout << "--------------------------------";
    std::cout << "\n" << "\n";
    std::cout << "      INVENTORY TRACKERS";
    std::cout << "\n" << "\n";
    std::cout << "--------------------------------";
    std::cout << "\n";
    inventory = standard_riches[RanIndex];
    std::cout << "Riches Chance: " << riches_random << "\n";
    std::cout << "Abnormal Inventory: " << abnormal_inventory << "\n";
    std::cout << "Inventory: " << inventory << "\n";
    std::cout << "Gold: " << gold;

    //enemy trackers
    generateEnemy();
    std::cout << "\n" << "\n";
    std::cout << "--------------------------------";
    std::cout << "\n" << "\n";
    std::cout << "        ENEMY TRACKERS";
    std::cout << "\n" << "\n";
    std::cout << "--------------------------------";
    std::cout << "\n";
    std::cout << "Enemy: " << enemy;
    std::cout << "\n" << "\n";
    
    // display current date and time
    auto start = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "Current Date and Time: " << std::ctime(&end_time);

    //starter heroes / monster - global variables
    std::string highwayman = "Dismas";
    std::string crusader = "Reynauld";
    std::string party[4] = {highwayman, crusader, "None", "None"};
    int highwayman_health = 25;
    int highwayman_max_health = 25;
    int place_1_hero_health = highwayman_health;
    int place_1_hero_damage = 0;
    int crusader_health = 30;
    int crusader_max_health = 30;
    int place_2_hero_health = crusader_health;
    int place_2_hero_damage = 0;
    std::string place_1_hero = crusader;
    std::string place_2_hero = highwayman;
    std::string place_3_hero = "None";
    std::string place_4_hero = "None";
    int old_road_battle_won = 0;
    std::string tutorial_skip_warning = "N";
    std::string monster_options;

    // sleep random number
    srand(time(0));
    std::cout << "Random number between -1 and 2. ";
    std::cout << "Possible outcome are 0 and 1. ";
    for(int x=0;x<3;x++) {
        int sleep_count = 0+ (rand() % 2);
        std::cout << "\n";
        std::cout << "sleep Output: " << sleep_count;
        if (sleep_count == 0){
          std::cout << "\n";
          sleep(3);
          goto intro;
        }
        else if (sleep_count == 1){
          std::cout << "\n";
          sleep(4);
          goto intro;
        }
    }

    // intro text
    intro:{
        std::cout << "\n" << "\n";
        std::cout << "Darkest Dungeon is about making the most of a bad situation. Quests will fail or must be abandoned. " << "\n";
        std::cout << "Heroes will die. And when they die, they stay dead. Progress autosaves frequently, so actions are" << "\n";
        std::cout << "permanent. This game expects a lot out of you. How far will you push your adventurers? How much are" << "\n";
        std::cout << "you willing to risk in your quest to restore the hamlet? What will you sacrifice to save the life of" << "\n";
        std::cout << "your favorite hero? Thankfully, there are always fresh souls arriving on the stage coach, seeking both" << "\n";
        std::cout << "adventure and fame in the shadow of the..." << "\n";
        sleep(2);
        std::cout << "\n";
        std::cout << "------------------------------------------------------------------------------------------------------";
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "                                     DARKEST DUNGEON" << "\n";
        std::cout << "                             WARNING: INPUTS MUST BE UPPERCASE!" << "\n";
        char save;
        std::cout << "                                  START SAVE FILE? (Y/N)";
        std::cin >> save;
        if (save == 'Y'){
            std::cout << "\n";
            std::string hamlet_name;
            std::cout << "                              INPUT HAMLET NAME IN UPPERCASE!" << "\n";
            std::cout << "                                  HAMLET NAME: ";
            std::cin >> hamlet_name;
            std::cout << "\n";
            std::cout << "                                   THE " << hamlet_name << " HAMLET";
            std::cout << "\n";
            int break_counter = 0;
                for(break_counter=0;break_counter<2;break_counter++) {
                    std::cout << "                                     OPENING SAVE.";
                    sleep(1);
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "                                     -------------";
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "                                     OPENING SAVE..";
                    sleep(1);
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "                                     -------------";
                    std::cout << "\n";
                    std::cout << "\n";
                    std::cout << "                                     OPENING SAVE...";
                    sleep(1);
                    std::cout << "\n" << "\n";
                    std::cout << "                                     -------------";
                    std::cout << "\n" << "\n";
                }
                std::cout << "\n" << "\n";
                std::cout << "----------------------------------------------------------------------------------------------------------------------";
                std::cout << "\n" << "\n";
                std::cout << "Your journey starts on the old road, overrun by raiders, and many supernatural threats. Purge these fools, as a message" << "\n";
                std::cout << "to their leaders that the rightful owner had returned, and their kind are no longer welcome. ";
                std::cout << "\n" << "\n";
                std::cout << "----------------------------------------------------------------------------------------------------------------------";
                std::cout << "\n" << "\n";
                int old_road_battle_won = 0;
                char old_road1;
                while(bool x = true) {
                    std::cout << "Current Heroes: " << crusader << " (Crusader), " << highwayman << " (Highwayman)";
                    std::cout << "You are currently in a room. The room is empty. All paths except the one to the right are blocked by foliage. " << "\n";
                    std::cout << "Head to the right? (Y/N)";
                    std::cin >> old_road1;
                    if(old_road1 == 'Y') {
                        sleep(1);
                        char old_road_tent;
                        std::cout << "Reynauld and Dismas push forward, towards the hamlet. They discover an abandoned tent along the way. Investigate? (Y/N)";
                        std::cin >> old_road_tent;
                        if (old_road_tent == 'Y') {
                            std::cout << "\n";
                            std::cout << "--------------------------------------------------------------------------------------------";
                            std::cout << "\n" << "\n";
                            std::cout << highwayman << " reaches inside the tent and pulls out some riches. ";
                            sleep(1);
                            std::cout << "\n" << "\n";
                            std::cout << "--------------------------------------------------------------------------------------------";
                            std::cout << "\n" << "\n";
                            std::cout << "                                         RICHES";
                            std::cout << "\n" << "\n";
                            std::cout << "--------------------------------------------------------------------------------------------";
                            sleep(1);
                            std::cout << "\n" << "\n";
                            if (abnormal_inventory != "None") {
                                std::string old_road_fight;
                                std::cout << "Inside is: ";
                                std::cout << abnormal_inventory << "\n";
                                std::cout << "Current Gold: " << gold;
                                std::cout << "\n" << "\n";
                                std::cout << "--------------------------------------------------------------------------------------------";
                                std::cout << "\n" << "\n";
                                std::cout << "After finding the " + inventory + ", Reynauld and Dismas reach the entrance to the next room. Enter? (Y/N)";
                                std::cin >> old_road_fight;
                                goto combat;
                            }
                            else if (abnormal_inventory == "None") {
                                std::string old_road_fight;
                                std::cout << "Inside is: ";
                                std::cout << inventory << "\n";
                                std::cout << "Current Gold: " << gold;
                                std::cout << "\n" << "\n";
                                std::cout << "--------------------------------------------------------------------------------------------";
                                std::cout << "\n" << "\n";
                                std::cout << "After finding the " + inventory + ", Reynauld and Dismas reach the entrance to the next room. Enter? (Y/N)";
                                std::cin >> old_road_fight;
                                if (old_road_fight == "Y") {
                                    goto combat;
                                }
                            }
                            combat:{
                                std::string monster_attacks [3] = {"Point Blank Shot", "Rain of Whips", "Shank"};
                                
                                //player turn
                                std::cout << "Reynauld and Dismas enter the room, and find a chest in the middle. Dismas goes towards it, and are suddenly ambushed";
                                std::cout << " by a the leader of the old road bandits!";
                                std::cout << "\n";
                                std::cout << "--------------------------------------------------------------------------------------------";
                                std::cout << "\n" << "\n";
                                std::cout << "                                         COMBAT";
                                std::cout << "\n" << "\n";
                                std::cout << "--------------------------------------------------------------------------------------------";
                                std::cout << "\n";
                                std::cout << "\n";

                                // monster turn
                                int monster_health = 35;
                                int max_monster_health = 35;
                                int monster_damage = 0;
                                for (int i = 0; i < 3; i++) {
                                    std::string monster_options;
                                    int monster_attack_RanIndex = 1+ (rand() % 2);
                                    int monster_attack_choice = 1+ (rand() % 2);
                                    monster_options = monster_attacks[monster_attack_RanIndex];
                                    //<temp>
                                    std::cout << "Mon ATK Num: " << monster_attack_choice;
                                    //</temp>
                                int monster_crit_chance = '5';
                                int monster_crit_random = 0+ (rand() % 101);
                                if (monster_options == "Point Blank Shot") {
                                    place_1_hero = crusader;
                                    place_1_hero_health = crusader_health;
                                    place_2_hero = highwayman;
                                    int place_2_hero_health = highwayman_health;
                                    monster_damage = 0+ (rand() % 8);
                                    if (monster_damage == 0) {
                                        std::string monster_damage = "Miss";
                                    }
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
                                    monster_damage = 1+ (rand() % 4);
                                    if (monster_damage == 0) {
                                        std::string monster_damage = "Miss";
                                    }
                                    int place_1_hero_damage = monster_damage;
                                    int place_2_hero_damage = monster_damage;
                                    if (monster_crit_random <= monster_crit_chance) {
                                        monster_damage = 7;
                                    }
                                }
                                else if (monster_options == "Shank") {
                                    int random_target = 0+ (rand() % 3);
                                    std::cout << "Random Target: " << random_target;
                                    if (random_target == 1) {
                                        place_1_hero = crusader;// standard gold
                                        place_1_hero_health = crusader_health;
                                        place_2_hero = highwayman;
                                        int place_2_hero_health = highwayman_health;
                                        int monster_damage = 1+ (rand() % 7);
                                        if (monster_damage == 0) {
                                            std::string monster_damage = "Miss";
                                        }
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
                                        int monster_damage = 1+ (rand() % 7);
                                        int place_2_hero_damage = monster_damage;
                                        int place_1_hero_damage = 0;
                                        if (monster_crit_random <= monster_crit_chance) {
                                            monster_damage = 8;
                                        }
                                    }
                                }
                            }
                                    std::string crusader_options = "NULL";
                                    while (true) {
                                        std::cout << "It is " + crusader + "'s turn. What does " + crusader + " do? Attack (A) Guard (G) ";
                                        std::cin >> crusader_options;
                                        if (crusader_options == "A") {
                                            int herodamage = 0+ (rand() % 11);
                                            std::cout << "Hero Damage: " << herodamage << "\n";
                                            
                                        reroll:{
                                            while (herodamage < 6) {
                                                std::cout << "Hero Damage Reroll: OK" << "\n";
                                                herodamage = 0+ (rand() % 11);
                                                if (herodamage < 6) {
                                                    goto reroll;
                                                }
                                            }
                                        }
                                            std::cout << "Rerolled Hero Damage: " << herodamage;
                                            int crit_chance = 5;
                                            int crit_random = 0+ (rand() % 101);
                                            if (crit_random <= crit_chance) {
                                                herodamage = 12;
                                            }
                                            std::string battle_rewards;
                                            monster_health = monster_health - herodamage;
                                            std::cout << "\n" << "\n";
                                            std::cout << "--------------------------------------------------------------------------------------------";
                                            std::cout << "\n" << "\n";
                                            std::cout << "Monster Health: " << monster_health << "\n";
                                            std::cout << "Crusader Health: " << place_1_hero_health;
                                            std::cout << "\n" << "\n";
                                            std::cout << "--------------------------------------------------------------------------------------------";
                                            std::cout << "\n" << "\n";
                                            if (monster_health <= 0) {
                                                std::cout << "As the fiend falls, a faint hope blossoms. ";
                                                std::cout << "Battle won!";
                                                std::cout << "Rewards: " << battle_rewards;
                                                std::cout << gold;
                                                old_road_battle_won = 1;
                                                goto accept_heroes;
                                            }
                                        }
                                        if (crusader_options == "G") {
                                            int prot = 10;
                                            int prot_damage_removal = monster_damage / prot;
                                            int monster_damage_guarded = place_1_hero_damage - prot_damage_removal;
                                            int place_1_hero_health = place_1_hero_health - monster_damage_guarded;
                                            std::cout << "\n" << "\n";
                                            std::cout << "--------------------------------------------------------------------------------------";
                                            std::cout << "\n" << "\n";
                                            std::cout << crusader << " raises a defensive stance in preparation for the monster's strike. ";
                                            std::cout << "\n" << "\n";
                                            std::cout << "--------------------------------------------------------------------------------------";
                                            std::cout << "\n" << "\n";
                                            if (monster_health <= 0) {
                                                std::cout << "As the fiend falls, a faint hope blossoms. ";
                                                std::cout << "Battle won!";
                                                std::string battle_rewards = standard_riches[RanIndex];
                                                std::cout << "Rewards: " << battle_rewards;
                                                std::cout << gold;
                                                old_road_battle_won = 1;
                                                goto accept_heroes;
                                            }
                                        }
                                        std::string highwayman_options = "NULL";
                                        std::cout << "It is " << highwayman << "'s turn. What does " << highwayman << " do? Attack (A) Guard (G) ";
                                        std::cin >> highwayman_options;
                                        std::cout << "\n";
                                        std::cout << "--------------------------------------------------------------------------------------";
                                        std::cout << "\n" << "\n";
                                        if (highwayman_options == "A") {
                                            std::cout << highwayman << " has two weapons. Those weapons are a gun and a dagger. ";
                                            if (highwayman_options == "G") {
                                                std::cout << highwayman << " enters a defensive stance. ";
                                                int prot = 10;
                                                int prot_damage_removal = monster_damage / prot;
                                                int monster_damage_guarded = monster_damage - prot_damage_removal;
                                                int place_2_hero_health = place_2_hero_health - monster_damage_guarded;
                                                if (monster_health <= 0) {
                                                    std::cout << "As the fiend falls, a faint hope blossoms. ";
                                                    std::cout << "Battle won!";
                                                    std::string battle_rewards = standard_riches[RanIndex];
                                                    std::cout << "Rewards: " << battle_rewards;
                                                    std::cout << gold;
                                                    old_road_battle_won = 1;
                                                    goto accept_heroes;
                                                }          
                                            }
                                            std::string highwayman_attack = "NULL";
                                            std::cout << "Which does " << highwayman << " attack with? Gun (G) Dagger (D) ";
                                            std::cin >> highwayman_attack;
                                            if (highwayman_attack == "G") {
                                                std::cout << "------------------------------------------------";
                                                std::cout << "\n" << "\n";
                                                std::cout << "Knowledge: The gun fires four bullets that deal 1 - 3 damage per shot, but there is a catch" << "\n";
                                                std::cout << "That catch is the fact that the gun will never critical hit. ";
                                                int total_bullet_damage = 0;
                                                sleep(2);
                                                int i = 0;
                                                for (int i; i > 4; i++) {
                                                    int bullet_damage = 0+ (rand() % 4);
                                                    std::cout << "\n" << "\n";
                                                    std::cout << "--------------------------------------------";
                                                    std::cout << "Bullet Damage: " << bullet_damage;
                                                    total_bullet_damage += bullet_damage;
                                                    monster_health -= bullet_damage;
                                                    std::cout << "Monster Health: " << monster_health;
                                                    std::cout << "--------------------------------------------";
                                                    std::cout << "\n" << "\n";
                                                    if (monster_health <= 0) {
                                                        std::cout << "As the fiend falls, a faint hope blossoms. ";
                                                        std::cout << "Battle won!";
                                                        std::string battle_rewards = standard_riches[RanIndex];
                                                        std::cout << "Rewards: " << battle_rewards;
                                                        std::cout << gold;
                                                        old_road_battle_won = 1;
                                                        goto accept_heroes;
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
                                                std::cout << "\n" << "\n";
                                                std::cout << "--------------------------------------------";
                                                std::cout << "\n" << "\n";
                                                std::cout << "Dagger Damage: " << herodamage;
                                                std::cout << "Monster Health: " << monster_health;
                                                std::cout << "\n" << "\n";
                                                std::cout << "--------------------------------------------";
                                                std::cout << "\n" << "\n";
                                                if (monster_health <= 0) {
                                                        std::cout << "As the fiend falls, a faint hope blossoms. ";
                                                        std::cout << "Battle won!";
                                                        std::string battle_rewards = standard_riches[RanIndex];
                                                        std::cout << "Rewards: " << battle_rewards;
                                                        std::cout << gold;
                                                        old_road_battle_won = 1;
                                                        goto accept_heroes;
                                                    }
                                            }
                                        }
                                    //monster: deal Damage 
                                    sleep(1);
                                    std::cout << "The monster takes a swing to rend the flesh!";
                                    sleep(1);
                                    std::cout << "\n" << "\n";
                                    std::cout << "--------------------------------------------";
                                    std::cout << "\n";
                                    if (monster_options == "Shank") {
                                        std::cout << "Monster Attack: Shank";
                                        sleep(1);
                                        std::cout << "Shank is an attack that can hit any member in your party at random. ";
                                        std::cout << "This move typically has a mid-range damage output. ";
                                        std::cout << "\n";
                                        std::cout << "------------------------------------------------------";
                                      }
                                      else if (monster_options == "Point Blank Shot") {
                                        std::cout << "Monster Attack: Point Blank Shot";
                                        sleep(1);
                                        std::cout << "Point Blank Shot can only hit the hero in the first position in the party, ";
                                        std::cout << "and typically deals mid-range damage. ";
                                        std::cout << "\n";
                                        std::cout << "------------------------------------------------------";
                                      }
                                      else if (monster_options == "Rain of Whips") {
                                        std::cout << "Monster Attack: Rain of Whips";
                                        sleep(1);
                                        std::cout << "Rain of Whips hits all party members, but the cost of that is";
                                        std::cout << "a low damage output per party member. ";
                                        std::cout << "\n";
                                        std::cout << "------------------------------------------------------";     }
                                    sleep(1);
                                    place_1_hero_health -= place_1_hero_damage;
                                    place_2_hero_health -= place_2_hero_damage;
                                    sleep(1);
                                    std::cout << "\n";
                                    std::cout << "Monster Attack: " << monster_options;
                                    std::cout << "Monster Damage: " << monster_damage;
                                    std::cout << "Damage Dealt to " << crusader << ": " << place_1_hero_damage << "\n";
                                    std::cout << "Damage Dealt to " << highwayman << ": " << place_2_hero_damage;
                                    std::cout << "\n" << "\n";
                                    std::cout << "---------------------------------------------------------------";
                                    std::cout << "\n" << "\n";
                                    sleep(1);
                                    std::cout << "Health of " << crusader << ": " << place_1_hero_health << "\n";
                                    std::cout << "Health of " << highwayman << ": " << place_2_hero_health << "\n";
                                    std::cout << "\n";
                                    std::cout << "----------------------------------------------------------";
                                    std::cout << "\n";
                                }
                            }
                            accept_heroes:{
                                std::string stagecoach_hero_1;
                                std::string stagecoach_hero_2;
                                std::string stagecoach_hero_3;
                                std::string stagecoach_hero_4;
                                std::string standby_hero_1 = "None";
                                std::string standby_hero_2 = "None";
                                std::string standby_hero_3 = "None";
                                std::string standby_hero_4 = "None";
                                std::string stagecoach_hero_choice;
                                std::string plague_doctor;
                                std::string vestal;
                                std::cout << "As the monster falls to the ground, defeated, our heroes breathe a sigh of relief, and continue their pilgrimage to the hamlet. " << "\n";
                                std::cout << "Onc our heroes arrive, they find a town, old and forgotten. However, though, it shall prove its worth to our heroes, since it can ";
                                std::cout << "still provide warmth and respite from the chill of battle. ";
                                std::cout << "\n";
                                std::cout << "---------------------------------------------------------------------------------";
                                std::cout << "\n";
                                std::cout << "The hamlet has a few buildings in it, but most of them are still under construction, awaiting your approval. " << "\n";
                                std::cout << "The stagecoach is operational,  pace where fesh souls arrive to the hamlet, seeking fame and fotune. " << "\n";
                                if (tutorial_skip_warning == "Y") {
                                    place_1_hero = "None";
                                    place_2_hero = "None";            
                                    place_3_hero = "None";
                                    place_4_hero = "None";
                                    std::cout << "The stagecoach has 4 poor souls on it awaiting your call to action. ";
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
                                    std::cout << "The stagecoach has 2 poor soouls on it awaiting your call to action. " << "\n";
                                    std::cout << "The first hero is a " << stagecoach_hero_1 << "\n";
                                    std::cout << "The second hero is a " << stagecoach_hero_2 << "\n";
                                    std::cout << "P = Plague Doctor" << "\n";
                                    std::cout << "V = Vestal" << "\n";
                                    std::cout << "B = Both" << "\n";
                                    std::cout << "Whih hero(es) do you take? (P/V/B)" << "\n";
                                    std::cin >> stagecoach_hero_choice;
                                    if (stagecoach_hero_choice == "P") {
                                        standby_hero_1 == "P";
                                        plague_doctor = "Paracelcus";
                                    }
                                    else if (stagecoach_hero_choice == "V") {
                                        standby_hero_1 == "V";
                                        vestal = "Junia";
                                    }
                                    else if (stagecoach_hero_choice == "B") {
                                        standby_hero_1 = "P";
                                        standby_hero_2 = "V";
                                        plague_doctor = "Paracelcus";
                                        vestal = "Junia";
                                    }
                                }
                                hero_assign:{
                                std::string assign_choice = "NULL";
                                int assign_place = 0;
                                std::string assign_hero = "NULL";
                                std::string plague_doctor_abilities [3] = {"Surgical Incision", "Blighted Throw", "Buff"};
                                std::string vestal_abilities [3] = {"Mace Swing", "Strike of the Gods", "Holy Heal"};
                                std::cout << "Assigning heroes is permanent, so be ";
                                std::cout << "confident in your choices before you make them. " << "\n";
                                std::cout << "Would you like to assign these heroes? (Y/N)" << "\n";
                                std::cout << "If you do respond with 'N', the heroes will be auto asigned to default positions. " << "\n";
                                std::cin >> assign_choice;
                                if (assign_choice == "Y") {
                                    std::cout << "Lineup Formation: " << "\n" << "\n";
                                    std::cout << "First: " << place_1_hero << "\n";
                                    std::cout << "Second: " << place_2_hero << "\n";
                                    std::cout << "Third: " << place_3_hero << "\n";
                                    std::cout << "Fourth: " << place_4_hero << "\n" << "\n";
                                    std::cout << "Which place would you like to assign a hero to? (1/2/3/4)";
                                    std::cin >> assign_place;
                                    if (assign_place == 1) {
                                        std::cout << "Who would you like to assign to place 1? " << "\n";
                                        std::cout << "Available Heroes: " << standby_hero_1 << " : " << standby_hero_2;
                                        std::cout << "Which hero do you want fill place 1?" << "\n";
                                        std::cout << "C = Crusader" << "\n";
                                        std::cout << "H = Highwayman" << "\n";
                                        std::cout << "P = Plague Doctor" << "\n";
                                        std::cout << "V = Vestal" << "\n";
                                        std::cin >> assign_hero;
                                        if (place_1_hero == "None") {
                                            if (assign_hero == standby_hero_1) {
                                                place_1_hero = assign_hero;
                                                standby_hero_1 = "None";
                                            }
                                            else if (assign_hero == standby_hero_2) {
                                                place_1_hero = assign_hero;
                                                standby_hero_2 = "None";
                                            }
                                            else if (assign_hero != standby_hero_1) {
                                                if (assign_hero != standby_hero_2) {
                                                    std::cout << "Hero is not available! " << "\n";
                                                    goto hero_assign;
                                                }
                                            }
                                        }
                                        else if (place_1_hero != "None") {
                                            std::cout << "A hero is already assigned to this space!" << "\n";
                                            goto hero_assign;
                                        }
                                    }
                                    else if (assign_place == 2) {
                                        std::cout << "Who would you like to assign to place 2? " << "\n";
                                        std::cout << "Available Heroes: " << standby_hero_1 << " : " << standby_hero_2;
                                        std::cout << "Which hero do you want fill place 2?" << "\n";
                                        std::cout << "C = Crusader" << "\n";   
                                        std::cout << "H = Highwayman" << "\n";
                                        std::cout << "P = Plague Doctor" << "\n";   
                                        std::cout << "V = Vestal" << "\n";
                                        std::cin >> assign_hero;
                                        if(place_2_hero == "None") {
                                            if (assign_hero == standby_hero_1) {
                                                place_2_hero = assign_hero;
                                                standby_hero_1 = "None";
                                            }
                                            else if (assign_hero == standby_hero_2) {
                                                place_2_hero = assign_hero;
                                                standby_hero_2 = "None";
                                            }
                                            else if (assign_hero != standby_hero_1) {
                                                if (assign_hero != standby_hero_2) {
                                                    std::cout << "Hero is not available! " << "\n";
                                                    goto hero_assign;
                                                }
                                            }
                                        }
                                        else if (place_2_hero != "None") {
                                            std::cout << "A hero is already assigned to this place! " << "\n";
                                            goto hero_assign;
                                        }                              
                                    }
                                    else if (assign_place == 3)
                                        std::cout << "Who would you like to assign to place 3? " << "\n";
                                        std::cout << "Available Heroes: " << standby_hero_1 << " : " << standby_hero_2;
                                        std::cout << "Which hero do you want fill place 3?" << "\n";
                                        std::cout << "C = Crusader" << "\n"; 
                                        std::cout << "H = Highwayman" << "\n";  
                                        std::cout << "P = Plague Doctor" << "\n";
                                        std::cout << "V = Vestal" << "\n";   
                                        std::cin >> assign_hero;
                                        if(place_3_hero == "None") {
                                            if (assign_hero == standby_hero_1) {
                                                place_3_hero = assign_hero;
                                            }
                                            else if (assign_hero != standby_hero_1) {
                                                if (assign_hero != standby_hero_2) {
                                                    std::cout << "Hero is not available! " << "\n";
                                                    goto hero_assign;
                                                }
                                            }
                                        }
                                        else if (place_3_hero != "None") {
                                            std::cout << "A hero is already assigned to this place! " << "\n";
                                            goto hero_assign;
                                        }
                                    }
                                    else if (assign_place == 4) {
                                        std::cout << "Who would you like to assign to place 3? " << "\n";
                                        std::cout << "Available Heroes: " << standby_hero_1 << " : " << standby_hero_2;
                                        std::cout << "Which hero do you want fill place 3?" << "\n";
                                        std::cout << "C = Crusader" << "\n"; 
                                        std::cout << "H = Highwayman" << "\n";  
                                        std::cout << "P = Plague Doctor" << "\n";
                                        std::cout << "V = Vestal" << "\n";  
                                        std::cin >> assign_hero;
                                        if(place_4_hero == "None") {
                                            if(assign_hero == standby_hero_1) {
                                                place_4_hero = assign_hero;
                                                standby_hero_1 == "None";
                                            }
                                            else if (assign_hero == standby_hero_2) {
                                                place_4_hero = assign_hero;
                                                standby_hero_2 == "None";
                                            }
                                            else if(assign_hero != standby_hero_1) {
                                                if (assign_hero != standby_hero_2) {
                                                    std::cout << "Hero is no available! " << "\n";
                                                    goto hero_assign;
                                                } 
                                            }
                                        }
                                        else if (place_4_hero != "None") {
                                            std::cout << "A hero is already assigned to this place! " << "\n";
                                            goto hero_assign;
                                        }
                                    }
                                    else if (assign_choice != "N") {
                                        std::cout << "Autoassigning heroes..." << "\n";
                                        sleep(2);
                                        place_1_hero = "Crusader";
                                        place_2_hero = "Highwayman";
                                        place_3_hero = "Plague Doctor";
                                        place_4_hero = "Vestal";
                                    }
                                    goto mission_choice;
                                }
                                mission_choice:{
                                    std::string area_insurance;
                                    std::string pause_choice;
                                    std::string accept_mission;
                                    std::string area_choice;
                                    std::cout << "Since the heroes have been assigned,it is now " << "\n";
                                    std::cout << "in your best interest to go out on a mission. Do you wish to head out? (Y/N)" << "\n";
                                    std::cin >> accept_mission;
                                    if (accept_mission == "Y") {
                                        std::cout << "Your bravery is noted! There are 6 regions for your heroes to explore, and perish in. " << "\n";
                                        std::cout << "There is the Weald, Ruins, Farmstead, Darkest Dungeon, Cove, and the Warrens. " << "\n";
                                        std::cout << "Ruins = R" << "\n";
                                        std::cout << "Weald = WE" << "\n";
                                        std::cout << "Cove = C" << "\n";
                                        std::cout << "Darkest Dungeon = DD" << "\n";
                                        std::cout << "Farmstead = F" << "\n";
                                        std::cout << "Where do you wish to go adventuring? (R/WE/WA/C/DD/F)" << "\n";
                                        std::cout << "WARNING: At the time, only the ruins are functional. " << "\n";
                                        std::cin >> area_choice;
                                        if (area_choice == "R") {
                                            std::cout << "Selected Area: Ruins..." << "\n";
                                            goto beta_test_thanks;
                                        }
                                        else if (area_choice == "F") {
                                            std::cout << "Selected Area: Farmstead..." << "\n";
                                            std::cout << "Are you sure that you want to enter the farmstead? The farmstead is a difficult area! (Y/N)" << "\n";
                                            std::cin >> area_insurance;
                                            if (area_insurance == "Y") {
                                                std::cout << "You have entered the farmstead. " << "\n";
                                                goto farmstead;
                                            }
                                            else if (area_insurance == "N") {
                                                std::cout << "You have decided to not enter the farmstead. " << "\n";
                                                goto beta_test_thanks;
                                            }
                                            else {
                                                std::cout << "You have decided to not enter the farmstead. " << "\n";
                                                goto beta_test_thanks;
                                            }
                                        }

                                        //farmstead gameplay
                                        farmstead:{
                                            std::string farmstead_enter;
                                            std::cout << "Inside the farmstead, torches are not required, as the ";
                                            std::cout << "meteor that recently struck the farmstead released an astral light. " << "\n";
                                            std::cout << "In the tutorial, you skipped the lesson on the torch. The torch is now included. " << "\n";
                                            std::cout << "The torch is like a difficulty scale, the darker it is, the more difficult the area is. " << "\n";
                                            std::cout << "You can use items to light the torch, but you can't use the torch to light items. " << "\n";
                                            std::cout << "Normally, the torch starts at 100, and goes down as you explore the area. " << "\n";
                                            std::cout << "The torch may reach 0, and the enemies will be more difficult to defeat. " << "\n";
                                            std::cout << "However, the torch will not go down if you are in the same area as the meteor. " << "\n";
                                            std::cout << "\n" << "\n";
                                            std::cout << "--------------------------------------------------------------------------------------------------------------------" << "\n" << "\n";
                                            std::cout << "Do you enter the astral light? (Y/N)" << "\n";
                                            std::cin >> farmstead_enter;
                                            if (farmstead_enter == "Y") {
                                                std::cout << "You enter the farmstead's astral light, and prepare to fight for your life. " << "\n";
                                                std::cout << "The way the farmstead works is known as 'Eternal Harvest'. " << "\n";
                                                std::cout << "The combat will never end, and you will have to fight for your life. " << "\n";
                                                std::cout << "You can retreat at any time without a penalty. " << "\n";
                                                std::cout << "May the harvest never end! " << "\n";
                                                bool eternal_harvest = true;
                                                while (eternal_harvest == true) {
                                                    std::string farmstead_choice;
                                                    std::cout << "The combat begins! " << "\n";
                                                    farmstead_combat:{
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
                                                                    goto farmstead_end;
                                                                }
                                                                else if (retreat_aftermath == "B") {
                                                                    std::cout << "You have re-entered the battle. " << "\n";
                                                                    goto farmstead_combat;
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
                                                                        if (ambush_chance <= 30) {
                                                                            std::cout << "You have been ambushed by a group of enemies! " << "\n";
                                                                            std::cout << "Combat is beginning now! " << "\n";
                                                                            goto farmstead_combat;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    std::cout << "You have re-entered the battle. " << "\n";
                                                                    goto farmstead_combat;
                                                                }
                                                            }
                                                            else if (farmstead_retreat == "N") {
                                                                std::cout << "You have decided to not retreat. " << "\n";
                                                                goto farmstead_combat;
                                                            }
                                                            else {
                                                                std::cout << "You have decided to not retreat. " << "\n";
                                                                goto farmstead_combat;
                                                            }
                                                        // add the other battle options instead of this
                                                        }
                                                    }
                                                }
                                            }
                                            farmstead_end:{
                                                std::cout << "You have returned to the hamlet. " << "\n";
                                                goto beta_test_thanks;
                                            }
                                        }
                                        beta_test_thanks:{
                                            std::cout << "Thanks for Beta Testing. We seriously appreciate";
                                            std::cout << " you supporting the development of this small passion project. ";
                                            std::cout << "We will keep you updated for the future. Have a great day! ";
                                            std::cout << "Closing Game...";
                                            std::cout << "You may now close the program. ";
                                            goto exit;
                                        }
                                    }
                                    else if (accept_mission != "Y") {
                                        std::cout << "PAUSE MENU";
                                        std::cout << "Enter 'R' to resume. ";
                                        std::cout << "Enter 'Q' to quit. ";
                                        std::cin >> pause_choice;
                                        if (pause_choice != "Q") {
                                            std::cout << "Restarting from Mission Choice menu... ";
                                            goto mission_choice;
                                        }
                                        else if (pause_choice == "Q") {
                                            std::cout << "Closing Game... ";
                                            abort();
                                        }
                                    }
                                }
                            }
                        }
                        if (old_road_tent == 'N') {
                            std::cout << "Wary of what may be inside, Reynauld and Dismas ignore the tent. ";
                            std::cout << "Unsure of what to do next, our heroes return to the original room, to await instructions. ";
                            continue;
                        }
                    }
                    else if(old_road1 == 'N') {
                        char tutorial_skip_warning;
                        std::cout << "\n";
                        std::cout << "-------------------------------------------------------------------------------------------";
                        std::cout << "\n" << "\n";
                        std::cout << "WARNING! THIS WILL SKIP THE TUTORIAL. ARE YOU SURE? WE DO NOT RECOMMEND THIS! (Y/N)";
                        std::cin >> tutorial_skip_warning;
                        if(tutorial_skip_warning == 'N') {
                            std::cout << "Good choice. " << "\n";
                            std::cout << "Resetting..." << "\n" << "\n";
                            std::cout << "-------------------------------------------------------------------------------------------";
                            std::cout << "\n" << "\n";
                            sleep(1);
                            continue;
                        }
                        else if(tutorial_skip_warning == 'Y') {
                            std::cout << "Reynauld and Dismas sit idly waiting for instructions, and are then jumped by monsters. With their ";
                            std::cout << "last words, they urge you to run away. You do, and you reach the " << hamlet_name << " hamlet. ";
                            old_road_battle_won = 1;
                            continue;
                        }
                    }
                }
            }
        else if (save == 'N'){
            std::cout << "Closing Game... ";
            abort();
        }
    }

    exit:{
        return 0;
    }

  return 0;

}