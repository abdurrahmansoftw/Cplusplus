#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
    Rectangle firstRect;
    firstRect.setWidth(10);
    firstRect.setHeight(5);

    cout << "Area: " << firstRect.getArea() << endl;


    return 0;
}
