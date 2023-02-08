#include <iostream>

using namespace std;

// pointers and const
// passing a pointer to a function
// important the swap function for swapping two variables uses pointers

void swap(int *firstPointer, int *secondPointer) {
    int temp = *firstPointer;
    *firstPointer = *secondPointer;
    *secondPointer = temp;
}

int main() {
    int first;
    int second;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    cout << "First: " << first << " Second: " << second << endl;

    swap(&first, &second);
    cout << "First: " << first << " Second: " << second << endl;
    return 0;
}