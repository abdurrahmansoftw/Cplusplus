//
// Created by arwit on 2/11/2023.
//

#ifndef INHERITANCEANDPOLYMORPHISM_TEXTBOX_H
#define INHERITANCEANDPOLYMORPHISM_TEXTBOX_H

#include <iostream>
#include "Widget.h"

using namespace std;


class TextBox : public Widget {
public:
    TextBox() = default;

    explicit TextBox(const string &value);

    string getValue();

    void setValue(const string &value);

private:
    string value;

};


#endif //INHERITANCEANDPOLYMORPHISM_TEXTBOX_H
