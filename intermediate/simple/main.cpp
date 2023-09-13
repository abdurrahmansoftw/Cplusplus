#include <iostream>

using namespace std;

// intermediate Arrays

// 1. String Arrays unpacking example 1
int main() {
    string str1[] = {"Hello", "World"};
    auto [str2, str3] = str1;
    cout << str2 << " " << str3 << endl;
    return 0;
}