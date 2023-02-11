#include <iostream>
#include "Person.h"

using namespace std;

void showPerson(Person person) {
    cout << "Person age is: " << endl;
}

int main() {
    Person person(10);
    showPerson(20); // implicit conversion

    return 0;
}
