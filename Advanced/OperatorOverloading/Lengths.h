//
// Created by arwit on 2/11/2023.
//

#ifndef OPERATOROVERLOADING_LENGTHS_H
#define OPERATOROVERLOADING_LENGTHS_H

#include <compare>

class Lengths {

private:
    int value;

public:
    explicit Lengths(int value);

    bool operator==(const Lengths &other) const;

    bool operator==(const int &other) const;

    bool operator!=(const int &other) const;

    std::strong_ordering operator<=>(const Lengths &other) const;

};


#endif //OPERATOROVERLOADING_LENGTHS_H
