//
// Created by arwit on 2/11/2023.
//

#include "TextBox.h"

TextBox::TextBox(const string &value) {
    this -> width;
    this->value = value;
}

string TextBox::getValue() {
    return std::string();
}

void TextBox::setValue(const string &value) {
    TextBox::value = value;
}
