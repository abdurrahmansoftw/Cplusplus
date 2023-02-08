#include <iostream>

using namespace std;

// Structures example:

int main() {

    struct Person {
        string name;
        int age{};
        double height{};
    };

    Person person1;
    person1.name = "John";
    person1.age = 32;
    person1.height = 1.75;

    Person person2;
    person2.name = "Mary";
    person2.age = 27;
    person2.height = 1.65;

    cout << person1.name << " is " << person1.age << " years old and is " << person1.height << " meters tall." << endl;
    cout << person2.name << " is " << person2.age << " years old and is " << person2.height << " meters tall." << endl;


    return 0;
}
