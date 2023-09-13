//
// Created by arwit on 2/11/2023.
//

#ifndef EXPLICITKEYWORD_PERSON_H
#define EXPLICITKEYWORD_PERSON_H


class Person {
private:
    int age;
public:
    explicit Person(int age); // explicit keyword prevents implicit conversion

};


#endif //EXPLICITKEYWORD_PERSON_H
