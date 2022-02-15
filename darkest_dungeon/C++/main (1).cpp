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
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = std::chrono::system_clock::to_time_t(end);

    cout << "Current Date and Time: " << std::ctime(&end_time);
    
    srand(time(0));
    cout << "Random number between -1 and 2. ";
    cout << "Possible outcome are 0 and 1. ";
    for(int x=0;x<3;x++);
        int sleep_count = 0+ (rand() % 2);
        cout << "\n";
        cout << "Sleep: " << sleep_count;
        if (sleep_count == 0){
          cout << "\n";
          sleep(3);
          cout << "Darkest Dungeon";
        }
        else if (sleep_count == 1){
          cout << "\n";
          sleep(4);
          cout << "Darkest Dungeon";
        }
    return 0;
    
}