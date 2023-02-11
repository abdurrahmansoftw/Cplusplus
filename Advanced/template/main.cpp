#include <iostream>

using namespace std;

template<typename T>

T larger(T first, T second) {
    return first > second ? first : second;
}


int main() {

    larger(1, 2);
    larger(1.0, 2.0);
    larger('a', 'b');


    return 0;
}
