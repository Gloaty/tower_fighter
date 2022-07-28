#include <string>

using namespace std;

string brigand_spawn[5] = { "Brigand Cutthroat", "Brigand Fusilier", "Brigand Bloodletter", "Brigand Raider", "Brigand Hunter" };
int gold;
void enemyStatistics() {
    if (brigand_spawn[0] == "Brigand Cutthroat") {
        gold = gold + 1500;
    }
}