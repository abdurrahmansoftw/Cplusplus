#include <iostream>

using namespace std;

int main() {

    string food = "Pizza"; // A food variable of type string

    string  *ptr = &food; // A pointer variable, with the name ptr, that stores the memory address of food

    cout << *ptr  << endl;

    cout << &food << endl; // Outputs the memory address of the food variable


    return 0;
}
