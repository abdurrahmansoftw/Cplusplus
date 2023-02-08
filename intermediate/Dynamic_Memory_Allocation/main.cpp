#include <iostream>

using namespace std;

// Dynamic memory allocation example:

int main() {
    // int numbers[5000];

    // heap (free store)

    int *pNumbers = new int[10];

    int *pOtherNumbers = new int;

    delete pOtherNumbers;

    delete[] pNumbers;

    cout << "Hello World!" << endl;



    return 0;
}
