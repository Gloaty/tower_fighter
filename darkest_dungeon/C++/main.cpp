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

using namespace std;
int main()
{
    // display current date and time
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = std::chrono::system_clock::to_time_t(end);

    cout << "Current Date and Time: " << std::ctime(&end_time);
    
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
            cout << "tis workin";
        }
        else if (save == 'N'){
            goto exitarea;
        }
    }
    
        // exit program
        exitarea:{
            cout << "Closing Game... ";
            //abort();
            }
    return 0;
    
}