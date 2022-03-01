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
    string abnormal_inventory;
    string inventory;
    srand((unsigned) time(NULL));
    int riches_random = 1+ (rand() % 100);

    int emerald_percentage = 15;
    if (riches_random > emerald_percentage > 12) {
        abnormal_inventory = "Emerald";
    }

    int sapphire_percentage = 12;
    if (riches_random <= sapphire_percentage > 9) {
        abnormal_inventory = "Sapphire";
    }

    int ruby_percentage = 9;
    if (riches_random <= ruby_percentage > 7) {
        abnormal_inventory = "Ruby";
    }

    int rare_antique_percentage = 7;
    if (riches_random <= rare_antique_percentage > 5) {
        abnormal_inventory = "Rare Antique";
    }
    
    int large_antique_percentage = 5;
    if (riches_random <= large_antique_percentage > 3) {
        abnormal_inventory = "Large Antique";
    }
    
    int jute_tapestry_percentage = 3;
    if (riches_random <= jute_tapestry_percentage > 2) {
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
    
    if (riches_random > 15) {
        abnormal_inventory = "None";
    }
    
    // standard riches
    string standard_riches [8] = { "750 Gold", "500 Gold", "250 Gold", "Citrine", "Jade", "Onyx", "Minor Antique" };
    srand(time(NULL));
    int RanIndex = rand() % 8;
    
    // abnormal inventory check
    bool abnormal_inventory_check = abnormal_inventory != "None";
    if (abnormal_inventory_check == true) {
        inventory = abnormal_inventory;
    }
    
    //gold
    int gold = 2500;
    if (inventory == "250 Gold") {
        gold = gold + 250;
    }
    else if (inventory == "500 Gold") {
        gold = gold + 500;
    }
    else if (inventory == "750 Gold") {
        gold = gold + 750;
    }
    else if (inventory == "Jade") {
        gold = gold + 375;
    }
    else if (inventory == "Citrine") {
        gold = gold + 250;
    }
    else if (inventory == "Onyx") {
        gold = gold + 500;
    }
    else if (inventory == "Consecrated Pew") {
        gold = gold + 5000;
    }
    else if (inventory == "Emerald") {
        gold = gold + 750;
    }
    else if (inventory == "Sapphire") {
        gold = gold + 1000;
    }
    else if (inventory == "Ruby") {
        gold = gold + 1250;
    }
    
    
    //inventory trackers
    cout << "Riches Chance: " << riches_random << "\n";
    cout << "Abnormal Inventory: " << abnormal_inventory << "\n";
    cout << "Inventory: " << standard_riches[RanIndex];
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
                    cout << "You are currently in a room. The room is empty. All path except the one to the right are blocked by foliage. Head to the right? (Y/N)";
                    cin >> old_road1;
                    if(old_road1 == 'Y') {
                        sleep(1);
                        char old_road_tent;
                        cout << "Reynauld and Dismas push forward, towards the hamlet. They discover an abandoned tent along the way. Investigate? (Y/N)";
                        cin >> old_road_tent;
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