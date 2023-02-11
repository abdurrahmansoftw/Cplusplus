#include <iostream>
#include "Points.h"

using namespace std;

int main() {

    Points p1(10, 20);
    Points p2(10, 20);

    cout << (p1 == p2) << endl;

    return 0;
}
