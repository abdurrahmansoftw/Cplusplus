#include <iostream>

using namespace std;

int main() {

    string firstName;
    string lastName;
    string fullName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    fullName.insert(0, "i am ");

    fullName.append(firstName + " " + lastName);
    fullName.append(" and i am a programmer");


    fullName.erase(0, 3);

    cout << fullName << endl;

    return 0;
}
