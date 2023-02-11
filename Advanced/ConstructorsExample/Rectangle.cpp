//
// Created by arwit on 2/11/2023.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

int Rectangle::draw() const {
    cout << "Rectangle::draw()" << endl;
    cout << "width: " << width << " height: " << height << endl;
    return 0;
}

int Rectangle::getArea() const {
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("width must be greater than 0");
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height must be greater than 0");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    cout << "Constructor called" << endl;
    setWidth(width);
    setHeight(height);
}

