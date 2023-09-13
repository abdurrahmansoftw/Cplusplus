#include <iostream>

using namespace std;

// Dynamic memory allocation example:

int main() {
    int capacity = 5;
    int *numbers = new int[capacity];
    int entries = 0;

    while (true) {
        cout << "Enter a number: ";
        cin >> numbers[entries];
        if (cin.fail()) break;
        entries++;

        if (entries == capacity) {
            capacity *= 2;
            int *temp = new int[capacity];

            for (int i = 0; i < entries; ++i) {
                temp[i] = numbers[i];
            }
            delete[] numbers;
            numbers = temp;
        }
    }

    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    delete[] numbers;

    return 0;
}
