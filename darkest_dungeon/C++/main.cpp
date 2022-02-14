#include <iostream>
#include <chrono>
#include <ctime>  
#include <cstdlib>

using namespace std;
int main()
{
    auto start = std::chrono::system_clock::now();
    // Some computation here
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "Current Date and Time: " << std::ctime(&end_time);
    
    srand(time(0));
    cout << "Random number between -1 and 2. ";
    cout << "Possible outcome are 0 and 1. ";
    for(int x=0;x<2;x++);
        cout << 0+ (rand() % 2) <<"\n";
        int sleep = rand();
        cout << sleep;
    return 0;
    
}