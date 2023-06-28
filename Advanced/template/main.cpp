#include <iostream>

using namespace std;

template<typename T>

T larger(T first, T second) {
    return first > second ? first : second;
}

int main() {

    auto result = larger(5, 3);
    auto result1 = larger(1.0, 2.0);
    auto result2 = larger('a', 'b');

    return 0;
}
