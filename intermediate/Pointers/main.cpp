#include <iostream>
#include "MyClass.h"

using namespace std;

int main() {

    const int number = 5;

    const int *pNumber = &number;

    cout << "The value of number is: " << number << endl;

    return 0;
}

MyClass::MyClass(const string &myString) : myString(myString) {}
