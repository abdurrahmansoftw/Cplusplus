#include <iostream>
#include <memory>

using namespace std;

// Shared pointers


int main() {
    auto x = make_shared<int>();


    *x = 10;


    shared_ptr<int> y(x);

    if (x == y)
       cout << "Equal" << endl;
    return 0;
}
