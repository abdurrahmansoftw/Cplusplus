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

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("Width cannot be less than 0");
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("Height cannot be less than 0");
    this->height = height;
}


