#include <iostream>

using namespace std;

int main() {

    int x = 10;
    int y = 20;

    int *ptrX = &x;
    int *ptrY = &y;

    if (ptrX == ptrY) {
        cout << "Pointers are equal" << endl;
    } else {
        cout << "Pointers are not equal" << endl;
    }

    return 0;
}
