#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for(char &c : text)
        c = toupper(c);

    cout << text;
    return 0;
}
