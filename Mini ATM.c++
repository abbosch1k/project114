#include <iostream>
using namespace std;

int main() {

    int balance = 1000;
    int withdraw;

    cin >> withdraw;

    if(withdraw <= balance)
        cout << balance - withdraw;
    else
        cout << "Not Enough Money";

    return 0;
}
