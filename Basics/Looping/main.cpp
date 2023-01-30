#include <iostream>

using namespace std;

int main() {

//    int numbers[] = {1, 2, 3, 4, 5};

//    int length = sizeof(numbers) / sizeof(int);
//
//    for (int i = 0; i < length; i++) {
//        cout << numbers[i] << endl;
//    }

//    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
//        cout << numbers[i] << endl;
//    }

//    for (int number : numbers) {
//        cout << number << endl;
//    }

//    string names[] = {"Bob", "Sue", "Joe"};
//
//    for (auto name: names) {
//        cout << name << endl;
//    }


    cout << "Rows: ";
    int rows;
    cin >> rows;

    for (int i = 0; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "* "; // print star
        }
        cout << endl; // print new line
    }
    return 0;
}
