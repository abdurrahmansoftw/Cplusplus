#include <iostream>

using namespace std;

int main() {

    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << firstName.back() << " " << lastName << endl;

    cout << "Hello, " << firstName << " " << lastName << endl;


    return 0;
}
