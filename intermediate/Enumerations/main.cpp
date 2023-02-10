#include <iostream>

using namespace std;

// Enumeration Expression and example

enum Action {
    List,
    Add,
    Edit,
    Exit
};

int main() {
    cout << " 1: List Invoice" << endl
         << " 2: Add Invoice" << endl
         << " 3: Edit Invoice" << endl
         << " 4: Exit" << endl
         << "Select an option:" << endl;

    int input;
    cin >> input;

    if (input == Action::List) {
        cout << "List Invoice" << endl;
    } else if (input == Action::Add) {
        cout << "Add Invoice" << endl;
    } else if (input == Action::Edit) {
        cout << "Edit Invoice" << endl;
    } else if (input == Action::Exit) {
        cout << "Exit" << endl;
    } else {
        cout << "Invalid option" << endl;
    }
    return 0;
}
