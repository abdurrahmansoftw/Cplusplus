#include <iostream>

using namespace std;

// Pointer to Object example:
// 1. Create a class
// 2. Create a pointer to the class
// 3. Create an object of the class
// 4. Assign the address of the object to the pointer
// 5. Use the pointer to access the object

class MyClass {
public:
    int x;
    int y;
};

int main() {
    MyClass *p;
    MyClass obj;
    p = &obj;
    p->x = 10;
    p->y = 20;
    cout << p->x << endl;
    cout << p->y << endl;
    return 0;
}
