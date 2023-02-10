//
// Created by arwit on 2/10/2023.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() {
    // draw a rectangle
    cout << "Drawing a rectangle" << endl;
    cout << "Width: " << width << " Height: " << height << endl;
}

int Rectangle::getArea() {
    return width * height;
}

