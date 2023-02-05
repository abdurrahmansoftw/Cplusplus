#include <iostream>

using namespace std;

int main() {

    int number = 10;
    int number2 = 20;

    int *pNumber = &number;

    *pNumber = 2;
    pNumber = &number2;
    *pNumber *= 3;

    cout << number << endl;
    cout << number2 << endl;


    return 0;
}
