#include <iostream>
#include "utils/greet.hpp"

using namespace std;


int main() {

    string name;
    cout << "What is your name? ";
    cin >> name;

    greet(name);

    return 0;
}


