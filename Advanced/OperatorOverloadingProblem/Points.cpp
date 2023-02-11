//
// Created by arwit on 2/11/2023.
//

#include "Points.h"

int Points::getX() const {
    return x;
}

void Points::setX(int x) {
    Points::x = x;
}

int Points::getY() const {
    return y;
}

void Points::setY(int y) {
    Points::y = y;
}

Points::Points(int x, int y) : x(x), y(y) {}

bool Points::operator==(const Points &other) const {
    return (x == other.x) && (y == other.y);
}
