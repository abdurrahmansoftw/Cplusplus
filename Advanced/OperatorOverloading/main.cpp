#include <iostream>
#include "Lengths.h"
#include <compare>

using namespace std;

// operator overloading is a way to overload the operators in C++.

int main() {

    Lengths l1(10);
    Lengths l2(20);

    cout << (l1 == l2) << endl;

    if (l1 == l2) {
        cout << "l1 is equal to 10" << endl;
    }

    return 0;
}
