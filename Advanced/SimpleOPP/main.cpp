#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
    Rectangle firstRect;

    int width, height;
    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    firstRect.width = width;
    firstRect.height = height;

    cout << "Area calculate: " << firstRect.getArea() << endl;
    return 0;
}
