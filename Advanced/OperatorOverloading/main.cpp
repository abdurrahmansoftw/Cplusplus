#include <iostream>
#include "Lengths.h"

using namespace std;

// operator overloading is a way to overload the operators in C++.

int main() {

    Lengths first{1};
    Lengths second{2};


    first == second ? cout << "Equal" : cout << "Not Equal";

    return 0;
}
