#include <iostream>

using namespace std;

// strongly type Enumeration Expression and example

enum class Action {
    List = 1,
    Add,
    Edit,
    Exit
};


enum class Operation {
    List = 1,
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

    if (input == static_cast<int>(Action::List))
        cout << "List Invoice" << endl;
    else if (input == static_cast<int>(Action::Add))
        cout << "Add Invoice" << endl;
    else if (input == static_cast<int>(Action::Edit))
        cout << "Edit Invoice" << endl;
    else if (input == static_cast<int>(Action::Exit))
        cout << "Exit" << endl;
    else
        cout << "Invalid Option" << endl;

    return 0;
}
