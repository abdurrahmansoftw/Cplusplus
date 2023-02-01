#include <iostream>

using namespace std;

int main() {
    int number = 10;

    int *pNumber = &number;
    
    cout << "Pointer Number: " << pNumber << endl;

    return 0;
}
