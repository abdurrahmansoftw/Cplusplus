#include <iostream>

using namespace std;

int main() {

    cout << "First Number: ";
    int firstNumber;
    cin >> firstNumber;


    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Second Number: ";
    int secondNumber;
    cin >> secondNumber;

    cout << "You Entered: " << firstNumber << " and " << secondNumber << endl;
    return 0;
}
