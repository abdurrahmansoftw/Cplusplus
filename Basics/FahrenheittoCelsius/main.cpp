#include <iostream>
using namespace std;

// fahrenheit to celsius

int main() {

    double fahrenheit, celsius;
    cout << "Enter the temperature in fahrenheit: ";

    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "The temperature in celsius is: " << celsius << endl;

    return 0;
}
