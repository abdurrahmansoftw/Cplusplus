#include <iostream>

using namespace std;

template<typename T>

T large(T firstNumber, T secondNumber) {
    return firstNumber > secondNumber ? firstNumber : secondNumber;
}

int main() {
    auto result = large(10, 20);
    auto result2 = large(10.5, 20.5);
    auto result3 = large('a', 'b');
    auto result4 = large("Hello", "World");


    cout << result << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << result4 << endl;

    return 0;
}
