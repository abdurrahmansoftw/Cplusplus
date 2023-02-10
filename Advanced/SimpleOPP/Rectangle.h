//
// Created by arwit on 2/10/2023.
//

#ifndef SIMPLEOPP_RECTANGLE_H
#define SIMPLEOPP_RECTANGLE_H


class Rectangle {

public:
    void draw();

    int getArea();

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

private:
    int width, height;


};


#endif //SIMPLEOPP_RECTANGLE_H
