#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <chrono>
#include <ctime>  
#include <cstdlib>
#include <time.h>
#include <cstring>
#include <cctype>

using namespace std;
int main()
{
    // riches
    string abnormal_inventory;
    int riches_random = 0+ (rand() % 100);
    cout << "Riches Chance" << riches_random ;
    
    int emerald_percentage = 15;
    if (riches_random <= emerald_percentage) {
        abnormal_inventory = "Emerald";
    }
    else if (riches_random > emerald_percentage) {
        abnormal_inventory = "None";
    }
    
    int sapphire_percentage = 12;
    
    
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
    for(int x=0;x<3;x++);
        int sleep_count = 0+ (rand() % 2);
        cout << "\n";
        cout << "Sleep Output: " << sleep_count;
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
                    cout << "\n";
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
                    cout << "                                     OPENING SAVE...";
                    sleep(1);
                    cout << "\n" << "\n";
                    cout << "                                     -------------";
                    cout << "\n" << "\n";
                    cout << "Break Counter: " << break_counter;
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
