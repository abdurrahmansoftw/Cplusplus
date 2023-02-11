//
// Created by arwit on 2/11/2023.
//

#include "Widget.h"

void Widget::enable() {
    enabled = true;

}

void Widget::disable() {
    enabled = false;

}

bool Widget::isEnabled() const {
    return enabled;
}
