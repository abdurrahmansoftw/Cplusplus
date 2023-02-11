#include <iostream>

using namespace std;

template<typename T>

T large(T firstNumber, T secondNumber) {
    return firstNumber > secondNumber ? firstNumber : secondNumber;
}

template<typename K, typename V>

void display(K key, V value) {
    cout << key << " : " << value << endl;
}


int main() {
    display(1, "Hello");
    display(2, "World");
    display(3, "C++");
    display(4, "Programming");
    display(5, "Language");
    display(6, "Template");
    display(7, "Function");
    display(8, "Generic");
    display(9, "Programming");


    return 0;
}
