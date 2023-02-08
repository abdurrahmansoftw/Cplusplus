#include <iostream>

using namespace std;

// extracting substring from a string example:
int main() {
    string str = "Hello, World!";
    string str2 = str.substr(7, 5);
    cout << str2 << endl;
    return 0;
}
