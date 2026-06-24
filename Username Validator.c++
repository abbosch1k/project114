#include <iostream>
using namespace std;

int main() {

    string username;
    cin >> username;

    if(username.length() >= 5)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
