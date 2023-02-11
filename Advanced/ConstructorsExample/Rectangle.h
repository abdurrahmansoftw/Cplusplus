//
// Created by arwit on 2/11/2023.
//

#ifndef CONSTRUCTORSEXAMPLE_RECTANGLE_H
#define CONSTRUCTORSEXAMPLE_RECTANGLE_H


class Rectangle {

public:


    Rectangle(int width, int height);

    int draw() const;

    int getArea() const;

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

private:
    int width, height;
};


#endif //CONSTRUCTORSEXAMPLE_RECTANGLE_H
