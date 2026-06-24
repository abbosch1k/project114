#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string teams[] = {
        "Alpha",
        "Bravo",
        "Delta",
        "Omega"
    };

    cout << teams[rand() % 4];

    return 0;
}
