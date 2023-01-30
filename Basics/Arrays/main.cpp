#include <iostream>

using namespace std;

int main() {

    string name[3];

    cout << "Enter first names: ";
    getline(cin, name[0]);

    cout << "Enter second names: ";
    getline(cin, name[1]);

    cout << "Enter third names: " ;
    getline(cin, name[2]);

    cout << "The names are: " ;

    for (int i = 0; i < 3; i++) {
        cout << name[i] << endl;
    }

    return 0;
}
