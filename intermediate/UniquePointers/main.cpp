#include <iostream>
#include <memory>

using namespace std;

// unique pointers example

int main() {

    // unique pointer
    auto numbers = make_unique<int[]>(10);
    auto y = make_unique<int>();

    numbers[0] = 10;
    cout << numbers[0] << endl;

    return 0;
}
