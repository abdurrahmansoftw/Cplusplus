#include <iostream>

using namespace std;

int main() {

    cout << "1 - Create a new Account" << endl
         << "2 - password" << endl;

    short int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Create a new Account" << endl;
            break;
        case 2:
            cout << "password" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
