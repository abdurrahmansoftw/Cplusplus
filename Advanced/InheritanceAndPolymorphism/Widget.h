//
// Created by arwit on 2/11/2023.
//

#ifndef INHERITANCEANDPOLYMORPHISM_WIDGET_H
#define INHERITANCEANDPOLYMORPHISM_WIDGET_H


class Widget {
public:
    void enable();

    void disable();

    bool isEnabled() const;

private:
    bool enabled;

protected:
    int width;

};


#endif //INHERITANCEANDPOLYMORPHISM_WIDGET_H
