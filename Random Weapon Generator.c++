#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string weapons[] = {
        "Sword",
        "Bow",
        "Hammer",
        "Spear"
    };

    cout << weapons[rand()%4];

    return 0;
}
