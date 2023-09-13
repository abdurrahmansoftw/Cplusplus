#include <iostream>

using namespace std;

void printNumbers(int numbers[]) {
    numbers[0] = 100;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    printNumbers(numbers);

    cout << numbers[0] << endl;

    return 0;
}
