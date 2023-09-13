#include <iostream>

using namespace std;

int main() {
    string street;
    cout << "Enter street address: ";
    getline(cin, street);

    string city;
    cout << "Enter city: ";
    getline(cin, city);

    string state;
    cout << "Enter state: ";
    getline(cin, state);


    string zipCode;
    cout << "Enter zip code: ";
    getline(cin, zipCode);


    string name;
    cout << "Enter name: ";
    getline(cin, name);

    cout << endl << endl;

    cout << street << endl
         << city << ", " << state << " " << zipCode << name << endl;
    return 0;
}
