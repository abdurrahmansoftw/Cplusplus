#include <iostream>

using namespace std;

void great(string& name) {
    cout << "Hello " << name << endl;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    great(name);
    return 0;
}