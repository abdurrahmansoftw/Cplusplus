//
// Created by arwit on 2/11/2023.
//

#include "Lengths.h"
#include <iostream>

using namespace std;

Lengths::Lengths(int value) : value(value) {}

bool Lengths::operator==(const Lengths &other) const {
    return value == other.value;
}
