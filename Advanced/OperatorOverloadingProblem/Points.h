//
// Created by arwit on 2/11/2023.
//

#ifndef OPERATOROVERLOADINGPROBLEM_POINTS_H
#define OPERATOROVERLOADINGPROBLEM_POINTS_H


class Points {
public:
    Points(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    bool operator==(const Points& other) const;

private:
    int x;

    int y;

};


#endif //OPERATOROVERLOADINGPROBLEM_POINTS_H
